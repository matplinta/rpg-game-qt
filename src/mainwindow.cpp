#include "include/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setFixedSize(size());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newButton_clicked()
{
    newGameWindow = new NewGameWindow(this);
    newGameWindow->show();
}

void MainWindow::on_loadButton_clicked()
{
    loadGameWindow = new LoadGameWindow(this);
    loadGameWindow->show();
}

void MainWindow::on_creditsButton_clicked()
{
    QMessageBox::information(0, "Credits", "Made by Mateusz Plinta, III year EiT, AGH");
}

// Safe cleanup of resources upon pressing x on dialog button - safe close
void MainWindow::closeEvent ( QCloseEvent * )
{
    deleteLater();
}