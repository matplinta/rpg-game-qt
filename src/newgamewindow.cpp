#include "include/newgamewindow.h"
#include "ui_newgamewindow.h"
#include <QMessageBox>

NewGameWindow::NewGameWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewGameWindow)
{
    ui->setupUi(this);
}

NewGameWindow::~NewGameWindow()
{
    delete ui;
}

void NewGameWindow::on_startButton_clicked()
{
    QString name = ui->nameTextEdit->toPlainText();
    if(name.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Message");
        msgBox.setText("You need to enter your name!");
        msgBox.exec();
    }
    else
    {
        Player::setPlayer(name.toStdString());
        Player::instance()->setPosition(7,7);
        Player::instance()->setCurrentLocation("Home");
        Entry = new entry(this);
        Entry->show();
    }

}
