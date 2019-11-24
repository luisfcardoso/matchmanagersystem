#include "register.h"
#include "ui_register.h"
#include "mainwindow.h"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_btn_return_clicked()
{
    Register::close();

}
