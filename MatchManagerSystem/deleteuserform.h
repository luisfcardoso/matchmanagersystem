#ifndef DELETEUSERFORM_H
#define DELETEUSERFORM_H

#include <QDialog>
#include <userservices.h>
#include <QMessageBox>

namespace Ui {
class DeleteUserForm;
}

class DeleteUserForm : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteUserForm(QWidget *parent = nullptr);
    ~DeleteUserForm();

private slots:
    void on_btn_return_clicked();

    void on_btn_delete_clicked();

private:
    Ui::DeleteUserForm *ui;
};

#endif // DELETEUSERFORM_H
