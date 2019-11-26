#include "deleteuserform.h"
#include "ui_deleteuserform.h"

DeleteUserForm::DeleteUserForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteUserForm)
{
    ui->setupUi(this);
}

DeleteUserForm::~DeleteUserForm()
{
    delete ui;
}

void DeleteUserForm::on_btn_return_clicked()
{
    DeleteUserForm::close();
}

void DeleteUserForm::on_btn_delete_clicked()
{
    QString cpfText = ui->line_cpf->text();
    QString passwordText = ui->line_password->text();

    userServices userService;

    if(false == userService.authenticate(cpfText,passwordText)) {
        QMessageBox::information(this,"Usuário não removido","Por favor, confira se o CPF e a senha estão corretos.");
    } else {
        userService.deleteUser(cpfText,passwordText);
        QMessageBox::information(this,"Usuário removido!","O usuário foi removido com sucesso! O programa será encerrado.");
        QApplication::quit();
    }
}
