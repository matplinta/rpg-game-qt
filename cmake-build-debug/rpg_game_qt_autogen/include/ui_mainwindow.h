/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *backgroundImage;
    QLabel *label_2;
    QPushButton *loadButton;
    QGraphicsView *graphicsView;
    QPushButton *creditsButton;
    QPushButton *newButton;
    QGraphicsView *graphicsView_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 460);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        backgroundImage = new QGraphicsView(centralWidget);
        backgroundImage->setObjectName(QString::fromUtf8("backgroundImage"));
        backgroundImage->setGeometry(QRect(0, 0, 640, 460));
        backgroundImage->setStyleSheet(QString::fromUtf8("border-image: url(:/res/images/graphics0.jpeg) 0 0 0 0 stretch stretch;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 40, 361, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 63 28pt \"URW Gothic\";\n"
"color: rgb(255, 232, 117);"));
        loadButton = new QPushButton(centralWidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(60, 190, 110, 40));
        loadButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Tempus Sans ITC\";"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(40, 111, 151, 201));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50, 160);"));
        creditsButton = new QPushButton(centralWidget);
        creditsButton->setObjectName(QString::fromUtf8("creditsButton"));
        creditsButton->setGeometry(QRect(60, 250, 110, 40));
        creditsButton->setAutoFillBackground(false);
        creditsButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Tempus Sans ITC\";"));
        newButton = new QPushButton(centralWidget);
        newButton->setObjectName(QString::fromUtf8("newButton"));
        newButton->setGeometry(QRect(60, 130, 110, 40));
        newButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Tempus Sans ITC\";"));
        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(220, 30, 371, 51));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 80);"));
        MainWindow->setCentralWidget(centralWidget);
        backgroundImage->raise();
        graphicsView->raise();
        creditsButton->raise();
        newButton->raise();
        loadButton->raise();
        graphicsView_2->raise();
        label_2->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Haunted Pokemons", nullptr));
        loadButton->setText(QApplication::translate("MainWindow", "Load Game", nullptr));
        creditsButton->setText(QApplication::translate("MainWindow", "Credits", nullptr));
        newButton->setText(QApplication::translate("MainWindow", "New Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
