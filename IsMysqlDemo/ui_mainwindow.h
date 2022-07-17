/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *IN_Text;
    QTextEdit *OUT_Text;
    QLineEdit *IP_Edit;
    QLineEdit *PassWordEdit;
    QLineEdit *User_Edit;
    QLineEdit *Prot_Edit;
    QPushButton *ToConnect_Button;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(648, 619);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        IN_Text = new QTextEdit(centralWidget);
        IN_Text->setObjectName(QStringLiteral("IN_Text"));
        IN_Text->setGeometry(QRect(0, 110, 646, 122));
        OUT_Text = new QTextEdit(centralWidget);
        OUT_Text->setObjectName(QStringLiteral("OUT_Text"));
        OUT_Text->setGeometry(QRect(40, 330, 256, 192));
        IP_Edit = new QLineEdit(centralWidget);
        IP_Edit->setObjectName(QStringLiteral("IP_Edit"));
        IP_Edit->setGeometry(QRect(50, 30, 113, 21));
        PassWordEdit = new QLineEdit(centralWidget);
        PassWordEdit->setObjectName(QStringLiteral("PassWordEdit"));
        PassWordEdit->setGeometry(QRect(170, 60, 113, 21));
        User_Edit = new QLineEdit(centralWidget);
        User_Edit->setObjectName(QStringLiteral("User_Edit"));
        User_Edit->setGeometry(QRect(50, 60, 113, 21));
        Prot_Edit = new QLineEdit(centralWidget);
        Prot_Edit->setObjectName(QStringLiteral("Prot_Edit"));
        Prot_Edit->setGeometry(QRect(170, 30, 113, 21));
        ToConnect_Button = new QPushButton(centralWidget);
        ToConnect_Button->setObjectName(QStringLiteral("ToConnect_Button"));
        ToConnect_Button->setGeometry(QRect(400, 40, 93, 28));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 70, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 648, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        IP_Edit->setText(QApplication::translate("MainWindow", "127.0.0.1", Q_NULLPTR));
        PassWordEdit->setText(QApplication::translate("MainWindow", "123456", Q_NULLPTR));
        User_Edit->setText(QApplication::translate("MainWindow", "root", Q_NULLPTR));
        Prot_Edit->setText(QApplication::translate("MainWindow", "3306", Q_NULLPTR));
        ToConnect_Button->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
