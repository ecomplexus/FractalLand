/********************************************************************************
** Form generated from reading UI file 'setings.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETINGS_H
#define UI_SETINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_setings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *coverValue;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *matrixValue;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *seedRnd;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *setings)
    {
        if (setings->objectName().isEmpty())
            setings->setObjectName(QStringLiteral("setings"));
        setings->resize(225, 239);
        verticalLayout = new QVBoxLayout(setings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(setings);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        coverValue = new QSpinBox(setings);
        coverValue->setObjectName(QStringLiteral("coverValue"));
        coverValue->setMinimum(-99999);
        coverValue->setMaximum(99999);
        coverValue->setValue(1);

        horizontalLayout_5->addWidget(coverValue);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(setings);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        matrixValue = new QSpinBox(setings);
        matrixValue->setObjectName(QStringLiteral("matrixValue"));
        matrixValue->setMinimum(-999999);
        matrixValue->setMaximum(999999);

        horizontalLayout_6->addWidget(matrixValue);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(setings);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        seedRnd = new QSpinBox(setings);
        seedRnd->setObjectName(QStringLiteral("seedRnd"));
        seedRnd->setMinimum(-999999);
        seedRnd->setMaximum(999999);
        seedRnd->setValue(5);

        horizontalLayout_7->addWidget(seedRnd);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_7);

        buttonBox = new QDialogButtonBox(setings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(setings);
        QObject::connect(buttonBox, SIGNAL(accepted()), setings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), setings, SLOT(reject()));

        QMetaObject::connectSlotsByName(setings);
    } // setupUi

    void retranslateUi(QDialog *setings)
    {
        setings->setWindowTitle(QApplication::translate("setings", "Settings", 0));
        label_5->setText(QApplication::translate("setings", "Cover value", 0));
        label_6->setText(QApplication::translate("setings", "Matrix value", 0));
        label_7->setText(QApplication::translate("setings", "Random seed", 0));
    } // retranslateUi

};

namespace Ui {
    class setings: public Ui_setings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETINGS_H
