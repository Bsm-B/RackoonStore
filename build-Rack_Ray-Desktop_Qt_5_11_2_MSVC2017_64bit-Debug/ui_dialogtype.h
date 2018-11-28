/********************************************************************************
** Form generated from reading UI file 'dialogtype.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTYPE_H
#define UI_DIALOGTYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogType
{
public:
    QTableView *tableView;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DialogType)
    {
        if (DialogType->objectName().isEmpty())
            DialogType->setObjectName(QStringLiteral("DialogType"));
        DialogType->resize(400, 300);
        tableView = new QTableView(DialogType);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 80, 371, 211));
        gridLayoutWidget = new QWidget(DialogType);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 371, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 2, 1, 1);


        retranslateUi(DialogType);

        QMetaObject::connectSlotsByName(DialogType);
    } // setupUi

    void retranslateUi(QDialog *DialogType)
    {
        DialogType->setWindowTitle(QApplication::translate("DialogType", "Dialog", nullptr));
        label->setText(QApplication::translate("DialogType", "ID :", nullptr));
        label_2->setText(QApplication::translate("DialogType", "Name:           ", nullptr));
        pushButton->setText(QApplication::translate("DialogType", "Add Type", nullptr));
        pushButton_2->setText(QApplication::translate("DialogType", "Delet Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogType: public Ui_DialogType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTYPE_H
