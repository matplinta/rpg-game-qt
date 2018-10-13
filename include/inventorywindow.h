#ifndef INVENTORYWINDOW_H
#define INVENTORYWINDOW_H

#include <QDialog>
#include <QListWidgetItem>
#include <QMessageBox>
#include <include/inventory.h>
#include <include/player.h>
namespace Ui {
class InventoryWindow;
}

class InventoryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit InventoryWindow(QWidget *parent = 0);
    ~InventoryWindow();
    void inventoryFill();
    void showPlayerInfo();
    int getItemNo(QString str);
private slots:
    void on_closeButton_clicked();

    void on_useButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);


public slots:
    void receivePlayer(Player * gracz)
    {
        player = gracz;
        inv = gracz->inventoryVect;
        showPlayerInfo();
        //QMessageBox::information(0, "hehe", "receivePlayer");
    }
signals:
    void sendChangedPlayer(Player *);


private:
    Ui::InventoryWindow *ui;
    std::vector<Item*> inv;
    Player *player;
};

#endif // INVENTORYWINDOW_H
