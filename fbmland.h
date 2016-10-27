#ifndef FBMLAND_H
#define FBMLAND_H
#include <fstream>
#include <iostream>
#include <vector>
#include <QString>
#include <QStringList>
#include <string.h>
#include "mainwindow.h"

class MainWindow;

#define DESVQ(x,xq,n) (sqrt((xq)/(n)-(((x)/(n))*((x)/(n)))))
using namespace std;

typedef struct H{
    double a,ea;
    double b,eb;
    double r;
    long n;
} Hstc;

class fbmLand
{
private:
    double calcDens(double **mat,int tam,double th);
    Hstc mquadrados(vector <int> escala, vector <int> nCx);

public:
    double calcDh(vector < vector <int> > *mat,int tam,double th);    
    double calcDb(vector < vector <int> > *mat,int tam,double th);

    void divisores(vector <int> *v, int tamanho);

    fbmLand();
};

#endif // FBMLAND_H
