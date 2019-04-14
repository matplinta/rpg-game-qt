/********************************************************************************
** Form generated from reading UI file 'battlewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLEWINDOW_H
#define UI_BATTLEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BattleWindow
{
public:
    QGraphicsView *graphicsView;
    QLabel *playerLabel;
    QLabel *oponentLabel;
    QLabel *statusLabel;
    QPushButton *attackButton;
    QPushButton *escapeButton;
    QPushButton *inventoryButton;

    void setupUi(QWidget *BattleWindow)
    {
        if (BattleWindow->objectName().isEmpty())
            BattleWindow->setObjectName(QString::fromUtf8("BattleWindow"));
        BattleWindow->resize(640, 460);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BattleWindow->sizePolicy().hasHeightForWidth());
        BattleWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/boss.png"), QSize(), QIcon::Normal, QIcon::Off);
        BattleWindow->setWindowIcon(icon);
        graphicsView = new QGraphicsView(BattleWindow);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/res/images/battle-background0.png) 0 0 0 0 stretch stretch;"));
        playerLabel = new QLabel(BattleWindow);
        playerLabel->setObjectName(QString::fromUtf8("playerLabel"));
        playerLabel->setGeometry(QRect(40, 42, 221, 121));
        playerLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 140);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS UI Gothic\";"));
        oponentLabel = new QLabel(BattleWindow);
        oponentLabel->setObjectName(QString::fromUtf8("oponentLabel"));
        oponentLabel->setGeometry(QRect(380, 40, 221, 121));
        oponentLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 140);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS UI Gothic\";"));
        statusLabel = new QLabel(BattleWindow);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(40, 210, 561, 91));
        statusLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 140);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS UI Gothic\";"));
        attackButton = new QPushButton(BattleWindow);
        attackButton->setObjectName(QString::fromUtf8("attackButton"));
        attackButton->setGeometry(QRect(90, 350, 101, 41));
        escapeButton = new QPushButton(BattleWindow);
        escapeButton->setObjectName(QString::fromUtf8("escapeButton"));
        escapeButton->setGeometry(QRect(450, 350, 101, 41));
        inventoryButton = new QPushButton(BattleWindow);
        inventoryButton->setObjectName(QString::fromUtf8("inventoryButton"));
        inventoryButton->setGeometry(QRect(270, 350, 101, 41));

        retranslateUi(BattleWindow);

        QMetaObject::connectSlotsByName(BattleWindow);
    } // setupUi

    void retranslateUi(QWidget *BattleWindow)
    {
        BattleWindow->setWindowTitle(QApplication::translate("BattleWindow", "Battle", nullptr));
        playerLabel->setText(QApplication::translate("BattleWindow", "TextLabel", nullptr));
        oponentLabel->setText(QApplication::translate("BattleWindow", "TextLabel", nullptr));
        statusLabel->setText(QApplication::translate("BattleWindow", "TextLabel", nullptr));
        attackButton->setText(QApplication::translate("BattleWindow", "Attack", nullptr));
        escapeButton->setText(QApplication::translate("BattleWindow", "Escape", nullptr));
        inventoryButton->setText(QApplication::translate("BattleWindow", "Inventory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BattleWindow: public Ui_BattleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEWINDOW_H
