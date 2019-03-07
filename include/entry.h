#ifndef ENTRY_H
#define ENTRY_H
#include "maptable.h"
#include <QWidget>

namespace Ui {
class Entry;
}

class Entry : public QWidget
{
    Q_OBJECT

public:
    explicit Entry(QWidget *parent = 0);
    ~Entry();

private slots:
    void on_nextButton_clicked();

private:
    Ui::Entry *ui;
    MapTable *mapWindow;
protected:
    void keyPressEvent(QKeyEvent *);
};

#endif // ENTRY_H
