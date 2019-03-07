#ifndef BATTLEWINDOW_H
#define BATTLEWINDOW_H

#include <QWidget>
#include "player.h"
#include "opponent.h"
#include "battle.h"
#include "inventorywindow.h"
#include <QMessageBox>
namespace Ui {
class BattleWindow;
}

class BattleWindow : public QWidget
{
    Q_OBJECT

public:
    explicit BattleWindow(QWidget *parent = 0);
    void showStatus();
    void showInfo();
    bool attack();
    ~BattleWindow();
public slots:
    void receiveBattleInfo(Player *player, Opponent *opponent)
    {
         this->player = player;
         this->opponent = opponent;
         showStatus();

//        QMessageBox::information(0, "hehe", "receivebattle");
    }

private slots:
    void on_attackButton_clicked();

    void on_escapeButton_clicked();

    void on_inventoryButton_clicked();
signals:

    void sendPlayer(Player*);
private:
    Ui::BattleWindow *ui;
    Player *player;
    Opponent *opponent;
    Battle *battle;
    InventoryWindow *invWin;
};

#endif // BATTLEWINDOW_H
