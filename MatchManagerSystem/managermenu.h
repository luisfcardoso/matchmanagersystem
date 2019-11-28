#ifndef MANAGERMENU_H
#define MANAGERMENU_H

#include <QDialog>

namespace Ui {
class managermenu;
}

class managermenu : public QDialog
{
    Q_OBJECT

public:
    explicit managermenu(QWidget *parent = nullptr);
    ~managermenu();

private slots:
    void on_btn_exit_clicked();

    void on_btn_delete_user_clicked();

    void on_btn_search_and_buy_clicked();

    void on_btn_tickets_clicked();

    void on_btn_manage_games_clicked();

private:
    Ui::managermenu *ui;
};

#endif // MANAGERMENU_H
