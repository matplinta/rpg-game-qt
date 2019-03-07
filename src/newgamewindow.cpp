#include "include/newgamewindow.h"
#include "ui_newgamewindow.h"
#include <QMessageBox>
#include <QKeyEvent>

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
void NewGameWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Return)
    {
        on_startButton_clicked();
    }
}

void NewGameWindow::on_startButton_clicked()
{
    QString name = ui->nameTextEdit->toPlainText();
    if(name.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Attention");
        msgBox.setText("You need to enter your name!");
        msgBox.exec();
    }
    else
    {
        // Player instance proper initialization
        Player::setPlayer(name.toStdString());
        Player::instance()->setPosition(7,7);
        Player::instance()->setCurrentLocation("Home");

        // LocationFlyweight instance proper initialization
        LocationFlyweight::setInstance();
        entry = new Entry(this);
        entry->show();
    }

}
