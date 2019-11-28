/********************************************************************************
** Form generated from reading UI file 'searchandbuy.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHANDBUY_H
#define UI_SEARCHANDBUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchAndBuy
{
public:
    QLabel *title_search;
    QTableWidget *table_match;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDateEdit *date_end;
    QLabel *lb_city;
    QLabel *lb_end;
    QLabel *lb_state;
    QDateEdit *date_begin;
    QLineEdit *line_city;
    QLabel *lb_begin;
    QPushButton *btn_search;
    QLineEdit *lineEdit;
    QPushButton *btn_return;

    void setupUi(QDialog *SearchAndBuy)
    {
        if (SearchAndBuy->objectName().isEmpty())
            SearchAndBuy->setObjectName(QString::fromUtf8("SearchAndBuy"));
        SearchAndBuy->resize(603, 381);
        title_search = new QLabel(SearchAndBuy);
        title_search->setObjectName(QString::fromUtf8("title_search"));
        title_search->setGeometry(QRect(0, 10, 601, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        title_search->setFont(font);
        title_search->setAlignment(Qt::AlignCenter);
        table_match = new QTableWidget(SearchAndBuy);
        table_match->setObjectName(QString::fromUtf8("table_match"));
        table_match->setGeometry(QRect(20, 120, 561, 211));
        gridLayoutWidget = new QWidget(SearchAndBuy);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 60, 561, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        date_end = new QDateEdit(gridLayoutWidget);
        date_end->setObjectName(QString::fromUtf8("date_end"));

        gridLayout->addWidget(date_end, 1, 1, 1, 1);

        lb_city = new QLabel(gridLayoutWidget);
        lb_city->setObjectName(QString::fromUtf8("lb_city"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lb_city->setFont(font1);
        lb_city->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_city, 0, 2, 1, 1);

        lb_end = new QLabel(gridLayoutWidget);
        lb_end->setObjectName(QString::fromUtf8("lb_end"));
        lb_end->setFont(font1);
        lb_end->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_end, 0, 1, 1, 1);

        lb_state = new QLabel(gridLayoutWidget);
        lb_state->setObjectName(QString::fromUtf8("lb_state"));
        lb_state->setFont(font1);
        lb_state->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_state, 0, 3, 1, 1);

        date_begin = new QDateEdit(gridLayoutWidget);
        date_begin->setObjectName(QString::fromUtf8("date_begin"));

        gridLayout->addWidget(date_begin, 1, 0, 1, 1);

        line_city = new QLineEdit(gridLayoutWidget);
        line_city->setObjectName(QString::fromUtf8("line_city"));

        gridLayout->addWidget(line_city, 1, 2, 1, 1);

        lb_begin = new QLabel(gridLayoutWidget);
        lb_begin->setObjectName(QString::fromUtf8("lb_begin"));
        lb_begin->setFont(font1);
        lb_begin->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_begin, 0, 0, 1, 1);

        btn_search = new QPushButton(gridLayoutWidget);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));

        gridLayout->addWidget(btn_search, 1, 4, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 3, 1, 1);

        btn_return = new QPushButton(SearchAndBuy);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        btn_return->setGeometry(QRect(470, 340, 111, 23));
        QWidget::setTabOrder(date_begin, date_end);
        QWidget::setTabOrder(date_end, line_city);
        QWidget::setTabOrder(line_city, btn_search);
        QWidget::setTabOrder(btn_search, table_match);
        QWidget::setTabOrder(table_match, btn_return);

        retranslateUi(SearchAndBuy);

        QMetaObject::connectSlotsByName(SearchAndBuy);
    } // setupUi

    void retranslateUi(QDialog *SearchAndBuy)
    {
        SearchAndBuy->setWindowTitle(QCoreApplication::translate("SearchAndBuy", "Dialog", nullptr));
        title_search->setText(QCoreApplication::translate("SearchAndBuy", "Pesquisa de Partidas e Compra de Ingressos", nullptr));
        lb_city->setText(QCoreApplication::translate("SearchAndBuy", "Nome da Cidade", nullptr));
        lb_end->setText(QCoreApplication::translate("SearchAndBuy", "Data de Fim", nullptr));
        lb_state->setText(QCoreApplication::translate("SearchAndBuy", "Estado", nullptr));
        lb_begin->setText(QCoreApplication::translate("SearchAndBuy", "Data de In\303\255cio", nullptr));
        btn_search->setText(QCoreApplication::translate("SearchAndBuy", "Pesquisar", nullptr));
        btn_return->setText(QCoreApplication::translate("SearchAndBuy", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchAndBuy: public Ui_SearchAndBuy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHANDBUY_H
