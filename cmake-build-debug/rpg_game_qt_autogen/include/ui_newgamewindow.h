/********************************************************************************
** Form generated from reading UI file 'newgamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAMEWINDOW_H
#define UI_NEWGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
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
            NewGameWindow->setObjectName(QString::fromUtf8("NewGameWindow"));
        NewGameWindow->resize(640, 460);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/playerDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewGameWindow->setWindowIcon(icon);
        graphicsView = new QGraphicsView(NewGameWindow);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/res/images/graphics1.jpg)  0 0 0 0 stretch stretch;"));
        label = new QLabel(NewGameWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 231, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 16pt \"MS UI Gothic\";\n"
"color: rgb(255, 255, 255);"));
        nameTextEdit = new QTextEdit(NewGameWindow);
        nameTextEdit->setObjectName(QString::fromUtf8("nameTextEdit"));
        nameTextEdit->setGeometry(QRect(260, 50, 131, 31));
        nameTextEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"MS UI Gothic\";\n"
"background-color: rgb(255, 252, 253);\n"
"color: rgb(0, 0, 0);"));
        startButton = new QPushButton(NewGameWindow);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(480, 360, 101, 41));
        graphicsView->raise();
        label->raise();
        startButton->raise();
        nameTextEdit->raise();

        retranslateUi(NewGameWindow);

        QMetaObject::connectSlotsByName(NewGameWindow);
    } // setupUi

    void retranslateUi(QWidget *NewGameWindow)
    {
        NewGameWindow->setWindowTitle(QApplication::translate("NewGameWindow", "New Game", nullptr));
        label->setText(QApplication::translate("NewGameWindow", "Please enter your \n"
"character's name:", nullptr));
        startButton->setText(QApplication::translate("NewGameWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewGameWindow: public Ui_NewGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAMEWINDOW_H
