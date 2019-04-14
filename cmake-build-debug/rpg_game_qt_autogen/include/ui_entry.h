/********************************************************************************
** Form generated from reading UI file 'entry.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRY_H
#define UI_ENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Entry
{
public:
    QGraphicsView *graphicsView;
    QPushButton *nextButton;
    QLabel *label;

    void setupUi(QWidget *entry)
    {
        if (entry->objectName().isEmpty())
            entry->setObjectName(QString::fromUtf8("entry"));
        entry->resize(640, 460);
        graphicsView = new QGraphicsView(entry);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 460));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/res/images/graphics1.jpg)  0 0 0 0 stretch stretch;"));
        nextButton = new QPushButton(entry);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(270, 340, 101, 41));
        label = new QLabel(entry);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 100, 531, 121));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0, 200, 40);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"MS UI Gothic\";"));

        retranslateUi(entry);

        QMetaObject::connectSlotsByName(entry);
    } // setupUi

    void retranslateUi(QWidget *entry)
    {
        entry->setWindowTitle(QApplication::translate("Entry", "Form", nullptr));
        nextButton->setText(QApplication::translate("Entry", "Next", nullptr));
        label->setText(QApplication::translate("Entry", "            Did you hear about that haunted house on Shadow Hills?\n"
"            I bet it's just a mit, let's go check it out! ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Entry: public Ui_Entry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRY_H
