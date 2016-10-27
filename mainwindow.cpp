#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QFileDialog>
#include <QListView>
#include <fstream>
#include <QProgressDialog>


using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    fstream config;
    config.open("config.txt",ios_base::in);
    string texto;
    getline(config,texto);   this->preTextRnd=QString(texto.c_str());
    getline(config,texto);   this->posTextRnd=QString(texto.c_str());
    getline(config,texto);   this->preTextFrc=QString(texto.c_str());
    getline(config,texto);   this->posTextFrc=QString(texto.c_str());
    config >> this->coverValue;
    config >> this->matrixValue;
    config.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent* event)
{
    QPainter estojo;

    estojo.begin(this);
    // Draw actual slide
    qreal x=this->ui->frameView->geometry().x();
    qreal y=this->ui->frameView->geometry().y()+35;
    qreal w=this->ui->frameView->geometry().width();
    qreal h=this->ui->frameView->geometry().height();

    QRectF target(x,y,w,h);
    estojo.setBrush(QBrush(QColor(0,255,0,120)));
    estojo.drawRect(target);

    if(this->mat.size()>0)
    {
        double fx=(double)w/this->mat.size();
        double fy=(double)h/this->mat.size();
        for(unsigned i=0;i<this->mat.size();i++)
            for(unsigned j=0;j<this->mat.size();j++)
            {
                if(this->mat[i][j]==this->matrixValue)
                {
                    estojo.setBrush(QBrush(QColor(255,255,255)));
                    estojo.setPen(QPen(QColor(255,255,255)));
                }
                else
                {
                    estojo.setBrush(QBrush(QColor(0,0,0)));
                    estojo.setPen(QPen(QColor(0,0,0)));

                }
                estojo.drawRect(x+i*fx,y+j*fy,fx,fy);
            }
    }
    estojo.end();

}

void MainWindow::showLand(QString fileName)
{
    ifstream landscape;
    landscape.open(fileName.toLocal8Bit());
    this->mat.clear();
    while(!landscape.eof())
    {
        string line;
        getline(landscape,line);
        QString qLine(line.c_str());
        QStringList data;
        vector < int > linha;

        data=qLine.split(' ');
        for(int i=0;i<data.size()-1;i++)
            linha.push_back(data[i].toInt());
        if(data.size()>1)
            this->mat.push_back(linha);
    }
}


void MainWindow::on_actionOpen_triggered()
{
    QString nomeArq;
    this->listaArquivosEntrada.clear();
    this->listaArquivosEntrada = QFileDialog::getOpenFileNames(
                this,
                tr("Escolha arquivo(s) para abrir"),
                QString::null,
                QString::null);

    this->ui->fileListView->addItems(this->listaArquivosEntrada);
}

void MainWindow::on_fileListView_clicked(const QModelIndex &index)
{
    QString fileName=this->ui->fileListView->currentItem()->text();
    showLand(fileName);
    this->repaint();
}

void MainWindow::on_actionParametros_triggered()
{

    this->sets.set_coverValue(this->coverValue);
    this->sets.set_matrixValue(this->matrixValue);

    if(!this->sets.exec()) return;

    this->coverValue=this->sets.get_coverValue();
    this->matrixValue=this->sets.get_matrixValue();

    fstream config;
    config.open("config.txt",ios_base::out);
    config << this->preTextRnd.toStdString() <<endl;
    config << this->posTextRnd.toStdString() <<endl;
    config << this->preTextFrc.toStdString() <<endl;
    config << this->posTextFrc.toStdString() <<endl;
    config << this->coverValue  << endl;
    config << this->matrixValue << endl;
    config.close();
}




void MainWindow::on_actionDim_Fractal_Borda_triggered()
{
    ifstream landscape;
    ofstream saida;
    QString nomeArq;
    int i=0;

    saida.open("fractaisBorda.txt");
    QProgressDialog progress("Calculando...", "Cancel",
                             0, this->listaArquivosEntrada.size(), this);
    progress.setWindowModality(Qt::WindowModal);
    progress.show();
    progress.setValue(0);

    foreach(nomeArq,this->listaArquivosEntrada)
    {
        landscape.open(nomeArq.toLocal8Bit());
        this->mat.clear();
        while(!landscape.eof())
        {
            string line;
            getline(landscape,line);
            QString qLine(line.c_str());
            QStringList data;
            vector < int > linha;

            data=qLine.split(' ');
            for(int i=0;i<data.size()-1;i++)
                linha.push_back(data[i].toInt());
            if(data.size()>1)
                this->mat.push_back(linha);
        }
        landscape.close();
        fbmLand fbmL;
        double D=fbmL.calcDb(&this->mat,this->mat.size(),this->coverValue);
        progress.setValue(i++);
        saida << nomeArq.toStdString() << "\t" << D << endl;
    }
    saida.close();
    progress.close();
}

void MainWindow::on_actionDim_Fractal_Massa_triggered()
{
    {
        ifstream landscape;
        ofstream saida;
        QString nomeArq;
        int i=0;

        saida.open("fractaisMassa.txt");
        QProgressDialog progress("Calculando...", "Cancel",
                                 0, this->listaArquivosEntrada.size(), this);
        progress.setWindowModality(Qt::WindowModal);
        progress.show();
        progress.setValue(0);

        foreach(nomeArq,this->listaArquivosEntrada)
        {
            landscape.open(nomeArq.toLocal8Bit());
            this->mat.clear();
            while(!landscape.eof())
            {
                string line;
                getline(landscape,line);
                QString qLine(line.c_str());
                QStringList data;
                vector < int > linha;

                data=qLine.split(' ');
                for(int i=0;i<data.size()-1;i++)
                    linha.push_back(data[i].toInt());
                if(data.size()>1)
                    this->mat.push_back(linha);
            }
            landscape.close();
            fbmLand fbmL;
            double D=fbmL.calcDh(&this->mat,this->mat.size(),this->coverValue);
            progress.setValue(i++);
            saida << nomeArq.toStdString() << "\t" << D << endl;
        }
        saida.close();
        progress.close();
    }
}
