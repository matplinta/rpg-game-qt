#include "include/maptable.h"
#include "include/mainwindow.h"
#include "ui_maptable.h"
#include <QMessageBox>
#include <QKeyEvent>

MapTable::MapTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MapTable)
{
    ui->setupUi(this);

    location = LocationFlyweight::getFlyweight().getLocation(Player::instance()->getCurrentLocation());
    mapTableInit(21,37,16);

    Player::instance()->setPosition(Player::instance()->getX(),Player::instance()->getY());
    mapPlayerUpdate();

    ui->graphicsView_2->setFocus();     //aby dobrze dzialo -> klawisze
    invWindow = new InventoryWindow(this);

    QObject::connect(this, SIGNAL(sendPlayer(Player*)),
                    invWindow, SLOT(receivePlayer(Player*))
                    );
}

void MapTable::mapTableInit(int maxRows, int maxCols, int defSectionSize)
{
    maxCol = maxCols;
    maxRow = maxRows;
    ui->tableWidget->setColumnCount(maxCol);
    ui->tableWidget->setRowCount(maxRow);
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(defSectionSize);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(defSectionSize);
}
void MapTable::mapTableFill(Maps *mapa)
{

    std::vector<std::string> tab = mapa->getMapInTxt();
    for( int i = 0, rows = 0, cols = 0; i < maxCol * maxRow + 20 ; i++){
       if ( cols == maxCol ){
           rows++;
           cols = 0;
       }
       else{
           cellFill(rows, cols, InterpreterAdapter::interpreter(tab[rows][cols]));
           cols++;
       }
     }
//    std::cout<<ui->tableWidget->verticalHeader()->defaultSectionSize()<<std::endl;
//    std::cout<<ui->tableWidget->horizontalHeader()->defaultSectionSize()<<std::endl;

}
void MapTable::mapPlayerUpdate(std::string orientation)
{   Player::instance()->setOrientation(orientation);
    int x = Player::instance()->getX();
    int y = Player::instance()->getY();
    if(orientation == "Up")         {y++;}
    else if(orientation == "Down")  {y--;}
    else if(orientation == "Left")  {x++;}
    else if(orientation == "Right") {x--;}
    char temp = location->getActivMap()->getCell(y, x);
    cellFill(y, x, InterpreterAdapter::interpreter(temp) );
    cellFill(Player::instance()->getY(), Player::instance()->getX(), "player" + orientation );
}
void MapTable::mapPlayerUpdate()
{
    int *pos =  Player::instance()->getPosition();
    mapTableFill(location->getActivMap());
    cellFill(pos[1], pos[0], "player" + Player::instance()->getOrientation());
}
void MapTable::cellFill(int row, int column, std::string element )
{
    std::string nightPrefixConcatenate = "";
    if(location->isNight()){
        nightPrefixConcatenate = "night_";
    }
    QTableWidgetItem* item = new QTableWidgetItem();
    item->setBackground(QBrush(QPixmap(QString::fromStdString(":/res/images/" + nightPrefixConcatenate + element + ".png"))));
    ui->tableWidget->setItem(row, column, item);
}

