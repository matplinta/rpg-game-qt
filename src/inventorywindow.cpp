#include "include/inventorywindow.h"
#include "ui_inventorywindow.h"
#include <QtCore>
InventoryWindow::InventoryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryWindow)
{
    ui->setupUi(this);
    inventoryFill();


}
void InventoryWindow::inventoryFill()
{
    ui->listWidget->clear();
    ui->label->setText("Select an Item");
    for(unsigned int i = 0; i < inv.size(); i++)
    {
        ui->listWidget->addItem(QString::fromStdString(inv[i]->getName()));
    }
}
InventoryWindow::~InventoryWindow()
{
    delete ui;
}

void InventoryWindow::on_closeButton_clicked()
{
    this->close();
}
int InventoryWindow::getItemNo(QString str)
{
    int i;
    for(i = 0; i < ui->listWidget->count(); i++)
    {
        if(inv[i]->getName() == str.toStdString())
        {
            break;
        }
    }
    return i;
}
void InventoryWindow::on_useButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    if(item)
    {   int temp = getItemNo(item->text());
        *player += inv[temp];
        player->inventoryVect.erase(player->inventoryVect.begin() + temp);
        inv = player->inventoryVect;
        player->checkHealth();
        inventoryFill();
        showPlayerInfo();

    }
}

void InventoryWindow::on_listWidget_itemClicked(QListWidgetItem *elem)
{
    int temp = getItemNo(elem->text());
    Item* item = inv[temp];
    std::string info;
    info.append(item->getName() + "\n\n");
    if (item->getMaxHealth())
    {
        info.append("+" + std::to_string(item->getMaxHealth()) +  " MaxHP\n");
    }
    if (item->getHealth())
    {
        info.append( "+" + std::to_string(item->getHealth()) + " HP\n" );

    }
    if (item->getStrength())
    {
        info.append( "+" +  std::to_string(item->getStrength()) + " STRENGTH\n");
    }
    if (item->getLevel())
    {
        info.append( "+" + std::to_string(item->getLevel()) + " LEVEL\n");

    }
    if (item->getEXP())
    {
       info.append( "+" + std::to_string(item->getEXP()) + " EXP\n");
    }
    ui->label->setText(QString::fromStdString(info));
    ui->label->setAlignment(Qt::AlignLeft | Qt::AlignTop);

}

void InventoryWindow::showPlayerInfo()
{
    std::string info;
    info.append(player->getName() + "\n\n");
    if (player->getDescription() != "")
    {
        info.append(player->getDescription() + "\n\n");
    }
    if (player->getMaxHealth())
    {
        info.append("MaxHP:       " + std::to_string(player->getMaxHealth()) +  " \n");
    }
    if (player->getHealth())
    {
        info.append( "HP:             " + std::to_string(player->getHealth()) + " \n" );

    }
    if (player->getStrength())
    {
        info.append( "STRENGTH:  " +  std::to_string(player->getStrength()) + " \n");
    }
    if (player->getLevel())
    {
        info.append( "LEVEL:        " + std::to_string(player->getLevel()) + " \n");

    }
    info.append( "EXP:            " + std::to_string(player->getEXP()) + " \n");
    if (player->getRequiredEXP())
    {
       info.append( "Next lvl EXP: " + std::to_string(player->getRequiredEXP()) + " \n");
    }
    ui->playerLabel->setText(QString::fromStdString(info));
    ui->playerLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);
}
