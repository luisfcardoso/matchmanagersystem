/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title_login;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *lb_cpf;
    QLineEdit *line_cpf;
    QLineEdit *line_password;
    QLabel *lb_password;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_enter;
    QPushButton *btn_register;
    QPushButton *btn_close;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(531, 297);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        title_login = new QLabel(centralwidget);
        title_login->setObjectName(QString::fromUtf8("title_login"));
        title_login->setGeometry(QRect(10, 20, 511, 51));
        title_login->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        title_login->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 100, 351, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lb_cpf = new QLabel(gridLayoutWidget);
        lb_cpf->setObjectName(QString::fromUtf8("lb_cpf"));
        lb_cpf->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_cpf, 0, 0, 1, 1);

        line_cpf = new QLineEdit(gridLayoutWidget);
        line_cpf->setObjectName(QString::fromUtf8("line_cpf"));

        gridLayout->addWidget(line_cpf, 0, 1, 1, 1);

        line_password = new QLineEdit(gridLayoutWidget);
        line_password->setObjectName(QString::fromUtf8("line_password"));
        line_password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(line_password, 1, 1, 1, 1);

        lb_password = new QLabel(gridLayoutWidget);
        lb_password->setObjectName(QString::fromUtf8("lb_password"));

        gridLayout->addWidget(lb_password, 1, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 210, 351, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_enter = new QPushButton(horizontalLayoutWidget);
        btn_enter->setObjectName(QString::fromUtf8("btn_enter"));

        horizontalLayout->addWidget(btn_enter);

        btn_register = new QPushButton(horizontalLayoutWidget);
        btn_register->setObjectName(QString::fromUtf8("btn_register"));

        horizontalLayout->addWidget(btn_register);

        btn_close = new QPushButton(horizontalLayoutWidget);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));

        horizontalLayout->addWidget(btn_close);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 531, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(line_cpf, line_password);
        QWidget::setTabOrder(line_password, btn_enter);
        QWidget::setTabOrder(btn_enter, btn_register);
        QWidget::setTabOrder(btn_register, btn_close);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title_login->setText(QCoreApplication::translate("MainWindow", "Sistema de Gerenciamento\n"
"de Jogos de Futebol", nullptr));
        lb_cpf->setText(QCoreApplication::translate("MainWindow", "CPF", nullptr));
        lb_password->setText(QCoreApplication::translate("MainWindow", "Senha", nullptr));
        btn_enter->setText(QCoreApplication::translate("MainWindow", "Acessar", nullptr));
        btn_register->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        btn_close->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
