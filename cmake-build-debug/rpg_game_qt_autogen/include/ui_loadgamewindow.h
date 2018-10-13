/********************************************************************************
** Form generated from reading UI file 'loadgamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADGAMEWINDOW_H
#define UI_LOADGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
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
            LoadGameWindow->setObjectName(QStringLiteral("LoadGameWindow"));
        LoadGameWindow->resize(640, 460);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoadGameWindow->sizePolicy().hasHeightForWidth());
        LoadGameWindow->setSizePolicy(sizePolicy);
        graphicsView = new QGraphicsView(LoadGameWindow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/res/images/haunted_house5.png) 0 0 0 0 stretch stretch;"));
        listWidget = new QListWidget(LoadGameWindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(70, 90, 500, 281));
        listWidget->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 160);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS UI Gothic\";"));
        label = new QLabel(LoadGameWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 231, 41));
        label->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0,170);\n"
"font: 16pt \"MS UI Gothic\";\n"
"color: rgb(255, 255, 255);"));
        loadButton = new QPushButton(LoadGameWindow);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(430, 400, 141, 31));
        backButton = new QPushButton(LoadGameWindow);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(70, 400, 141, 31));

        retranslateUi(LoadGameWindow);

        QMetaObject::connectSlotsByName(LoadGameWindow);
    } // setupUi

    void retranslateUi(QWidget *LoadGameWindow)
    {
        LoadGameWindow->setWindowTitle(QApplication::translate("LoadGameWindow", "Form", 0));
        label->setText(QApplication::translate("LoadGameWindow", "Select your save to load:", 0));
        loadButton->setText(QApplication::translate("LoadGameWindow", "Load", 0));
        backButton->setText(QApplication::translate("LoadGameWindow", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class LoadGameWindow: public Ui_LoadGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADGAMEWINDOW_H
