#include "fbm.h"


fbm::fbm()
{
    this->areAllo=false;
}
fbm::~fbm()
{
    if(areAllo)
        free_dmatrix(z, 0, n, 0, n);
}

void fbm::exec(double hL,int TamL,int maxlevelL, int seedL )
{
    int TamI;
    double minZ,maxZ;



    h=hL;
    this->Tam=TamL;
    maxlevel=maxlevelL;
    n=power (2, maxlevel);

    seed = seedL;

    if(Tam>n)help2();

    nmax=n;
    if(areAllo)
        free_dmatrix(z, 0, n, 0, n);
    z= dmatrix(0,n,0,n);
    this->areAllo=true;

    sigma = 10000.0;
    delta = sigma;
    addition=0;
    zeraz (z);
    initgauss(seed);
    z[0][0] = (delta * gauss());
    z[0][n] = (delta * gauss());
    z[n][0] = (delta * gauss());
    z[n][n] = (delta * gauss());
    D=n;
    d=n/2;
    for (stage=1; stage<=maxlevel; stage++)
    {
        delta *= pow (0.5, 0.5 * h);
        for (x=d; x<=(n-d); x+=D)
            for (y=d; y<=(n-d); y+=D)
                z[x][y] = f4 (delta, z[x+d][y+d], z[x+d][y-d], z[x-d][y+d], z[x-d][y-d]);

        if (addition)
            for (x=0; x<=n; x+=D)
                for (y=0; y<=n; y+=D)
                    z[x][y]+=delta*gauss();

        delta *= pow (0.5, 0.5 * h);
        for (x=d; x<=(n-d); x+=D)
        {
            z[x][0] = f3 (delta, z[x+d][0], z[x-d][0], z[x][d]);
            z[x][n] = f3 (delta, z[x+d][n], z[x-d][n], z[x][n-d]);
            z[0][x] = f3 (delta, z[0][x+d], z[0][x-d], z[d][x]);
            z[n][x] = f3 (delta, z[n][x+d], z[n][x-d], z[n-d][x]);
        }
        for (x=d; x<=(n-d); x+=D)
            for (y=D; y<=(n-D); y+=D)
                z[x][y] = f4 (delta, z[x][y+d], z[x][y-d], z[x+d][y], z[x-d][y]);

        for (x=D; x<=(n-D); x+=D)
            for (y=d; y<=(n-d); y+=D)
                z[x][y] = f4 (delta, z[x][y+d], z[x][y-d], z[x+d][y], z[x-d][y]);

        if (addition)
        {
            for (x=0; x<=n; x+=D)
                for (y=0; y<=n; y+=D)
                    z[x][y]+=delta*gauss();

            for (x=d; x<=(n-d); x+=D)
                for (y=d; y<=(n-d); y+=D)
                    z[x][y]+=delta*gauss();
        }

        D = D/2;
        d = d/2;
    }
    /** SAIDA DA SUPERFICIE **/
    minZ=9999999;
    maxZ=-9999999;
    TamI=(int)((n-Tam)/2);
    for (j=TamI; j<=TamI+Tam; j++)
        for(i=TamI;i<=TamI+Tam;i++)
        {
        minZ=z[i][j]<minZ?z[i][j]:minZ;
        maxZ=z[i][j]>maxZ?z[i][j]:maxZ;
    }

    for (j=TamI; j<=TamI+Tam; j++)
        for(i=TamI;i<=TamI+Tam;i++)
            z[i-TamI][j-TamI]=(z[i][j]-minZ)/(maxZ-minZ);
}




void fbm::initgauss(int seed)
{
    nrand=5;
    arand=RAND_MAX;
    aux=arand;
    gaussadd=sqrt(3.0*nrand);
    gaussfac=2*gaussadd/(nrand*aux);
    srand (seed);
}

double fbm::gauss ()
{
    int i;
    double sum=0.0;
    for (i=1; i<=nrand; i++)
    sum+=rand();
    return (gaussfac*sum-gaussadd);
 }

int fbm::power (int base, int exponent)
{
    int r = 1;
    if (exponent != 0)
        r = base * power (base, exponent-1);
    return (r);
}


int fbm::f3 (double dd, int xx0, int xx1, int xx2)
{
    return ((xx0+xx1+xx2)/3 + dd * gauss() );
}


int fbm::f4 (double dd, int xx0, int xx1, int xx2, int xx3)
{
    return ((xx0+xx1+xx2+xx3)/4 + dd * gauss() );
}


void fbm::zeraz(double **z)
{
    int i, j;
    for (i = 0; i <= nmax; i++)
        for (j = 0; j <= nmax; j++)
             z[i][j] = 0.0;
}



void fbm::help2()
{
  fprintf(stderr,"Error: size greater than 2^level\n");
  exit(0);
}

double **fbm::dmatrix(int nrl,int nrh,int ncl,int nch)
/* allocate an int matrix with subscript range m[nrl..nrh][ncl..nch] */
{
        int i;
        double **m;

        /* allocate pointers to rows */
        m=(double **)malloc((unsigned) (nrh-nrl+1)*sizeof(double*))-nrl;
        if (!m) nrerror("allocation failure 1 in imatrix()");

        /* allocate rows and set pointers to them */
        for(i=nrl;i<=nrh;i++) {
                m[i]=(double *)malloc((unsigned) (nch-ncl+1)*sizeof(double))-ncl;
                if (!m[i]) nrerror("allocation failure 2 in imatrix()");
        }
        /* return pointer to array of pointers to rows */
        return m;
}

void fbm::free_dmatrix(double **m,int nrl,int nrh,int ncl,int nch)
/* free an int matrix allocated by imatrix() */
{
        int i;

        for(i=nrh;i>=nrl;i--) free((char*) (m[i]+ncl));
        free((char*) (m+nrl));
}

void fbm::nrerror(char *error_text)
/* Numerical Recipes standard error handler */
{

        fprintf(stderr,"Numerical Recipes run-time error...\n");
        fprintf(stderr,"%s\n",error_text);
        fprintf(stderr,"...now exiting to system...\n");
        exit(1);
}

void fbm::geraRaster(const char* arq, double zh, int vb, int vc)
{
    ofstream arqRaster;
    arqRaster.open(arq,ios_base::out);
    for(int i=0;i<this->Tam;i++)
    {
        for(int j=0;j<this->Tam;j++)
        {
            arqRaster<< ((this->z[i][j]>zh)?(int)vc:(int)vb) << " ";
        }
        arqRaster << endl;
    }

}
