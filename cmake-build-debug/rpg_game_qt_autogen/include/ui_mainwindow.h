/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
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
    QLabel *label;
    QLabel *label_2;
    QPushButton *loadButton;
    QGraphicsView *graphicsView;
    QPushButton *creditsButton;
    QPushButton *newButton;

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
        backgroundImage->setStyleSheet(QString::fromUtf8("border-image: url(:/res/images/haunted_house2.jpg) 0 0 0 0 stretch stretch;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 251, 31));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"font: 10pt \"MS PGothic\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 311, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 24pt \"Tempus Sans ITC\";\n"
"color: rgb(255, 250, 192);"));
        loadButton = new QPushButton(centralWidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(60, 169, 110, 40));
        loadButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Tempus Sans ITC\";"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(40, 90, 151, 201));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50, 160);"));
        creditsButton = new QPushButton(centralWidget);
        creditsButton->setObjectName(QString::fromUtf8("creditsButton"));
        creditsButton->setGeometry(QRect(60, 229, 110, 40));
        creditsButton->setAutoFillBackground(false);
        creditsButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Tempus Sans ITC\";"));
        newButton = new QPushButton(centralWidget);
        newButton->setObjectName(QString::fromUtf8("newButton"));
        newButton->setGeometry(QRect(60, 109, 110, 40));
        newButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Tempus Sans ITC\";"));
        MainWindow->setCentralWidget(centralWidget);
        backgroundImage->raise();
        label->raise();
        label_2->raise();
        graphicsView->raise();
        creditsButton->raise();
        newButton->raise();
        loadButton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Haunted House - Mateusz Plinta", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Haunted House Game", nullptr));
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
