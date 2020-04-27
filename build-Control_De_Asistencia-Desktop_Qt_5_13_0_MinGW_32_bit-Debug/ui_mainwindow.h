/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNuevo_archivo;
    QAction *actionAcerca_De;
    QAction *action_Guarda;
    QAction *action_Abrir;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *Grupostxt;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QLabel *label;
    QSpinBox *Filas;
    QLabel *label_2;
    QSpinBox *Columnas;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(726, 441);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        actionNuevo_archivo = new QAction(MainWindow);
        actionNuevo_archivo->setObjectName(QString::fromUtf8("actionNuevo_archivo"));
        actionAcerca_De = new QAction(MainWindow);
        actionAcerca_De->setObjectName(QString::fromUtf8("actionAcerca_De"));
        action_Guarda = new QAction(MainWindow);
        action_Guarda->setObjectName(QString::fromUtf8("action_Guarda"));
        action_Abrir = new QAction(MainWindow);
        action_Abrir->setObjectName(QString::fromUtf8("action_Abrir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);

        verticalLayout->addWidget(tableView);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        Grupostxt = new QLineEdit(centralWidget);
        Grupostxt->setObjectName(QString::fromUtf8("Grupostxt"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Grupostxt->sizePolicy().hasHeightForWidth());
        Grupostxt->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(Grupostxt);

        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        Filas = new QSpinBox(centralWidget);
        Filas->setObjectName(QString::fromUtf8("Filas"));

        verticalLayout_2->addWidget(Filas);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        Columnas = new QSpinBox(centralWidget);
        Columnas->setObjectName(QString::fromUtf8("Columnas"));

        verticalLayout_2->addWidget(Columnas);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setAcceptDrops(false);

        verticalLayout_2->addWidget(pushButton);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 726, 22));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionNuevo_archivo);
        menuArchivo->addSeparator();
        menuArchivo->addAction(action_Abrir);
        menuArchivo->addAction(action_Guarda);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionAcerca_De);
        menuArchivo->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lista de alumnos", nullptr));
        actionNuevo_archivo->setText(QCoreApplication::translate("MainWindow", "Nuevo archivo", nullptr));
        actionAcerca_De->setText(QCoreApplication::translate("MainWindow", "Acerca De", nullptr));
        action_Guarda->setText(QCoreApplication::translate("MainWindow", "&Guarda", nullptr));
        action_Abrir->setText(QCoreApplication::translate("MainWindow", "&Abrir", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "----------------", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "----------------", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Grupo", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "SI", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Retardo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Filas", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Columnas", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Ingresar", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "----------------", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Version 0.1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "----------------", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
