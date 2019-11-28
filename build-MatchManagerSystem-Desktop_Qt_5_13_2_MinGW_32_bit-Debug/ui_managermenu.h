/********************************************************************************
** Form generated from reading UI file 'managermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERMENU_H
#define UI_MANAGERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managermenu
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_tickets;
    QPushButton *btn_search_and_buy;
    QPushButton *btn_delete_user;
    QPushButton *btn_manage_games;
    QPushButton *btn_view_sales;
    QPushButton *btn_exit;
    QLabel *title_menu;

    void setupUi(QDialog *managermenu)
    {
        if (managermenu->objectName().isEmpty())
            managermenu->setObjectName(QString::fromUtf8("managermenu"));
        managermenu->resize(553, 367);
        gridLayoutWidget = new QWidget(managermenu);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 60, 491, 287));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_tickets = new QPushButton(gridLayoutWidget);
        btn_tickets->setObjectName(QString::fromUtf8("btn_tickets"));
        btn_tickets->setMinimumSize(QSize(0, 85));
        QFont font;
        font.setPointSize(10);
        btn_tickets->setFont(font);

        gridLayout->addWidget(btn_tickets, 0, 0, 1, 1);

        btn_search_and_buy = new QPushButton(gridLayoutWidget);
        btn_search_and_buy->setObjectName(QString::fromUtf8("btn_search_and_buy"));
        btn_search_and_buy->setMinimumSize(QSize(0, 85));
        btn_search_and_buy->setFont(font);

        gridLayout->addWidget(btn_search_and_buy, 1, 0, 1, 1);

        btn_delete_user = new QPushButton(gridLayoutWidget);
        btn_delete_user->setObjectName(QString::fromUtf8("btn_delete_user"));
        btn_delete_user->setMinimumSize(QSize(0, 85));
        btn_delete_user->setFont(font);

        gridLayout->addWidget(btn_delete_user, 1, 1, 1, 1);

        btn_manage_games = new QPushButton(gridLayoutWidget);
        btn_manage_games->setObjectName(QString::fromUtf8("btn_manage_games"));
        btn_manage_games->setMinimumSize(QSize(0, 85));
        btn_manage_games->setFont(font);

        gridLayout->addWidget(btn_manage_games, 0, 1, 1, 1);

        btn_view_sales = new QPushButton(gridLayoutWidget);
        btn_view_sales->setObjectName(QString::fromUtf8("btn_view_sales"));
        btn_view_sales->setMinimumSize(QSize(0, 85));
        btn_view_sales->setFont(font);

        gridLayout->addWidget(btn_view_sales, 2, 0, 1, 1);

        btn_exit = new QPushButton(gridLayoutWidget);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setMinimumSize(QSize(0, 85));
        btn_exit->setFont(font);

        gridLayout->addWidget(btn_exit, 2, 1, 1, 1);

        title_menu = new QLabel(managermenu);
        title_menu->setObjectName(QString::fromUtf8("title_menu"));
        title_menu->setGeometry(QRect(0, 10, 551, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        title_menu->setFont(font1);
        title_menu->setAlignment(Qt::AlignCenter);

        retranslateUi(managermenu);

        QMetaObject::connectSlotsByName(managermenu);
    } // setupUi

    void retranslateUi(QDialog *managermenu)
    {
        managermenu->setWindowTitle(QCoreApplication::translate("managermenu", "Dialog", nullptr));
        btn_tickets->setText(QCoreApplication::translate("managermenu", "Ingressos comprados", nullptr));
        btn_search_and_buy->setText(QCoreApplication::translate("managermenu", "Pesquisar e comprar jogos", nullptr));
        btn_delete_user->setText(QCoreApplication::translate("managermenu", "Excluir cadastro", nullptr));
        btn_manage_games->setText(QCoreApplication::translate("managermenu", "Gerenciar jogos", nullptr));
        btn_view_sales->setText(QCoreApplication::translate("managermenu", "Visualizar dados de compras de jogos", nullptr));
        btn_exit->setText(QCoreApplication::translate("managermenu", "Sair do sistema", nullptr));
        title_menu->setText(QCoreApplication::translate("managermenu", "Sistema de Gest\303\243o de Jogos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managermenu: public Ui_managermenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERMENU_H
