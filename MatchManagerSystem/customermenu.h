#ifndef CUSTOMERMENU_H
#define CUSTOMERMENU_H

#include <QDialog>

namespace Ui {
class CustomerMenu;
}

class CustomerMenu : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerMenu(QWidget *parent = nullptr);
    ~CustomerMenu();

private slots:
    void on_btn_close_customer_menu_clicked();

    void on_btn_search_buy_clicked();

private:
    Ui::CustomerMenu *ui;
};

#endif // CUSTOMERMENU_H
