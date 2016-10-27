/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRandom;
    QAction *actionFractal;
    QAction *actionOpen;
    QAction *actionParametros;
    QAction *actionDim_Fractal_Borda;
    QAction *actionDim_Fractal_Massa;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *fileListView;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QFrame *frameView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QMenu *menuOpen;
    QMenu *menuConfigura_es;
    QMenu *menuCalcular;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(535, 370);
        actionRandom = new QAction(MainWindow);
        actionRandom->setObjectName(QStringLiteral("actionRandom"));
        actionFractal = new QAction(MainWindow);
        actionFractal->setObjectName(QStringLiteral("actionFractal"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionParametros = new QAction(MainWindow);
        actionParametros->setObjectName(QStringLiteral("actionParametros"));
        actionDim_Fractal_Borda = new QAction(MainWindow);
        actionDim_Fractal_Borda->setObjectName(QStringLiteral("actionDim_Fractal_Borda"));
        actionDim_Fractal_Massa = new QAction(MainWindow);
        actionDim_Fractal_Massa->setObjectName(QStringLiteral("actionDim_Fractal_Massa"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        fileListView = new QListWidget(centralWidget);
        fileListView->setObjectName(QStringLiteral("fileListView"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileListView->sizePolicy().hasHeightForWidth());
        fileListView->setSizePolicy(sizePolicy);
        fileListView->setMaximumSize(QSize(300, 16777215));

        verticalLayout->addWidget(fileListView);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 11));

        verticalLayout_3->addWidget(label_2);

        frameView = new QFrame(centralWidget);
        frameView->setObjectName(QStringLiteral("frameView"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameView->sizePolicy().hasHeightForWidth());
        frameView->setSizePolicy(sizePolicy1);
        frameView->setMinimumSize(QSize(300, 0));
        frameView->setMaximumSize(QSize(999999, 16777215));
        frameView->setFrameShape(QFrame::StyledPanel);
        frameView->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frameView);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(187, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(frameView);


        horizontalLayout->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 535, 20));
        menuOpen = new QMenu(menuBar);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        menuConfigura_es = new QMenu(menuBar);
        menuConfigura_es->setObjectName(QStringLiteral("menuConfigura_es"));
        menuCalcular = new QMenu(menuBar);
        menuCalcular->setObjectName(QStringLiteral("menuCalcular"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOpen->menuAction());
        menuBar->addAction(menuCalcular->menuAction());
        menuBar->addAction(menuConfigura_es->menuAction());
        menuOpen->addAction(actionOpen);
        menuConfigura_es->addAction(actionParametros);
        menuCalcular->addAction(actionDim_Fractal_Borda);
        menuCalcular->addAction(actionDim_Fractal_Massa);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FractalLand", 0));
        actionRandom->setText(QApplication::translate("MainWindow", "Random", 0));
        actionFractal->setText(QApplication::translate("MainWindow", "Fractal", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open directory", 0));
#endif // QT_NO_TOOLTIP
        actionParametros->setText(QApplication::translate("MainWindow", "Parameters", 0));
        actionDim_Fractal_Borda->setText(QApplication::translate("MainWindow", "Edge Fractal", 0));
        actionDim_Fractal_Massa->setText(QApplication::translate("MainWindow", "Mass Fratal", 0));
        label->setText(QApplication::translate("MainWindow", "File List", 0));
        label_2->setText(QApplication::translate("MainWindow", "Map", 0));
        menuOpen->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuConfigura_es->setTitle(QApplication::translate("MainWindow", "Settings", 0));
        menuCalcular->setTitle(QApplication::translate("MainWindow", "Calcule", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
