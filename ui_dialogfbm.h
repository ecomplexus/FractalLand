/********************************************************************************
** Form generated from reading UI file 'dialogfbm.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFBM_H
#define UI_DIALOGFBM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialogFbm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QDoubleSpinBox *Hi;
    QLabel *label_9;
    QDoubleSpinBox *Hf;
    QLabel *label_10;
    QDoubleSpinBox *Hp;
    QSpacerItem *horizontalSpacer_6;
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
    QLabel *label_8;
    QSpinBox *nArq;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *path;
    QPushButton *pushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dialogFbm)
    {
        if (dialogFbm->objectName().isEmpty())
            dialogFbm->setObjectName(QStringLiteral("dialogFbm"));
        dialogFbm->resize(571, 194);
        dialogFbm->setMaximumSize(QSize(16777215, 300));
        verticalLayout = new QVBoxLayout(dialogFbm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(dialogFbm);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        Hi = new QDoubleSpinBox(dialogFbm);
        Hi->setObjectName(QStringLiteral("Hi"));
        Hi->setMinimum(0.1);
        Hi->setMaximum(1);
        Hi->setSingleStep(0.1);

        horizontalLayout_7->addWidget(Hi);

        label_9 = new QLabel(dialogFbm);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        Hf = new QDoubleSpinBox(dialogFbm);
        Hf->setObjectName(QStringLiteral("Hf"));
        Hf->setMinimum(0.01);
        Hf->setMaximum(1);
        Hf->setSingleStep(0.1);
        Hf->setValue(0.9);

        horizontalLayout_7->addWidget(Hf);

        label_10 = new QLabel(dialogFbm);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_7->addWidget(label_10);

        Hp = new QDoubleSpinBox(dialogFbm);
        Hp->setObjectName(QStringLiteral("Hp"));
        Hp->setMinimum(0.01);
        Hp->setMaximum(1);
        Hp->setSingleStep(0.1);
        Hp->setValue(0.1);

        horizontalLayout_7->addWidget(Hp);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(dialogFbm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Ci = new QSpinBox(dialogFbm);
        Ci->setObjectName(QStringLiteral("Ci"));
        Ci->setValue(1);

        horizontalLayout->addWidget(Ci);

        label_2 = new QLabel(dialogFbm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        Cf = new QSpinBox(dialogFbm);
        Cf->setObjectName(QStringLiteral("Cf"));
        Cf->setMinimum(1);
        Cf->setMaximum(100);
        Cf->setValue(100);

        horizontalLayout->addWidget(Cf);

        label_3 = new QLabel(dialogFbm);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        Cp = new QSpinBox(dialogFbm);
        Cp->setObjectName(QStringLiteral("Cp"));
        Cp->setMinimum(1);
        Cp->setMaximum(100);

        horizontalLayout->addWidget(Cp);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(dialogFbm);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        Tam = new QSpinBox(dialogFbm);
        Tam->setObjectName(QStringLiteral("Tam"));
        Tam->setMinimum(2);
        Tam->setMaximum(9999999);
        Tam->setValue(100);

        horizontalLayout_5->addWidget(Tam);

        label_4 = new QLabel(dialogFbm);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        amo = new QSpinBox(dialogFbm);
        amo->setObjectName(QStringLiteral("amo"));
        amo->setMinimum(1);
        amo->setMaximum(999999);

        horizontalLayout_5->addWidget(amo);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(dialogFbm);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        nArq = new QSpinBox(dialogFbm);
        nArq->setObjectName(QStringLiteral("nArq"));
        nArq->setEnabled(false);
        QFont font;
        font.setPointSize(20);
        font.setItalic(true);
        nArq->setFont(font);
        nArq->setLayoutDirection(Qt::LeftToRight);
        nArq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nArq->setButtonSymbols(QAbstractSpinBox::NoButtons);
        nArq->setMaximum(999999999);

        horizontalLayout_4->addWidget(nArq);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(dialogFbm);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        path = new QLineEdit(dialogFbm);
        path->setObjectName(QStringLiteral("path"));

        horizontalLayout_6->addWidget(path);

        pushButton = new QPushButton(dialogFbm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(20, 0));

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_6);

        buttonBox = new QDialogButtonBox(dialogFbm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(dialogFbm);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialogFbm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialogFbm, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialogFbm);
    } // setupUi

    void retranslateUi(QDialog *dialogFbm)
    {
        dialogFbm->setWindowTitle(QApplication::translate("dialogFbm", "Dialog", 0));
        label_7->setText(QApplication::translate("dialogFbm", "H inicial", 0));
        label_9->setText(QApplication::translate("dialogFbm", "H final", 0));
        label_10->setText(QApplication::translate("dialogFbm", "Passo para aumento de H", 0));
        label->setText(QApplication::translate("dialogFbm", "Cobertura Inicial", 0));
        label_2->setText(QApplication::translate("dialogFbm", "Cobertura Final", 0));
        label_3->setText(QApplication::translate("dialogFbm", "Passo para aumento de cobertura", 0));
        label_5->setText(QApplication::translate("dialogFbm", "Tamanho", 0));
        label_4->setText(QApplication::translate("dialogFbm", "N\303\272mero de amostras", 0));
        label_8->setText(QApplication::translate("dialogFbm", "TOTAL DE ARQUIVOS A SEREM GERADOS:", 0));
        label_6->setText(QApplication::translate("dialogFbm", "Pasta", 0));
        pushButton->setText(QApplication::translate("dialogFbm", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class dialogFbm: public Ui_dialogFbm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFBM_H
