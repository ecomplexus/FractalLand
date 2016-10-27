#include "setings.h"
#include "ui_setings.h"

setings::setings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setings)
{
    ui->setupUi(this);
}

setings::~setings()
{
    delete ui;
}

int setings::get_coverValue()
{ return this->ui->coverValue->value();}
int setings::get_matrixValue()
{ return this->ui->matrixValue->value();}
int setings::get_seed()
{ return this->ui->seedRnd->value();}


void setings::set_coverValue(int value)
{ this->ui->coverValue->setValue(value);}
void setings::set_matrixValue(int value)
{ this->ui->matrixValue->setValue(value);}

