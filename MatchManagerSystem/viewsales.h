#ifndef VIEWSALES_H
#define VIEWSALES_H

#include <QDialog>

namespace Ui {
class ViewSales;
}

class ViewSales : public QDialog
{
    Q_OBJECT

public:
    explicit ViewSales(QWidget *parent = nullptr);
    ~ViewSales();

private:
    Ui::ViewSales *ui;
};

#endif // VIEWSALES_H
