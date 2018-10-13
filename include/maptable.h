#ifndef MAPTABLE_H
#define MAPTABLE_H

#include <QWidget>
#include "location.h"
#include "player.h"
#include "inventorywindow.h"
#include "battlewindow.h"
#include "oponent.h"
#include "save.h"
#include "interpreter.h"

namespace Ui {
class MapTable;
}

class MapTable : public QWidget
{
    Q_OBJECT

public:
    explicit MapTable(QWidget *parent = 0);
    ~MapTable();

    void mapTableInit(int maxRows = 21, int maxCols = 37, int defSectionSize = 16);
    void mapTableFill(Maps*);
    void cellFill(int, int, std::string);
    std::string interpreter(char);
    void updatePlayerPosition(Player*);
    void mapPlayerUpdate(std::string);
    void mapPlayerUpdate();
    bool checkFollowingMove(int, int);
    bool checkFollowingAction();
    char getFollowingAction();
    void actionHandler(char);
    Element *getFollowingActionElement();
private slots:
    void on_exitButton_clicked();

    void on_inventoryButton_clicked();

    void on_saveButton_clicked();

signals:

    void sendPlayer(Player*);
    void sendBattleInfo(Player*, Oponent* );
private:
    Ui::MapTable *ui;
    InventoryWindow *invWindow;
    BattleWindow *battleWindow;
    int maxRow;
    int maxCol;
    Location *location;
protected:
    void keyPressEvent(QKeyEvent *);

};

Q_DECLARE_METATYPE(Inventory)

#endif // MAPTABLE_H
