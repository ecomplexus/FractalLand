#include "fbmland.h"
#include <QProgressDialog>
#include <iostream>



fbmLand::fbmLand()
{

}

void fbmLand::divisores(vector<int> *v, int numero)
{


int divisor;
divisor=1;
do {
if((numero%divisor)==0)
    v->push_back(divisor);
    divisor++;
}while(divisor<=numero);

}

double fbmLand::calcDh(vector < vector <int> > *mat, int tam, double th)
{
    long i,j,U,V;
    long limU,limV;
    long J_H,J_W;
    long m;
    long nB,nW,c;
    int esc;
    double escMin,escd;
    long cTotal=0;

    vector <int> nCaixas;
    vector <int> escala;
    int x;

    divisores(&escala,tam);

    for(m=0;m<escala.size();m++){
        esc = escala[m];
        c = 0;
        // O Contador m define qual a escala a ser utilizada no momento para definir
        // o tamanho da "janela".
        // O Contador c contabiliza as caixas nessa escala
        J_W = tam/esc;
        J_H = tam/esc;
        for(i=0;i<J_W;i++)
        {
            for(j=0;j<J_H;j++)
            {
                nB=0;
                nW=0;
                limU=(i+1)*esc;
                limV=(j+1)*esc;
                // Calculamos os limites da "janela" avaliada
                // Define em que ponto termina a "janela"
                for(U=i*esc;U<limU;U++)
                {
                    for(V=j*esc;V<limV;V++)
                    {
                        // U e V s?o os pontos dentro da "janela"
                        int v=mat->at(U).at(V);

                        if(v == th)
                            nB++;
                        else
                            nW++;
                    }
                }
                if(nB!=0 )
                    c++;
            }
        }
        nCaixas.push_back(c);
        cTotal+=c;
    }
    if(cTotal==0)
        return 4;

    Hstc Ht= mquadrados(escala,nCaixas);
    if(Ht.r>0.7 && Ht.a!=0) return fabs(Ht.a);
    else return 4;
}

double fbmLand::calcDb(vector < vector <int> > *mat,int tam,double th)
{
    long i,j,U,V;
    long limU,limV;
    long J_H,J_W;
    long m;
    long nB,nW,c;
    int esc;
    double escMin,escd;
    long cTotal=0;

    vector <int> nCaixas;
    vector <int> escala;

    divisores(&escala,tam);

    for(m=0;m<escala.size();m++){
        esc = escala[m];
        c = 0;
        // O Contador m define qual a escala a ser utilizada no momento para definir
        // o tamanho da "janela".
        // O Contador c contabiliza as caixas nessa escala
        J_W = tam/esc;
        J_H = tam/esc;
        for(i=0;i<J_W;i++)
        {
            for(j=0;j<J_H;j++)
            {
                nB=0;
                nW=0;
                limU=(i+1)*esc;
                limV=(j+1)*esc;
                // Calculamos os limites da "janela" avaliada
                // Define em que ponto termina a "janela"
                for(U=i*esc;U<limU;U++)
                {
                    for(V=j*esc;V<limV;V++)
                    {
                        // U e V s?o os pontos dentro da "janela"
                        int v=mat->at(U).at(V);
                        if(v == th)
                            nB++;
                        else
                            nW++;
                    }
                }
                if(nB!=0 && nW!=0)
                    c++;
            }
        }
        nCaixas.push_back(c);
        cTotal+=c;
    }
    Hstc Ht= mquadrados(escala,nCaixas);
    if(Ht.r>0.7 && Ht.a!=0) return fabs(Ht.a);
    else return 4;
}



double fbmLand::calcDens(double **mat,int tam,double th)//??????
{
    double sum=0;
    int N=0;
    for(int i=0;i<=tam;i++)
    {
        for(int j=0;j<=tam;j++)
        {
            sum+=(mat[i][j]>th?1:0);
            N++;
        }
    }
    return sum/N;
}


Hstc fbmLand::mquadrados(vector <int> escala, vector <int> nCx)//x
{
    Hstc Ht;
    int n;
    int N=0;
    double sx=0,sy=0;
    double sxy=0,sx2=0,sy2=0;
    double s,a,b,r,rx,ry,w,sa,sb;
    double temp1,temp2;
    for(n=0;n<escala.size();n++){
        if(nCx[n])
        {
            temp1 = log10((double)escala[n]);
            temp2 = log10((double)nCx[n]);
            sx = sx + temp1;
            sy = sy + temp2;
            sxy = sxy + (temp1 * temp2);
            sx2 = sx2 + (temp1 * temp1);
            sy2 = sy2 + (temp2 * temp2);
            N++;
        }
    }
    s=sx2-sx*sx/N;
    a=(sxy-sx*sy/N)/s;
    b=(sy-a*sx)/N;
    w=sy2+a*a*sx2+n*b*b;
    w=w-2.0*a*sxy-2.0*b*sy+2.0*a*b*sx;
    if (w<0.0) w=0.0;
    else w=sqrt(w/(N-2));
    rx=sx2-sx*sx/N;
    ry=sy2-sy*sy/N;
    // Slope error
    sa=(sy2+N*b*b+a*a*sx2-2*(b*sy-a*b*sx+a*sxy))/(N-1);
    sb=sqrt( (sx2*sa)/(N*sx2-sx*sx) );
    sa=sqrt( (N*sa)/(N*sx2-sx*sx) );
    if(fabs(ry)<1.0e-10){
        if(fabs(a)<1.0e-10) r=1.0;
        else r=30000.0;
    } else r=a*a*rx/ry;
    Ht.a=a;
    Ht.ea=sa;
    Ht.r=sqrt(r);
    Ht.b=b;
    Ht.n=N;
    Ht.eb=sb;
    return Ht;
}

