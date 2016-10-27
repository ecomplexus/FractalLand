#ifndef SETINGS_H
#define SETINGS_H

#include <QDialog>

namespace Ui {
class setings;
}

class setings : public QDialog
{
    Q_OBJECT
    
public:

    explicit setings(QWidget *parent = 0);
    ~setings();

    int get_coverValue();
    int get_matrixValue();
    int get_seed();

    void set_coverValue(int value);
    void set_matrixValue(int value);

private:
    Ui::setings *ui;
};

#endif // SETINGS_H
