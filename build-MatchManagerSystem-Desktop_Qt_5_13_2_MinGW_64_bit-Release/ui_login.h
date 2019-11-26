/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *title_login;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *lb_email;
    QLineEdit *line_email;
    QLineEdit *line_password;
    QLabel *lb_password;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_enter;
    QPushButton *btn_register;
    QPushButton *btn_close;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(531, 297);
        centralwidget = new QWidget(Login);
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
        lb_email = new QLabel(gridLayoutWidget);
        lb_email->setObjectName(QString::fromUtf8("lb_email"));

        gridLayout->addWidget(lb_email, 0, 0, 1, 1);

        line_email = new QLineEdit(gridLayoutWidget);
        line_email->setObjectName(QString::fromUtf8("line_email"));

        gridLayout->addWidget(line_email, 0, 1, 1, 1);

        line_password = new QLineEdit(gridLayoutWidget);
        line_password->setObjectName(QString::fromUtf8("line_password"));

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

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 531, 21));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);
        QWidget::setTabOrder(line_email, line_password);
        QWidget::setTabOrder(line_password, btn_enter);
        QWidget::setTabOrder(btn_enter, btn_register);
        QWidget::setTabOrder(btn_register, btn_close);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        title_login->setText(QCoreApplication::translate("Login", "Sistema de Gerenciamento\n"
"de Jogos de Futebol", nullptr));
        lb_email->setText(QCoreApplication::translate("Login", "E-mail", nullptr));
        lb_password->setText(QCoreApplication::translate("Login", "Senha", nullptr));
        btn_enter->setText(QCoreApplication::translate("Login", "Acessar", nullptr));
        btn_register->setText(QCoreApplication::translate("Login", "Cadastrar", nullptr));
        btn_close->setText(QCoreApplication::translate("Login", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
