/********************************************************************************
** Form generated from reading UI file 'inventorywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYWINDOW_H
#define UI_INVENTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InventoryWindow
{
public:
    QListWidget *listWidget;
    QLabel *playerLabel;
    QGraphicsView *graphicsView;
    QPushButton *closeButton;
    QPushButton *useButton;
    QLabel *label;

    void setupUi(QDialog *InventoryWindow)
    {
        if (InventoryWindow->objectName().isEmpty())
            InventoryWindow->setObjectName(QStringLiteral("InventoryWindow"));
        InventoryWindow->resize(640, 460);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InventoryWindow->sizePolicy().hasHeightForWidth());
        InventoryWindow->setSizePolicy(sizePolicy);
        InventoryWindow->setMinimumSize(QSize(640, 460));
        InventoryWindow->setMaximumSize(QSize(640, 460));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/images/item1.png"), QSize(), QIcon::Normal, QIcon::Off);
        InventoryWindow->setWindowIcon(icon);
        listWidget = new QListWidget(InventoryWindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(23, 23, 251, 414));
        listWidget->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0, 120);"));
        playerLabel = new QLabel(InventoryWindow);
        playerLabel->setObjectName(QStringLiteral("playerLabel"));
        playerLabel->setGeometry(QRect(420, 246, 191, 191));
        playerLabel->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 120);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"MS UI Gothic\";"));
        graphicsView = new QGraphicsView(InventoryWindow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(640, 460));
        graphicsView->setMaximumSize(QSize(640, 460));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/res/images/dog.png);"));
        closeButton = new QPushButton(InventoryWindow);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(310, 340, 81, 41));
        useButton = new QPushButton(InventoryWindow);
        useButton->setObjectName(QStringLiteral("useButton"));
        useButton->setGeometry(QRect(310, 260, 81, 41));
        useButton->setStyleSheet(QStringLiteral(""));
        label = new QLabel(InventoryWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 23, 281, 171));
        label->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 120);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"MS UI Gothic\";"));
        graphicsView->raise();
        listWidget->raise();
        playerLabel->raise();
        closeButton->raise();
        useButton->raise();
        label->raise();

        retranslateUi(InventoryWindow);

        QMetaObject::connectSlotsByName(InventoryWindow);
    } // setupUi

    void retranslateUi(QDialog *InventoryWindow)
    {
        InventoryWindow->setWindowTitle(QApplication::translate("InventoryWindow", "Inventory", 0));
        playerLabel->setText(QString());
        closeButton->setText(QApplication::translate("InventoryWindow", "Close", 0));
        useButton->setText(QApplication::translate("InventoryWindow", "Use", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InventoryWindow: public Ui_InventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYWINDOW_H
