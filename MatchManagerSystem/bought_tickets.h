#ifndef BOUGHT_TICKETS_H
#define BOUGHT_TICKETS_H

#include <QDialog>

namespace Ui {
class bought_tickets;
}

class bought_tickets : public QDialog
{
    Q_OBJECT

public:
    explicit bought_tickets(QWidget *parent = nullptr);
    ~bought_tickets();

private slots:
    void on_btn_return_clicked();

private:
    Ui::bought_tickets *ui;
};

#endif // BOUGHT_TICKETS_H
