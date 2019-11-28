#ifndef ADDGAME_H
#define ADDGAME_H

#include <QDialog>

namespace Ui {
class AddGame;
}

class AddGame : public QDialog
{
    Q_OBJECT

public:
    explicit AddGame(QWidget *parent = nullptr);
    ~AddGame();

private slots:
    void on_btn_return_clicked();

private:
    Ui::AddGame *ui;
};

#endif // ADDGAME_H
