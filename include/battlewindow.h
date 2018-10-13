#ifndef BATTLEWINDOW_H
#define BATTLEWINDOW_H

#include <QWidget>
#include "player.h"
#include "oponent.h"
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
    void receiveBattleInfo(Player * gracz, Oponent *przeciwnik)
    {
        player = gracz;
        oponent = przeciwnik;
        showStatus();

        QMessageBox::information(0, "hehe", "receivebattle");
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
    Oponent *oponent;
    InventoryWindow *invWin;
};

#endif // BATTLEWINDOW_H
