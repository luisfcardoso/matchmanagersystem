#ifndef MANAGEGAME_H
#define MANAGEGAME_H

#include <QDialog>

namespace Ui {
class ManageGame;
}

class ManageGame : public QDialog
{
    Q_OBJECT

public:
    explicit ManageGame(QWidget *parent = nullptr);
    ~ManageGame();

private slots:
    void on_btn_add_game_clicked();

    void on_btn_return_clicked();

private:
    Ui::ManageGame *ui;
};

#endif // MANAGEGAME_H
