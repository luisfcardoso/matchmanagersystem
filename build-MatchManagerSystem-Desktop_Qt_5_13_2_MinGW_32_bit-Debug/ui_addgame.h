/********************************************************************************
** Form generated from reading UI file 'addgame.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGAME_H
#define UI_ADDGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddGame
{
public:
    QLabel *title_add_game;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *cb_type;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_add_game;
    QPushButton *btn_return;
    QLineEdit *line_description;
    QTimeEdit *time_hour;
    QLabel *lb_date;
    QLabel *lb_cidade;
    QLabel *lb_description;
    QLineEdit *line_stadium;
    QLabel *lb_stadium;
    QLabel *lb_team_1;
    QLabel *lb_estado;
    QLineEdit *line_state;
    QDateEdit *date_game;
    QLineEdit *line_team2;
    QLineEdit *line_city;
    QLineEdit *line_team1;
    QLabel *lb_type_game;
    QLabel *lb_hour;
    QLabel *lb_team_2;
    QLabel *lb_price;
    QDoubleSpinBox *double_price;

    void setupUi(QDialog *AddGame)
    {
        if (AddGame->objectName().isEmpty())
            AddGame->setObjectName(QString::fromUtf8("AddGame"));
        AddGame->resize(400, 369);
        title_add_game = new QLabel(AddGame);
        title_add_game->setObjectName(QString::fromUtf8("title_add_game"));
        title_add_game->setGeometry(QRect(0, 20, 401, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        title_add_game->setFont(font);
        title_add_game->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(AddGame);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 60, 361, 287));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cb_type = new QComboBox(gridLayoutWidget);
        cb_type->setObjectName(QString::fromUtf8("cb_type"));

        gridLayout->addWidget(cb_type, 6, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_add_game = new QPushButton(gridLayoutWidget);
        btn_add_game->setObjectName(QString::fromUtf8("btn_add_game"));

        horizontalLayout_2->addWidget(btn_add_game);

        btn_return = new QPushButton(gridLayoutWidget);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));

        horizontalLayout_2->addWidget(btn_return);


        gridLayout->addLayout(horizontalLayout_2, 10, 2, 1, 1);

        line_description = new QLineEdit(gridLayoutWidget);
        line_description->setObjectName(QString::fromUtf8("line_description"));

        gridLayout->addWidget(line_description, 2, 2, 1, 1);

        time_hour = new QTimeEdit(gridLayoutWidget);
        time_hour->setObjectName(QString::fromUtf8("time_hour"));

        gridLayout->addWidget(time_hour, 8, 2, 1, 1);

        lb_date = new QLabel(gridLayoutWidget);
        lb_date->setObjectName(QString::fromUtf8("lb_date"));
        lb_date->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_date, 7, 0, 1, 1);

        lb_cidade = new QLabel(gridLayoutWidget);
        lb_cidade->setObjectName(QString::fromUtf8("lb_cidade"));
        lb_cidade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_cidade, 4, 0, 1, 1);

        lb_description = new QLabel(gridLayoutWidget);
        lb_description->setObjectName(QString::fromUtf8("lb_description"));
        lb_description->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_description, 2, 0, 1, 1);

        line_stadium = new QLineEdit(gridLayoutWidget);
        line_stadium->setObjectName(QString::fromUtf8("line_stadium"));

        gridLayout->addWidget(line_stadium, 3, 2, 1, 1);

        lb_stadium = new QLabel(gridLayoutWidget);
        lb_stadium->setObjectName(QString::fromUtf8("lb_stadium"));
        lb_stadium->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_stadium, 3, 0, 1, 1);

        lb_team_1 = new QLabel(gridLayoutWidget);
        lb_team_1->setObjectName(QString::fromUtf8("lb_team_1"));
        lb_team_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_team_1, 0, 0, 1, 1);

        lb_estado = new QLabel(gridLayoutWidget);
        lb_estado->setObjectName(QString::fromUtf8("lb_estado"));
        lb_estado->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_estado, 5, 0, 1, 1);

        line_state = new QLineEdit(gridLayoutWidget);
        line_state->setObjectName(QString::fromUtf8("line_state"));

        gridLayout->addWidget(line_state, 5, 2, 1, 1);

        date_game = new QDateEdit(gridLayoutWidget);
        date_game->setObjectName(QString::fromUtf8("date_game"));

        gridLayout->addWidget(date_game, 7, 2, 1, 1);

        line_team2 = new QLineEdit(gridLayoutWidget);
        line_team2->setObjectName(QString::fromUtf8("line_team2"));

        gridLayout->addWidget(line_team2, 1, 2, 1, 1);

        line_city = new QLineEdit(gridLayoutWidget);
        line_city->setObjectName(QString::fromUtf8("line_city"));

        gridLayout->addWidget(line_city, 4, 2, 1, 1);

        line_team1 = new QLineEdit(gridLayoutWidget);
        line_team1->setObjectName(QString::fromUtf8("line_team1"));

        gridLayout->addWidget(line_team1, 0, 2, 1, 1);

        lb_type_game = new QLabel(gridLayoutWidget);
        lb_type_game->setObjectName(QString::fromUtf8("lb_type_game"));
        lb_type_game->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_type_game, 6, 0, 1, 1);

        lb_hour = new QLabel(gridLayoutWidget);
        lb_hour->setObjectName(QString::fromUtf8("lb_hour"));
        lb_hour->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_hour, 8, 0, 1, 1);

        lb_team_2 = new QLabel(gridLayoutWidget);
        lb_team_2->setObjectName(QString::fromUtf8("lb_team_2"));
        lb_team_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_team_2, 1, 0, 1, 1);

        lb_price = new QLabel(gridLayoutWidget);
        lb_price->setObjectName(QString::fromUtf8("lb_price"));
        lb_price->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_price, 9, 0, 1, 1);

        double_price = new QDoubleSpinBox(gridLayoutWidget);
        double_price->setObjectName(QString::fromUtf8("double_price"));

        gridLayout->addWidget(double_price, 9, 2, 1, 1);

        QWidget::setTabOrder(line_team1, line_team2);
        QWidget::setTabOrder(line_team2, line_description);
        QWidget::setTabOrder(line_description, line_stadium);
        QWidget::setTabOrder(line_stadium, cb_type);
        QWidget::setTabOrder(cb_type, date_game);
        QWidget::setTabOrder(date_game, time_hour);
        QWidget::setTabOrder(time_hour, btn_add_game);
        QWidget::setTabOrder(btn_add_game, btn_return);

        retranslateUi(AddGame);

        QMetaObject::connectSlotsByName(AddGame);
    } // setupUi

    void retranslateUi(QDialog *AddGame)
    {
        AddGame->setWindowTitle(QCoreApplication::translate("AddGame", "Dialog", nullptr));
        title_add_game->setText(QCoreApplication::translate("AddGame", "Adicionar Jogo", nullptr));
        btn_add_game->setText(QCoreApplication::translate("AddGame", "Adicionar Jogo", nullptr));
        btn_return->setText(QCoreApplication::translate("AddGame", "Voltar", nullptr));
        lb_date->setText(QCoreApplication::translate("AddGame", "Data do Jogo", nullptr));
        lb_cidade->setText(QCoreApplication::translate("AddGame", "Cidade", nullptr));
        lb_description->setText(QCoreApplication::translate("AddGame", "Descri\303\247\303\243o", nullptr));
        lb_stadium->setText(QCoreApplication::translate("AddGame", "Est\303\241dio", nullptr));
        lb_team_1->setText(QCoreApplication::translate("AddGame", "Time 1", nullptr));
        lb_estado->setText(QCoreApplication::translate("AddGame", "Estado", nullptr));
        lb_type_game->setText(QCoreApplication::translate("AddGame", "Tipo de Jogo", nullptr));
        lb_hour->setText(QCoreApplication::translate("AddGame", "Hora do Jogo", nullptr));
        lb_team_2->setText(QCoreApplication::translate("AddGame", "Time 2", nullptr));
        lb_price->setText(QCoreApplication::translate("AddGame", "Pre\303\247o (R$)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddGame: public Ui_AddGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGAME_H
