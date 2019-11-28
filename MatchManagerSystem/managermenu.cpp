#include "managermenu.h"
#include "ui_managermenu.h"
#include "deleteuserform.h"
#include "searchandbuy.h"
#include "bought_tickets.h"
#include "managegame.h"

managermenu::managermenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::managermenu)
{
    ui->setupUi(this);
}

managermenu::~managermenu()
{
    delete ui;
}

void managermenu::on_btn_exit_clicked()
{
    managermenu::close();
}

void managermenu::on_btn_delete_user_clicked()
{
    DeleteUserForm deleteUserScreen;
    deleteUserScreen.exec();
}

void managermenu::on_btn_search_and_buy_clicked()
{
    SearchAndBuy searchandbuyscreen;
    searchandbuyscreen.exec();
}

void managermenu::on_btn_tickets_clicked()
{
    bought_tickets boughtScreen;
    boughtScreen.exec();
}

void managermenu::on_btn_manage_games_clicked()
{
    ManageGame manageScreen;
    manageScreen.exec();
}
