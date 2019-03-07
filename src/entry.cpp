#include "include/entry.h"
#include "ui_entry.h"
#include <QWidget>
#include <QKeyEvent>

Entry::Entry(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Entry)
{
    ui->setupUi(this);
    ui->graphicsView->setFocus();
}

Entry::~Entry()
{
    delete ui;
}
void Entry::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Return)
    {
        on_nextButton_clicked();
    }
}
void Entry::on_nextButton_clicked()
{

    mapWindow = new MapTable(this);

    mapWindow->show();
}
