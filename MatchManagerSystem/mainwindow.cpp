#include "mainWindow.h"
#include "ui_mainwindow.h"
#include "register.h"
#include "customermenu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_close_clicked()
{
    QApplication::quit();
}

void MainWindow::on_btn_register_clicked()
{

    Register registerscreen;
    registerscreen.exec();
}

void MainWindow::on_btn_enter_clicked()
{
    QString cpfText = ui->line_cpf->text();
    QString passwordText = ui->line_password->text();

    userServices userService;

    if(false == userService.authenticate(cpfText,passwordText)) {
        QMessageBox::information(this,"Acesso não realizado","Por favor, confira se o CPF e a senha estão corretos.");
    } else {
        CustomerMenu customermenuscreen;
        customermenuscreen.exec();
    }

}
