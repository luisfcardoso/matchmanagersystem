/********************************************************************************
** Form generated from reading UI file 'customermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERMENU_H
#define UI_CUSTOMERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerMenu
{
public:
    QLabel *title_customer_menu;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_search_buy;
    QGridLayout *gridLayout_3;
    QPushButton *btn_update;
    QPushButton *btn_close_customer_menu;

    void setupUi(QDialog *CustomerMenu)
    {
        if (CustomerMenu->objectName().isEmpty())
            CustomerMenu->setObjectName(QString::fromUtf8("CustomerMenu"));
        CustomerMenu->resize(551, 396);
        title_customer_menu = new QLabel(CustomerMenu);
        title_customer_menu->setObjectName(QString::fromUtf8("title_customer_menu"));
        title_customer_menu->setGeometry(QRect(0, 30, 551, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        title_customer_menu->setFont(font);
        title_customer_menu->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(CustomerMenu);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 100, 471, 250));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_search_buy = new QPushButton(verticalLayoutWidget);
        btn_search_buy->setObjectName(QString::fromUtf8("btn_search_buy"));
        btn_search_buy->setMinimumSize(QSize(0, 120));
        QFont font1;
        font1.setPointSize(11);
        btn_search_buy->setFont(font1);

        verticalLayout->addWidget(btn_search_buy);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btn_update = new QPushButton(verticalLayoutWidget);
        btn_update->setObjectName(QString::fromUtf8("btn_update"));
        btn_update->setMinimumSize(QSize(0, 120));
        btn_update->setSizeIncrement(QSize(0, 0));
        btn_update->setFont(font1);

        gridLayout_3->addWidget(btn_update, 0, 0, 1, 1);

        btn_close_customer_menu = new QPushButton(verticalLayoutWidget);
        btn_close_customer_menu->setObjectName(QString::fromUtf8("btn_close_customer_menu"));
        btn_close_customer_menu->setMinimumSize(QSize(0, 120));
        btn_close_customer_menu->setFont(font1);

        gridLayout_3->addWidget(btn_close_customer_menu, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        retranslateUi(CustomerMenu);

        QMetaObject::connectSlotsByName(CustomerMenu);
    } // setupUi

    void retranslateUi(QDialog *CustomerMenu)
    {
        CustomerMenu->setWindowTitle(QCoreApplication::translate("CustomerMenu", "Dialog", nullptr));
        title_customer_menu->setText(QCoreApplication::translate("CustomerMenu", "Sistema de Gerenciamento de Jogos de Futebol", nullptr));
        btn_search_buy->setText(QCoreApplication::translate("CustomerMenu", "Pesquisar Partidas e Comprar Ingressos", nullptr));
        btn_update->setText(QCoreApplication::translate("CustomerMenu", "Atualizar e Excluir Cadastro", nullptr));
        btn_close_customer_menu->setText(QCoreApplication::translate("CustomerMenu", "Sair do Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerMenu: public Ui_CustomerMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMENU_H
