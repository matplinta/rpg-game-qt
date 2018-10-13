#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "newgamewindow.h"
#include "loadgamewindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_creditsButton_clicked();

    void on_newButton_clicked();

    void on_loadButton_clicked();

private:
    Ui::MainWindow *ui;
    NewGameWindow *newGameWindow;
    LoadGameWindow *loadGameWindow;
};

#endif // MAINWINDOW_H
