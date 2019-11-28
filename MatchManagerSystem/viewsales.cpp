#include "viewsales.h"
#include "ui_viewsales.h"

ViewSales::ViewSales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewSales)
{
    ui->setupUi(this);
}

ViewSales::~ViewSales()
{
    delete ui;
}
