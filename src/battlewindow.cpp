#include "include/battlewindow.h"
#include "ui_battlewindow.h"

BattleWindow::BattleWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BattleWindow)
{
    ui->setupUi(this);
    ui->statusLabel->setText("Waiting for action...");
    invWin = new InventoryWindow(this);
    QObject::connect(this, SIGNAL(sendPlayer(Player*)),
                    invWin, SLOT(receivePlayer(Player*))
                    );
}

BattleWindow::~BattleWindow()
{
    delete ui;
}

void BattleWindow::showStatus()
{
    std::string info;
    info.append(player->getName() + "\n\n");
    if (player->getHealth())
    {
        info.append( "HP:       " + std::to_string(player->getHealth()) + " \n" );

    }
    if (player->getStrength())
    {
        info.append( "STRENGTH: " +  std::to_string(player->getStrength()) + " \n");
    }
    if (player->getLevel())
    {
        info.append( "LEVEL:    " + std::to_string(player->getLevel()) + " \n");

    }
    ui->playerLabel->setText(QString::fromStdString(info));
    ui->playerLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    info = "";
    info.append(oponent->getName() + "\n\n");
    if (oponent->getHealth())
    {
        info.append( "HP:       " + std::to_string(oponent->getHealth()) + " \n" );

    }
    if (oponent->getStrength())
    {
        info.append( "STRENGTH: " +  std::to_string(oponent->getStrength()) + " \n");
    }
    if (oponent->getLevel())
    {
        info.append( "LEVEL:    " + std::to_string(oponent->getLevel()) + " \n");

    }
    ui->oponentLabel->setText(QString::fromStdString(info));
    ui->oponentLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);
}
void BattleWindow::showInfo()
{
    std::string info;
    info.append(player->getName() + " attacked " + oponent->getName() + ". Oponent loses " +
         std::to_string(player->getStrength() - oponent->getDefence()) + "HP \n" +
         oponent->getName() + " attacked " + player->getName() + ". You lost " +
                std::to_string(oponent->getStrength() - player->getDefence()) + " HP");
    ui->statusLabel->setText(QString::fromStdString(info));
}
bool BattleWindow::attack()
{
    oponent->setHealth(oponent->getHealth() - (player->getStrength() - oponent->getDefence()));
    if(oponent->getHealth() > 0)
    {
        player->setHealth(player->getHealth() - (oponent->getStrength() - player->getDefence()));
        player->checkHealth();
        oponent->checkHealth();
        showStatus();
        showInfo();
        if(player->getHealth()) {return true;}
        else return false;
    }
    else
    {
        player->setEXP(player->getEXP() + oponent->getEXP());
        QMessageBox::information(0, "You won!", QString::fromStdString("+ " + std::to_string(oponent->getEXP()) + " EXP"));
        delete oponent;
        oponent = 0;
        return true;
    }

}

void BattleWindow::on_attackButton_clicked()
{
    if(attack() == false)
    {
        QMessageBox::information(0, "You lost!", QString::fromStdString("GAME OVER"));
        this->close();      //wylaczyc gre
    }
    if(!oponent)
    {
        this->close();
    }
}

void BattleWindow::on_escapeButton_clicked()
{
    int random = Element::genRandom(0,5);
    if(random)
    {
        player->setHealth(player->getHealth() - (oponent->getStrength() - player->getDefence()));
        player->checkHealth();
        oponent->checkHealth();
        showStatus();
        std::string info;
        info.append("You failed to escape! " + oponent->getName() + " attacked " + player->getName() + ". You lost " +
                    std::to_string(oponent->getStrength() - player->getDefence()) + " HP");
        ui->statusLabel->setText(QString::fromStdString(info));
        if(player->getHealth() == 0)
        {
            QMessageBox::information(0, "You lost!", QString::fromStdString("GAME OVER"));
            this->close();      //wylaczyc gre
        }
    }
    else
    {
        QMessageBox::information(0, "You escaped!", QString::fromStdString("You got lucky! You were able to escape this fight!"));
        this->close();
    }

}

void BattleWindow::on_inventoryButton_clicked()
{
    emit sendPlayer(player);
    invWin->inventoryFill();
    invWin->exec();
    showStatus();
}
