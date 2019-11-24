/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_register;
    QPushButton *btn_clear;
    QPushButton *btn_return;
    QLabel *title_cadastro;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLineEdit *line_card_number;
    QLineEdit *line_expiration_date_card_2;
    QLineEdit *line_name;
    QLineEdit *line_cpf;
    QLabel *lb_password;
    QLabel *lb_authority;
    QLabel *lb_card_number;
    QLabel *lb_name;
    QLineEdit *line_password;
    QLabel *lb_security_number_card;
    QLabel *lb_expiration_date_card;
    QLabel *lb_cpf;
    QLineEdit *line_security_number_card;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rd_customer;
    QRadioButton *rd_game_manager;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(571, 412);
        gridLayoutWidget = new QWidget(Register);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 40, 441, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_register = new QPushButton(gridLayoutWidget);
        btn_register->setObjectName(QString::fromUtf8("btn_register"));

        horizontalLayout->addWidget(btn_register);

        btn_clear = new QPushButton(gridLayoutWidget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));

        horizontalLayout->addWidget(btn_clear);

        btn_return = new QPushButton(gridLayoutWidget);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));

        horizontalLayout->addWidget(btn_return);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        title_cadastro = new QLabel(gridLayoutWidget);
        title_cadastro->setObjectName(QString::fromUtf8("title_cadastro"));
        title_cadastro->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        title_cadastro->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title_cadastro, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        line_card_number = new QLineEdit(gridLayoutWidget);
        line_card_number->setObjectName(QString::fromUtf8("line_card_number"));

        gridLayout_2->addWidget(line_card_number, 3, 1, 1, 1);

        line_expiration_date_card_2 = new QLineEdit(gridLayoutWidget);
        line_expiration_date_card_2->setObjectName(QString::fromUtf8("line_expiration_date_card_2"));

        gridLayout_2->addWidget(line_expiration_date_card_2, 5, 1, 1, 1);

        line_name = new QLineEdit(gridLayoutWidget);
        line_name->setObjectName(QString::fromUtf8("line_name"));

        gridLayout_2->addWidget(line_name, 0, 1, 1, 1);

        line_cpf = new QLineEdit(gridLayoutWidget);
        line_cpf->setObjectName(QString::fromUtf8("line_cpf"));

        gridLayout_2->addWidget(line_cpf, 1, 1, 1, 1);

        lb_password = new QLabel(gridLayoutWidget);
        lb_password->setObjectName(QString::fromUtf8("lb_password"));
        lb_password->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_password, 2, 0, 1, 1);

        lb_authority = new QLabel(gridLayoutWidget);
        lb_authority->setObjectName(QString::fromUtf8("lb_authority"));
        lb_authority->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_authority, 6, 0, 1, 1);

        lb_card_number = new QLabel(gridLayoutWidget);
        lb_card_number->setObjectName(QString::fromUtf8("lb_card_number"));
        lb_card_number->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_card_number, 3, 0, 1, 1);

        lb_name = new QLabel(gridLayoutWidget);
        lb_name->setObjectName(QString::fromUtf8("lb_name"));
        lb_name->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_name, 0, 0, 1, 1);

        line_password = new QLineEdit(gridLayoutWidget);
        line_password->setObjectName(QString::fromUtf8("line_password"));
        line_password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(line_password, 2, 1, 1, 1);

        lb_security_number_card = new QLabel(gridLayoutWidget);
        lb_security_number_card->setObjectName(QString::fromUtf8("lb_security_number_card"));
        lb_security_number_card->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_security_number_card, 4, 0, 1, 1);

        lb_expiration_date_card = new QLabel(gridLayoutWidget);
        lb_expiration_date_card->setObjectName(QString::fromUtf8("lb_expiration_date_card"));
        lb_expiration_date_card->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_expiration_date_card, 5, 0, 1, 1);

        lb_cpf = new QLabel(gridLayoutWidget);
        lb_cpf->setObjectName(QString::fromUtf8("lb_cpf"));
        lb_cpf->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_cpf, 1, 0, 1, 1);

        line_security_number_card = new QLineEdit(gridLayoutWidget);
        line_security_number_card->setObjectName(QString::fromUtf8("line_security_number_card"));
        line_security_number_card->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(line_security_number_card, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rd_customer = new QRadioButton(gridLayoutWidget);
        rd_customer->setObjectName(QString::fromUtf8("rd_customer"));

        horizontalLayout_2->addWidget(rd_customer);

        rd_game_manager = new QRadioButton(gridLayoutWidget);
        rd_game_manager->setObjectName(QString::fromUtf8("rd_game_manager"));

        horizontalLayout_2->addWidget(rd_game_manager);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        QWidget::setTabOrder(line_name, line_cpf);
        QWidget::setTabOrder(line_cpf, line_password);
        QWidget::setTabOrder(line_password, line_card_number);
        QWidget::setTabOrder(line_card_number, line_security_number_card);
        QWidget::setTabOrder(line_security_number_card, line_expiration_date_card_2);
        QWidget::setTabOrder(line_expiration_date_card_2, rd_customer);
        QWidget::setTabOrder(rd_customer, rd_game_manager);
        QWidget::setTabOrder(rd_game_manager, btn_register);
        QWidget::setTabOrder(btn_register, btn_clear);
        QWidget::setTabOrder(btn_clear, btn_return);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        btn_register->setText(QCoreApplication::translate("Register", "Cadastrar", nullptr));
        btn_clear->setText(QCoreApplication::translate("Register", "Limpar", nullptr));
        btn_return->setText(QCoreApplication::translate("Register", "Voltar", nullptr));
        title_cadastro->setText(QCoreApplication::translate("Register", "Cadastro", nullptr));
        lb_password->setText(QCoreApplication::translate("Register", "Senha", nullptr));
        lb_authority->setText(QCoreApplication::translate("Register", "Privil\303\251gio", nullptr));
        lb_card_number->setText(QCoreApplication::translate("Register", "N\303\272mero do Cart\303\243o\n"
"de Cr\303\251dito", nullptr));
        lb_name->setText(QCoreApplication::translate("Register", "Nome Completo", nullptr));
        lb_security_number_card->setText(QCoreApplication::translate("Register", "C\303\263digo\n"
"de Seguran\303\247a do\n"
"Cart\303\243o de Cr\303\251dito", nullptr));
        lb_expiration_date_card->setText(QCoreApplication::translate("Register", "Data de\n"
"Validade do Cart\303\243o\n"
"de Cr\303\251dito", nullptr));
        lb_cpf->setText(QCoreApplication::translate("Register", "CPF", nullptr));
        rd_customer->setText(QCoreApplication::translate("Register", "Comprador", nullptr));
        rd_game_manager->setText(QCoreApplication::translate("Register", "Gestor de Jogos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
