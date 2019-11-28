#include "customermenu.h"
#include "ui_customermenu.h"
#include "searchandbuy.h"
#include "dbusers.h"
#include "deleteuserform.h"
#include "bought_tickets.h"

CustomerMenu::CustomerMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerMenu)
{
    ui->setupUi(this);
}

CustomerMenu::~CustomerMenu()
{
    delete ui;
}

void CustomerMenu::on_btn_close_customer_menu_clicked()
{
    CustomerMenu::close();
}

void CustomerMenu::on_btn_search_buy_clicked()
{
    SearchAndBuy searchandbuyscreen;
    searchandbuyscreen.exec();
}

void CustomerMenu::on_btn_delete_user_clicked()
{
    DeleteUserForm deleteUserScreen;
    deleteUserScreen.exec();
}

void CustomerMenu::on_btn_bought_tickets_clicked()
{
    bought_tickets boughtScreen;
    boughtScreen.exec();
}
