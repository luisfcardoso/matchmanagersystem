#include "searchandbuy.h"
#include "ui_searchandbuy.h"

SearchAndBuy::SearchAndBuy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchAndBuy)
{
    ui->setupUi(this);
}

SearchAndBuy::~SearchAndBuy()
{
    delete ui;
}
