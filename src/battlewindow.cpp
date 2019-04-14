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
    battle = new Battle(player, opponent);
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
    info.append(opponent->getName() + "\n\n");
    if (opponent->getHealth())
    {
        info.append( "HP:       " + std::to_string(opponent->getHealth()) + " \n" );

    }
    if (opponent->getStrength())
    {
        info.append( "STRENGTH: " +  std::to_string(opponent->getStrength()) + " \n");
    }
    if (opponent->getLevel())
    {
        info.append( "LEVEL:    " + std::to_string(opponent->getLevel()) + " \n");

    }
    ui->oponentLabel->setText(QString::fromStdString(info));
    ui->oponentLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);
}
void BattleWindow::showInfo()
{
    std::string info;
    info.append(player->getName() + " attacked " + opponent->getName() + ". Opponent loses " +
         std::to_string(Battle::getDamage(player, opponent)) + "HP \n" +
         opponent->getName() + " attacked " + player->getName() + ". You lost " +
                std::to_string(Battle::getDamage(opponent, player)) + " HP");
    ui->statusLabel->setText(QString::fromStdString(info));
}
bool BattleWindow::attack()
{
    Battle::attack(player, opponent);
    if(opponent->getHealth() > 0)
    {
        Battle::attack(opponent, player);
        player->checkHealth();
        opponent->checkHealth();
        showStatus();
        showInfo();
        return player->getHealth() != 0;
    }
    else
    {
        player->setEXP(player->getEXP() + opponent->getEXP());
        QMessageBox::information(0, "You won!", QString::fromStdString("+ " + std::to_string(opponent->getEXP()) + " EXP"));
        delete opponent;
        opponent = 0;
        delete battle;
        battle = 0;
        return true;
    }

}

void BattleWindow::on_attackButton_clicked()
{
    if(attack() == false)
    {
        QMessageBox::information(0, "You lost!", QString::fromStdString("GAME OVER"));
        parentWidget()->parentWidget()->close();     //wylaczyc gre
    }
    if(!opponent)
    {
        this->close();
    }
}

void BattleWindow::on_escapeButton_clicked()
{
    int random = Element::genRandom(0,5);
    if(random)
    {
        Battle::attack(opponent, player);
        player->checkHealth();
        opponent->checkHealth();
        showStatus();
        std::string info;
        info.append("You failed to escape! " + opponent->getName() + " attacked " + player->getName() + ".\nwwYou lost " +
                    std::to_string(Battle::getDamage(opponent, player)) + " HP");
        ui->statusLabel->setText(QString::fromStdString(info));
        if(player->getHealth() == 0)
        {
            QMessageBox::information(0, "You lost!", QString::fromStdString("GAME OVER"));
            parentWidget()->parentWidget()->close();      //wylaczyc gre
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
