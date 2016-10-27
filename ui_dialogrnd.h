/********************************************************************************
** Form generated from reading UI file 'dialogrnd.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRND_H
#define UI_DIALOGRND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogRnd
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *Ci;
    QLabel *label_2;
    QSpinBox *Cf;
    QLabel *label_3;
    QSpinBox *Cp;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *Tam;
    QLabel *label_4;
    QSpinBox *amo;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSpinBox *nArq;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *path;
    QPushButton *pushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogRnd)
    {
        if (DialogRnd->objectName().isEmpty())
            DialogRnd->setObjectName(QStringLiteral("DialogRnd"));
        DialogRnd->resize(599, 257);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogRnd->sizePolicy().hasHeightForWidth());
        DialogRnd->setSizePolicy(sizePolicy);
        DialogRnd->setMaximumSize(QSize(16000, 300));
        verticalLayout = new QVBoxLayout(DialogRnd);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DialogRnd);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Ci = new QSpinBox(DialogRnd);
        Ci->setObjectName(QStringLiteral("Ci"));
        Ci->setValue(1);

        horizontalLayout->addWidget(Ci);

        label_2 = new QLabel(DialogRnd);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        Cf = new QSpinBox(DialogRnd);
        Cf->setObjectName(QStringLiteral("Cf"));
        Cf->setMinimum(1);
        Cf->setMaximum(100);
        Cf->setValue(100);

        horizontalLayout->addWidget(Cf);

        label_3 = new QLabel(DialogRnd);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        Cp = new QSpinBox(DialogRnd);
        Cp->setObjectName(QStringLiteral("Cp"));
        Cp->setMinimum(1);
        Cp->setMaximum(100);

        horizontalLayout->addWidget(Cp);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(DialogRnd);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        Tam = new QSpinBox(DialogRnd);
        Tam->setObjectName(QStringLiteral("Tam"));
        Tam->setMinimum(2);
        Tam->setMaximum(9999999);
        Tam->setValue(100);

        horizontalLayout_5->addWidget(Tam);

        label_4 = new QLabel(DialogRnd);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        amo = new QSpinBox(DialogRnd);
        amo->setObjectName(QStringLiteral("amo"));
        amo->setMinimum(1);
        amo->setMaximum(999999);

        horizontalLayout_5->addWidget(amo);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(DialogRnd);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        nArq = new QSpinBox(DialogRnd);
        nArq->setObjectName(QStringLiteral("nArq"));
        nArq->setEnabled(false);
        QFont font;
        font.setPointSize(20);
        font.setItalic(true);
        nArq->setFont(font);
        nArq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nArq->setButtonSymbols(QAbstractSpinBox::NoButtons);
        nArq->setMaximum(999999999);

        horizontalLayout_4->addWidget(nArq);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(DialogRnd);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        path = new QLineEdit(DialogRnd);
        path->setObjectName(QStringLiteral("path"));

        horizontalLayout_6->addWidget(path);

        pushButton = new QPushButton(DialogRnd);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(20, 0));

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_6);

        buttonBox = new QDialogButtonBox(DialogRnd);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogRnd);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogRnd, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogRnd, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogRnd);
    } // setupUi

    void retranslateUi(QDialog *DialogRnd)
    {
        DialogRnd->setWindowTitle(QApplication::translate("DialogRnd", "Par\303\242metros Paisagens Aleat\303\263rias", 0));
        label->setText(QApplication::translate("DialogRnd", "Cobertura Inicial", 0));
        label_2->setText(QApplication::translate("DialogRnd", "Cobertura Final", 0));
        label_3->setText(QApplication::translate("DialogRnd", "Passo para aumento de cobertura", 0));
        label_5->setText(QApplication::translate("DialogRnd", "Tamanho", 0));
        label_4->setText(QApplication::translate("DialogRnd", "N\303\272mero de amostras", 0));
        label_7->setText(QApplication::translate("DialogRnd", "TOTAL DE ARQUIVOS A SEREM GERADOS:", 0));
        label_6->setText(QApplication::translate("DialogRnd", "Pasta", 0));
        pushButton->setText(QApplication::translate("DialogRnd", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogRnd: public Ui_DialogRnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRND_H
