#ifndef ENTRY_H
#define ENTRY_H
#include "maptable.h"
#include <QWidget>

namespace Ui {
class entry;
}

class entry : public QWidget
{
    Q_OBJECT

public:
    explicit entry(QWidget *parent = 0);
    ~entry();

private slots:
    void on_nextButton_clicked();

private:
    Ui::entry *ui;
    MapTable *mapWindow;
};

#endif // ENTRY_H
