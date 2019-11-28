#include "managegame.h"
#include "ui_managegame.h"
#include "addgame.h"

ManageGame::ManageGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageGame)
{
    ui->setupUi(this);
}

ManageGame::~ManageGame()
{
    delete ui;
}

void ManageGame::on_btn_add_game_clicked()
{
    AddGame addGameSreen;
    addGameSreen.exec();
}

void ManageGame::on_btn_return_clicked()
{
    ManageGame::close();
}
