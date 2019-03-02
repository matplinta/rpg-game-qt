/********************************************************************************
** Form generated from reading UI file 'loadgamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADGAMEWINDOW_H
#define UI_LOADGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadGameWindow
{
public:
    QGraphicsView *graphicsView;
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *loadButton;
    QPushButton *backButton;

    void setupUi(QWidget *LoadGameWindow)
    {
        if (LoadGameWindow->objectName().isEmpty())
            LoadGameWindow->setObjectName(QString::fromUtf8("LoadGameWindow"));
        LoadGameWindow->resize(640, 460);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoadGameWindow->sizePolicy().hasHeightForWidth());
        LoadGameWindow->setSizePolicy(sizePolicy);
        graphicsView = new QGraphicsView(LoadGameWindow);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/res/images/haunted_house5.png) 0 0 0 0 stretch stretch;"));
        listWidget = new QListWidget(LoadGameWindow);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(70, 90, 500, 281));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 160);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS UI Gothic\";"));
        label = new QLabel(LoadGameWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 40, 231, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,170);\n"
"font: 16pt \"MS UI Gothic\";\n"
"color: rgb(255, 255, 255);"));
        loadButton = new QPushButton(LoadGameWindow);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(430, 400, 141, 31));
        backButton = new QPushButton(LoadGameWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(70, 400, 141, 31));

        retranslateUi(LoadGameWindow);

        QMetaObject::connectSlotsByName(LoadGameWindow);
    } // setupUi

    void retranslateUi(QWidget *LoadGameWindow)
    {
        LoadGameWindow->setWindowTitle(QApplication::translate("LoadGameWindow", "Form", nullptr));
        label->setText(QApplication::translate("LoadGameWindow", "Select your save to load:", nullptr));
        loadButton->setText(QApplication::translate("LoadGameWindow", "Load", nullptr));
        backButton->setText(QApplication::translate("LoadGameWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadGameWindow: public Ui_LoadGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADGAMEWINDOW_H
