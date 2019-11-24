#ifndef SEARCHANDBUY_H
#define SEARCHANDBUY_H

#include <QDialog>

namespace Ui {
class SearchAndBuy;
}

class SearchAndBuy : public QDialog
{
    Q_OBJECT

public:
    explicit SearchAndBuy(QWidget *parent = nullptr);
    ~SearchAndBuy();

private:
    Ui::SearchAndBuy *ui;
};

#endif // SEARCHANDBUY_H
