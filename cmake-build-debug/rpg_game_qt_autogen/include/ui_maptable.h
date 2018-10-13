/********************************************************************************
** Form generated from reading UI file 'maptable.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPTABLE_H
#define UI_MAPTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            MapTable->setObjectName(QStringLiteral("MapTable"));
        MapTable->resize(640, 460);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/images/bush.png"), QSize(), QIcon::Normal, QIcon::Off);
        MapTable->setWindowIcon(icon);
        MapTable->setStyleSheet(QStringLiteral(""));
        tableWidget = new QTableWidget(MapTable);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(23, 23, 594, 338));
        tableWidget->setAutoScroll(false);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);
        graphicsView = new QGraphicsView(MapTable);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgb(1, 1, 27);"));
        layoutWidget = new QWidget(MapTable);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 380, 581, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        inventoryButton = new QPushButton(layoutWidget);
        inventoryButton->setObjectName(QStringLiteral("inventoryButton"));

        horizontalLayout->addWidget(inventoryButton);

        saveButton = new QPushButton(layoutWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout->addWidget(saveButton);

        exitButton = new QPushButton(layoutWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        horizontalLayout->addWidget(exitButton);

        exitButton->raise();
        saveButton->raise();
        inventoryButton->raise();
        graphicsView_2 = new QGraphicsView(MapTable);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(23, 23, 594, 338));
        graphicsView_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0, 1);"));
        graphicsView->raise();
        tableWidget->raise();
        layoutWidget->raise();
        graphicsView_2->raise();

        retranslateUi(MapTable);

        QMetaObject::connectSlotsByName(MapTable);
    } // setupUi

    void retranslateUi(QWidget *MapTable)
    {
        MapTable->setWindowTitle(QApplication::translate("MapTable", "Map", 0));
        inventoryButton->setText(QApplication::translate("MapTable", "Show Inventory", 0));
        saveButton->setText(QApplication::translate("MapTable", "Save", 0));
        exitButton->setText(QApplication::translate("MapTable", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MapTable: public Ui_MapTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPTABLE_H
