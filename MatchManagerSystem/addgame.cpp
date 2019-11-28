#include "addgame.h"
#include "ui_addgame.h"

AddGame::AddGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddGame)
{
    ui->setupUi(this);
}

AddGame::~AddGame()
{
    delete ui;
}

void AddGame::on_btn_return_clicked()
{
    AddGame::close();
}
