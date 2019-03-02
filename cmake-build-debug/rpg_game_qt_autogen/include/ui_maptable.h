/********************************************************************************
** Form generated from reading UI file 'maptable.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPTABLE_H
#define UI_MAPTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapTable
{
public:
    QTableWidget *tableWidget;
    QGraphicsView *graphicsView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *inventoryButton;
    QPushButton *saveButton;
    QPushButton *exitButton;
    QGraphicsView *graphicsView_2;

    void setupUi(QWidget *MapTable)
    {
        if (MapTable->objectName().isEmpty())
            MapTable->setObjectName(QString::fromUtf8("MapTable"));
        MapTable->resize(640, 460);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/bush.png"), QSize(), QIcon::Normal, QIcon::Off);
        MapTable->setWindowIcon(icon);
        MapTable->setStyleSheet(QString::fromUtf8(""));
        tableWidget = new QTableWidget(MapTable);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(23, 23, 594, 338));
        tableWidget->setAutoScroll(true);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(16);
        tableWidget->horizontalHeader()->setMinimumSectionSize(16);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(16);
        tableWidget->verticalHeader()->setMinimumSectionSize(16);
        graphicsView = new QGraphicsView(MapTable);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 1, 27);"));
        layoutWidget = new QWidget(MapTable);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 380, 581, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        inventoryButton = new QPushButton(layoutWidget);
        inventoryButton->setObjectName(QString::fromUtf8("inventoryButton"));

        horizontalLayout->addWidget(inventoryButton);

        saveButton = new QPushButton(layoutWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout->addWidget(saveButton);

        exitButton = new QPushButton(layoutWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        horizontalLayout->addWidget(exitButton);

        exitButton->raise();
        saveButton->raise();
        inventoryButton->raise();
        graphicsView_2 = new QGraphicsView(MapTable);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(23, 23, 594, 338));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 1);"));
        graphicsView->raise();
        tableWidget->raise();
        layoutWidget->raise();
        graphicsView_2->raise();

        retranslateUi(MapTable);

        QMetaObject::connectSlotsByName(MapTable);
    } // setupUi

    void retranslateUi(QWidget *MapTable)
    {
        MapTable->setWindowTitle(QApplication::translate("MapTable", "Map", nullptr));
        inventoryButton->setText(QApplication::translate("MapTable", "Show Inventory", nullptr));
        saveButton->setText(QApplication::translate("MapTable", "Save", nullptr));
        exitButton->setText(QApplication::translate("MapTable", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapTable: public Ui_MapTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPTABLE_H
