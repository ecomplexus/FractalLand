#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <QModelIndex>
#include <QPainter>
#include <vector>
#include <setings.h>
#include "fbmland.h"



using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QStringList listaArquivosEntrada;
    
private:
    Ui::MainWindow *ui;
    void showLand(QString fileName);
    vector < vector < int > > mat;

    setings sets;


    QString preTextRnd;
    QString posTextRnd;
    QString preTextFrc;
    QString posTextFrc;
    int coverValue;
    int matrixValue;
    double localFractal(vector<vector<int> > *data, vector<int> escala,int escMin,
                                    int escMax,int cover);

protected:
    void paintEvent(QPaintEvent* event);
private slots:
    void on_actionOpen_triggered();
    void on_fileListView_clicked(const QModelIndex &index);
    void on_actionParametros_triggered();
    void on_actionDim_Fractal_Borda_triggered();
    void on_actionDim_Fractal_Massa_triggered();
};

#endif // MAINWINDOW_H
