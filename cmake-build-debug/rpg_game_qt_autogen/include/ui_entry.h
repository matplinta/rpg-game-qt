/********************************************************************************
** Form generated from reading UI file 'entry.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRY_H
#define UI_ENTRY_H

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

class Ui_entry
{
public:
    QGraphicsView *graphicsView;
    QPushButton *nextButton;
    QLabel *label;

    void setupUi(QWidget *entry)
    {
        if (entry->objectName().isEmpty())
            entry->setObjectName(QStringLiteral("entry"));
        entry->resize(640, 460);
        graphicsView = new QGraphicsView(entry);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/res/images/haunted_house3.png) 0 0 0 0 stretch stretch;"));
        nextButton = new QPushButton(entry);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(270, 340, 101, 41));
        label = new QLabel(entry);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 180, 531, 121));
        label->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 200);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"MS UI Gothic\";"));

        retranslateUi(entry);

        QMetaObject::connectSlotsByName(entry);
    } // setupUi

    void retranslateUi(QWidget *entry)
    {
        entry->setWindowTitle(QApplication::translate("entry", "Form", 0));
        nextButton->setText(QApplication::translate("entry", "Next", 0));
        label->setText(QApplication::translate("entry", "            Did you hear about that haunted house on Shadow Hills?\n"
"            I bet it's just  a mit, let's go check it out! ", 0));
    } // retranslateUi

};

namespace Ui {
    class entry: public Ui_entry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRY_H
