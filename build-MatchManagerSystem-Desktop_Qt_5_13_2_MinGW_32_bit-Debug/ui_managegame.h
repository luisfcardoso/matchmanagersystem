/********************************************************************************
** Form generated from reading UI file 'managegame.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEGAME_H
#define UI_MANAGEGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ManageGame
{
public:
    QLabel *title_manage_game;
    QTableView *table_game;
    QPushButton *btn_return;
    QPushButton *btn_add_game;

    void setupUi(QDialog *ManageGame)
    {
        if (ManageGame->objectName().isEmpty())
            ManageGame->setObjectName(QString::fromUtf8("ManageGame"));
        ManageGame->resize(594, 405);
        title_manage_game = new QLabel(ManageGame);
        title_manage_game->setObjectName(QString::fromUtf8("title_manage_game"));
        title_manage_game->setGeometry(QRect(6, 20, 581, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        title_manage_game->setFont(font);
        title_manage_game->setAlignment(Qt::AlignCenter);
        table_game = new QTableView(ManageGame);
        table_game->setObjectName(QString::fromUtf8("table_game"));
        table_game->setGeometry(QRect(20, 70, 551, 281));
        btn_return = new QPushButton(ManageGame);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        btn_return->setGeometry(QRect(490, 370, 75, 23));
        btn_add_game = new QPushButton(ManageGame);
        btn_add_game->setObjectName(QString::fromUtf8("btn_add_game"));
        btn_add_game->setGeometry(QRect(374, 370, 111, 23));

        retranslateUi(ManageGame);

        QMetaObject::connectSlotsByName(ManageGame);
    } // setupUi

    void retranslateUi(QDialog *ManageGame)
    {
        ManageGame->setWindowTitle(QCoreApplication::translate("ManageGame", "Dialog", nullptr));
        title_manage_game->setText(QCoreApplication::translate("ManageGame", "Gerenciar jogos", nullptr));
        btn_return->setText(QCoreApplication::translate("ManageGame", "Voltar", nullptr));
        btn_add_game->setText(QCoreApplication::translate("ManageGame", "Adicionar Jogo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageGame: public Ui_ManageGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEGAME_H
