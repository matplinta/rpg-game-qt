#include "include/entry.h"
#include "ui_entry.h"
#include <QWidget>
entry::entry(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::entry)
{
    ui->setupUi(this);
}

entry::~entry()
{
    delete ui;
}

void entry::on_nextButton_clicked()
{
    mapWindow = new MapTable(this);
    mapWindow->show();
}
