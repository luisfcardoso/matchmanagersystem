#include "customermenu.h"
#include "ui_customermenu.h"
#include "searchandbuy.h"

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
