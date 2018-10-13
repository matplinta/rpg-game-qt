#ifndef LOADGAMEWINDOW_H
#define LOADGAMEWINDOW_H

#include <QWidget>
#include <QDir>
#include "maptable.h"
namespace Ui {
class LoadGameWindow;
}

class LoadGameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoadGameWindow(QWidget *parent = 0);
    ~LoadGameWindow();

private slots:
    void on_backButton_clicked();

    void on_loadButton_clicked();

private:
    Ui::LoadGameWindow *ui;
    MapTable *mapWindow;
};

#endif // LOADGAMEWINDOW_H
