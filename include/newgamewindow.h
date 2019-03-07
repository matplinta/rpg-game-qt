#ifndef NEWGAMEWINDOW_H
#define NEWGAMEWINDOW_H

#include <QWidget>
#include "entry.h"
#include "player.h"


namespace Ui {
class NewGameWindow;
}

class NewGameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NewGameWindow(QWidget *parent = 0);
    ~NewGameWindow();

private slots:
    void on_startButton_clicked();

private:
    Ui::NewGameWindow *ui;
    Entry *entry;
protected:
    void keyPressEvent(QKeyEvent *);
};

#endif // NEWGAMEWINDOW_H
