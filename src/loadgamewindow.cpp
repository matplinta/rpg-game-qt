#include "include/loadgamewindow.h"
#include "ui_loadgamewindow.h"
#include <iostream>

LoadGameWindow::LoadGameWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoadGameWindow)
{
    ui->setupUi(this);
    QDir directoryLoad("../save");
    QStringList strList = directoryLoad.entryList(QStringList() << "*.txt",QDir::Files);
    QString temp;
    for(int i = 0; i < strList.size(); i++)
        {
            temp = strList.at(i);
            temp = temp.replace(temp.size() - 4,4, QString(""));
            ui->listWidget->addItem(temp);
        }
}

LoadGameWindow::~LoadGameWindow()
{
    delete ui;
}

void LoadGameWindow::on_backButton_clicked()
{
    this->close();
}

void LoadGameWindow::on_loadButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    if(item)
    {
        QString saveName = item->text().append(QString(".txt"));
        Save save("../save/" + saveName.toStdString());

        save.loadGame();

        mapWindow = new MapTable(this);
        mapWindow->show();
    }


}
