/********************************************************************************
** Form generated from reading UI file 'newgamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAMEWINDOW_H
#define UI_NEWGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewGameWindow
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;
    QTextEdit *nameTextEdit;
    QPushButton *startButton;

    void setupUi(QWidget *NewGameWindow)
    {
        if (NewGameWindow->objectName().isEmpty())
            NewGameWindow->setObjectName(QStringLiteral("NewGameWindow"));
        NewGameWindow->resize(640, 460);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/images/playerDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewGameWindow->setWindowIcon(icon);
        graphicsView = new QGraphicsView(NewGameWindow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/res/images/haunted_house4.png);"));
        label = new QLabel(NewGameWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 50, 321, 31));
        label->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"font: 16pt \"MS UI Gothic\";\n"
"color: rgb(255, 255, 255);"));
        nameTextEdit = new QTextEdit(NewGameWindow);
        nameTextEdit->setObjectName(QStringLiteral("nameTextEdit"));
        nameTextEdit->setGeometry(QRect(380, 90, 181, 31));
        nameTextEdit->setStyleSheet(QLatin1String("font: 12pt \"MS UI Gothic\";\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        startButton = new QPushButton(NewGameWindow);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(460, 350, 101, 41));

        retranslateUi(NewGameWindow);

        QMetaObject::connectSlotsByName(NewGameWindow);
    } // setupUi

    void retranslateUi(QWidget *NewGameWindow)
    {
        NewGameWindow->setWindowTitle(QApplication::translate("NewGameWindow", "New Game", 0));
        label->setText(QApplication::translate("NewGameWindow", "Please enter your character's name:", 0));
        startButton->setText(QApplication::translate("NewGameWindow", "Start", 0));
    } // retranslateUi

};

namespace Ui {
    class NewGameWindow: public Ui_NewGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAMEWINDOW_H
