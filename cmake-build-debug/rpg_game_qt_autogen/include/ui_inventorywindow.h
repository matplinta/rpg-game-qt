/********************************************************************************
** Form generated from reading UI file 'inventorywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYWINDOW_H
#define UI_INVENTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
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
            InventoryWindow->setObjectName(QString::fromUtf8("InventoryWindow"));
        InventoryWindow->resize(640, 460);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InventoryWindow->sizePolicy().hasHeightForWidth());
        InventoryWindow->setSizePolicy(sizePolicy);
        InventoryWindow->setMinimumSize(QSize(640, 460));
        InventoryWindow->setMaximumSize(QSize(640, 460));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/item1.png"), QSize(), QIcon::Normal, QIcon::Off);
        InventoryWindow->setWindowIcon(icon);
        listWidget = new QListWidget(InventoryWindow);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(23, 23, 251, 414));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 120);"));
        playerLabel = new QLabel(InventoryWindow);
        playerLabel->setObjectName(QString::fromUtf8("playerLabel"));
        playerLabel->setGeometry(QRect(420, 246, 191, 191));
        playerLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 120);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"MS UI Gothic\";"));
        graphicsView = new QGraphicsView(InventoryWindow);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(640, 460));
        graphicsView->setMaximumSize(QSize(640, 460));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/res/images/dog.png);"));
        closeButton = new QPushButton(InventoryWindow);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(310, 340, 81, 41));
        useButton = new QPushButton(InventoryWindow);
        useButton->setObjectName(QString::fromUtf8("useButton"));
        useButton->setGeometry(QRect(310, 260, 81, 41));
        useButton->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(InventoryWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 23, 281, 171));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 120);\n"
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
        InventoryWindow->setWindowTitle(QApplication::translate("InventoryWindow", "Inventory", nullptr));
        playerLabel->setText(QString());
        closeButton->setText(QApplication::translate("InventoryWindow", "Close", nullptr));
        useButton->setText(QApplication::translate("InventoryWindow", "Use", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InventoryWindow: public Ui_InventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYWINDOW_H
