/********************************************************************************
** Form generated from reading UI file 'battlewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLEWINDOW_H
#define UI_BATTLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
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
            BattleWindow->setObjectName(QStringLiteral("BattleWindow"));
        BattleWindow->resize(640, 460);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BattleWindow->sizePolicy().hasHeightForWidth());
        BattleWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/images/boss.png"), QSize(), QIcon::Normal, QIcon::Off);
        BattleWindow->setWindowIcon(icon);
        graphicsView = new QGraphicsView(BattleWindow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/res/images/battleImg.png);"));
        playerLabel = new QLabel(BattleWindow);
        playerLabel->setObjectName(QStringLiteral("playerLabel"));
        playerLabel->setGeometry(QRect(40, 42, 221, 121));
        playerLabel->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 140);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS UI Gothic\";"));
        oponentLabel = new QLabel(BattleWindow);
        oponentLabel->setObjectName(QStringLiteral("oponentLabel"));
        oponentLabel->setGeometry(QRect(380, 40, 221, 121));
        oponentLabel->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 140);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS UI Gothic\";"));
        statusLabel = new QLabel(BattleWindow);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(40, 210, 561, 91));
        statusLabel->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 140);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS UI Gothic\";"));
        attackButton = new QPushButton(BattleWindow);
        attackButton->setObjectName(QStringLiteral("attackButton"));
        attackButton->setGeometry(QRect(90, 350, 101, 41));
        escapeButton = new QPushButton(BattleWindow);
        escapeButton->setObjectName(QStringLiteral("escapeButton"));
        escapeButton->setGeometry(QRect(450, 350, 101, 41));
        inventoryButton = new QPushButton(BattleWindow);
        inventoryButton->setObjectName(QStringLiteral("inventoryButton"));
        inventoryButton->setGeometry(QRect(270, 350, 101, 41));

        retranslateUi(BattleWindow);

        QMetaObject::connectSlotsByName(BattleWindow);
    } // setupUi

    void retranslateUi(QWidget *BattleWindow)
    {
        BattleWindow->setWindowTitle(QApplication::translate("BattleWindow", "Battle", 0));
        playerLabel->setText(QApplication::translate("BattleWindow", "TextLabel", 0));
        oponentLabel->setText(QApplication::translate("BattleWindow", "TextLabel", 0));
        statusLabel->setText(QApplication::translate("BattleWindow", "TextLabel", 0));
        attackButton->setText(QApplication::translate("BattleWindow", "Attack", 0));
        escapeButton->setText(QApplication::translate("BattleWindow", "Escape", 0));
        inventoryButton->setText(QApplication::translate("BattleWindow", "Inventory", 0));
    } // retranslateUi

};

namespace Ui {
    class BattleWindow: public Ui_BattleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEWINDOW_H
