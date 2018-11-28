/********************************************************************************
** Form generated from reading UI file 'add_type.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TYPE_H
#define UI_ADD_TYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_Type
{
public:
    QTableView *tableView;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Add_Type)
    {
        if (Add_Type->objectName().isEmpty())
            Add_Type->setObjectName(QStringLiteral("Add_Type"));
        Add_Type->resize(311, 293);
        tableView = new QTableView(Add_Type);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 100, 291, 181));
        gridLayoutWidget = new QWidget(Add_Type);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 291, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);


        retranslateUi(Add_Type);

        QMetaObject::connectSlotsByName(Add_Type);
    } // setupUi

    void retranslateUi(QWidget *Add_Type)
    {
        Add_Type->setWindowTitle(QApplication::translate("Add_Type", "Form", nullptr));
        label_2->setText(QApplication::translate("Add_Type", "Name :", nullptr));
        label->setText(QApplication::translate("Add_Type", "Type ID:", nullptr));
        pushButton->setText(QApplication::translate("Add_Type", "Add Type", nullptr));
        pushButton_2->setText(QApplication::translate("Add_Type", "Delete Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Type: public Ui_Add_Type {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TYPE_H