bool MapTable::checkFollowingMove( int x, int y)
{
    char temp = 'n';
    if(Element::checkPosition(x,y))
    {
        temp = location->getActivMap()->getCell(y,x);
    }
    if(temp == ' ' || temp == 'g')
    {
        return true;
    }
    else return false;
}
char MapTable::getFollowingAction()
{
    std::string orientation = Player::instance()->getOrientation();
    int x = Player::instance()->getX();
    int y = Player::instance()->getY();
    if(orientation == "Up")         {y--;}
    else if(orientation == "Down")  {y++;}
    else if(orientation == "Left")  {x--;}
    else if(orientation == "Right") {x++;}
    char temp = location->getActivMap()->getCell(y, x);
    return temp;
}
bool MapTable::checkFollowingAction()
{
    char temp = getFollowingAction();
    if(temp == 'B' || temp == 'o'|| temp == '*' || temp == 'E' || temp == 'd' || temp == 'c' || temp == 'f' || temp == 'm' )
    {
        return true;
    }
    else return false;
}
Element *MapTable::getFollowingActionElement()
{
    std::string orientation = Player::instance()->getOrientation();
    int x = Player::instance()->getX();
    int y = Player::instance()->getY();
    if(orientation == "Up")         {y--;}
    else if(orientation == "Down")  {y++;}
    else if(orientation == "Left")  {x--;}
    else if(orientation == "Right") {x++;}

    return location->getElement(x,y);
}
void MapTable::actionHandler(char temp)
{
    if(temp == 'E' || temp == 'd' || temp == 'c')
    {
        Door *drzwi = dynamic_cast<Door*>(getFollowingActionElement());
        location = LocationFlyweight::getFlyweight().getLocation(drzwi->getPointingLocation());
        Player::instance()->setPosition(drzwi->getWhereX(), drzwi->getWhereY());

        mapTableFill(location->getActivMap());
        mapPlayerUpdate();
    }
    else if(temp == '*')
    {
        Item *rzecz = dynamic_cast<Item*>(getFollowingActionElement());
        //*(Player::instance()) += rzecz;
        //Player::instance()->getInventory().addNewItem(rzecz);
        Player::instance()->inventoryVect.push_back(rzecz);
        location->deleteElement(rzecz->getX(), rzecz->getY());
        mapPlayerUpdate();
    }
    else if(temp == 'o')
    {
        Opponent *opponent = dynamic_cast<Opponent*>(getFollowingActionElement());
        battleWindow = new BattleWindow(this);
        QObject::connect(this, SIGNAL(sendBattleInfo(Player*, Opponent *)),
                        battleWindow, SLOT(receiveBattleInfo(Player*, Opponent *))
                        );
        emit sendBattleInfo(Player::instance(), opponent);
        battleWindow->show();
        location->deleteElement(opponent->getX(), opponent->getY());
        mapPlayerUpdate();
    }
    else if(temp == 'm' || temp == 'f')
    {
        Villager *villager = dynamic_cast<Villager*>(getFollowingActionElement());
        QMessageBox::information(0, QString::fromStdString( "Villager" + villager->getName()) , QString::fromStdString(villager->getDialog()));
    }

    else
    {
        QMessageBox::information(0, "Dialog", "Unknown interaction.a");
    }

}
void MapTable::keyPressEvent(QKeyEvent *event)
{
    int x = Player::instance()->getX();
    int y = Player::instance()->getY();
    if(event->key() == Qt::Key_W)
    {
        if(checkFollowingMove(x, y-1))
        {
            Player::instance()->setPosition(x,y-1);
        }
        mapPlayerUpdate("Up");
    }
    else if(event->key() == Qt::Key_S)
    {
        if(checkFollowingMove(x,y+1))
        {
            Player::instance()->setPosition(x,y+1);
        }
        mapPlayerUpdate("Down");
    }
    else if(event->key() == Qt::Key_A)
    {
        if(checkFollowingMove(x-1,y))
        {
            Player::instance()->setPosition(x-1,y);
        }
        mapPlayerUpdate("Left");
    }
    else if(event->key() == Qt::Key_D)
    {
        if(checkFollowingMove(x+1,y))
        {
            Player::instance()->setPosition(x+1,y);
        }
        mapPlayerUpdate("Right");
    }
    else if(event->key() == Qt::Key_R)
    {
        if(checkFollowingAction() )
        {
            actionHandler(getFollowingAction());
        }
    }
}


MapTable::~MapTable()
{
    delete ui;
}


void MapTable::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Attention", "Are you sure you want to quit? Any unsaved progress will be lost.", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        delete Player::instance();
//        delete location;
//        delete LocationFlyweight::getFlyweight();
        parentWidget()->parentWidget()->close();



    }
}

void MapTable::on_inventoryButton_clicked()
{
    emit sendPlayer(Player::instance());
    invWindow->inventoryFill();
    invWindow->exec();
}

void MapTable::on_saveButton_clicked()
{
    Save save(Player::instance()->getName());
    save.saveGame(Player::instance());
}
