/********************************************************************************
** Form generated from reading UI file 'bought_tickets.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUGHT_TICKETS_H
#define UI_BOUGHT_TICKETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_bought_tickets
{
public:
    QLabel *title_bought_tickets;
    QTableView *table_tickets;
    QPushButton *btn_return;

    void setupUi(QDialog *bought_tickets)
    {
        if (bought_tickets->objectName().isEmpty())
            bought_tickets->setObjectName(QString::fromUtf8("bought_tickets"));
        bought_tickets->resize(400, 300);
        title_bought_tickets = new QLabel(bought_tickets);
        title_bought_tickets->setObjectName(QString::fromUtf8("title_bought_tickets"));
        title_bought_tickets->setGeometry(QRect(0, 10, 401, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        title_bought_tickets->setFont(font);
        title_bought_tickets->setAlignment(Qt::AlignCenter);
        table_tickets = new QTableView(bought_tickets);
        table_tickets->setObjectName(QString::fromUtf8("table_tickets"));
        table_tickets->setGeometry(QRect(20, 50, 361, 191));
        btn_return = new QPushButton(bought_tickets);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        btn_return->setGeometry(QRect(310, 260, 75, 23));

        retranslateUi(bought_tickets);

        QMetaObject::connectSlotsByName(bought_tickets);
    } // setupUi

    void retranslateUi(QDialog *bought_tickets)
    {
        bought_tickets->setWindowTitle(QCoreApplication::translate("bought_tickets", "Dialog", nullptr));
        title_bought_tickets->setText(QCoreApplication::translate("bought_tickets", "Lista de Tickets Comprados", nullptr));
        btn_return->setText(QCoreApplication::translate("bought_tickets", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bought_tickets: public Ui_bought_tickets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUGHT_TICKETS_H
