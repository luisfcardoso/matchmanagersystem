#include "bought_tickets.h"
#include "ui_bought_tickets.h"

bought_tickets::bought_tickets(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bought_tickets)
{
    ui->setupUi(this);
}

bought_tickets::~bought_tickets()
{
    delete ui;
}

void bought_tickets::on_btn_return_clicked()
{
    bought_tickets::close();
}
