#include "register.h"
#include "ui_register.h"
#include "mainWindow.h"
#include "userservices.h"

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

void Register::on_btn_register_clicked()
{
    int priv = 0;
    if(ui->rd_customer->isChecked()) {
        priv = 1;
    } else if(ui->rd_game_manager->isChecked()) {
        priv = 2;
    }

    userServices user;
    QString msg = user.addUser(ui->line_cpf->text(),ui->line_password->text(),priv,
                               ui->line_card_number->text(),ui->line_security_number_card->text(),
                               ui->cb_month->currentText(),ui->cb_year->currentText());

    QMessageBox::information(this,"Cadastro de usuário",msg);
    if(msg == "Usuário cadastrado com sucesso!") {
        Register::close();
    }
}
