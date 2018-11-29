/********************************************************************************
** Form generated from reading UI file 'ray.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAY_H
#define UI_RAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ray
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_6;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QTableView *tableView_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QLabel *label_17;
    QLabel *label_20;
    QLineEdit *lineEdit_7;
    QLabel *label_18;
    QLineEdit *lineEdit_6;
    QLabel *label_21;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_7;
    QTableView *tableView;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Serach_Btn;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_13;
    QLabel *label_14;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Btn_Add;
    QPushButton *Btn_Save;
    QPushButton *Btn_Del;
    QPushButton *Btn_Print;
    QGroupBox *groupBox_4;
    QTableView *Tab_Prod;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *box_id;
    QLabel *label_7;
    QLineEdit *box_code;
    QLabel *label_8;
    QLineEdit *box_name;
    QLabel *label_9;
    QLineEdit *box_quantity;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *box_price;
    QLabel *label_12;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *comboBox_type;
    QPushButton *pushButton_6;

    void setupUi(QWidget *Ray)
    {
        if (Ray->objectName().isEmpty())
            Ray->setObjectName(QStringLiteral("Ray"));
        Ray->resize(1324, 666);
        tabWidget = new QTabWidget(Ray);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1301, 651));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 651, 291));
        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 310, 881, 311));
        tabWidget_2 = new QTabWidget(groupBox_6);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 20, 861, 281));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_2 = new QTableView(tab_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(10, 40, 581, 201));
        formLayoutWidget_2 = new QWidget(tab_3);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(600, 40, 241, 201));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_15);

        lineEdit_3 = new QLineEdit(formLayoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        label_17 = new QLabel(formLayoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_17);

        label_20 = new QLabel(formLayoutWidget_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_20);

        lineEdit_7 = new QLineEdit(formLayoutWidget_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_7);

        label_18 = new QLabel(formLayoutWidget_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_18);

        lineEdit_6 = new QLineEdit(formLayoutWidget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_6);

        label_21 = new QLabel(formLayoutWidget_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_21);

        lineEdit_4 = new QLineEdit(formLayoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_4);

        comboBox = new QComboBox(formLayoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBox);

        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 851, 31));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_9->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_9->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        horizontalLayout_9->addWidget(pushButton_10);

        tabWidget_2->addTab(tab_3, QString());
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(670, 10, 311, 301));
        tableView = new QTableView(groupBox_7);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 291, 241));
        layoutWidget1 = new QWidget(groupBox_7);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 291, 25));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_5);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_8->addWidget(pushButton);

        pushButton_7 = new QPushButton(layoutWidget1);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_8->addWidget(pushButton_7);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 951, 80));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 391, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(410, 30, 531, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Serach_Btn = new QPushButton(horizontalLayoutWidget_2);
        Serach_Btn->setObjectName(QStringLiteral("Serach_Btn"));

        horizontalLayout_2->addWidget(Serach_Btn);

        pushButton_3 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 450, 951, 51));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 20, 881, 21));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_4->addWidget(label_13);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_4->addWidget(label_14);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 90, 951, 61));
        horizontalLayoutWidget_3 = new QWidget(groupBox_2);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 20, 931, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Btn_Add = new QPushButton(horizontalLayoutWidget_3);
        Btn_Add->setObjectName(QStringLiteral("Btn_Add"));

        horizontalLayout_3->addWidget(Btn_Add);

        Btn_Save = new QPushButton(horizontalLayoutWidget_3);
        Btn_Save->setObjectName(QStringLiteral("Btn_Save"));

        horizontalLayout_3->addWidget(Btn_Save);

        Btn_Del = new QPushButton(horizontalLayoutWidget_3);
        Btn_Del->setObjectName(QStringLiteral("Btn_Del"));

        horizontalLayout_3->addWidget(Btn_Del);

        Btn_Print = new QPushButton(horizontalLayoutWidget_3);
        Btn_Print->setObjectName(QStringLiteral("Btn_Print"));

        horizontalLayout_3->addWidget(Btn_Print);

        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 160, 951, 291));
        Tab_Prod = new QTableView(groupBox_4);
        Tab_Prod->setObjectName(QStringLiteral("Tab_Prod"));
        Tab_Prod->setGeometry(QRect(290, 10, 651, 271));
        formLayoutWidget = new QWidget(groupBox_4);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 271, 261));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        box_id = new QLineEdit(formLayoutWidget);
        box_id->setObjectName(QStringLiteral("box_id"));
        box_id->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, box_id);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        box_code = new QLineEdit(formLayoutWidget);
        box_code->setObjectName(QStringLiteral("box_code"));

        formLayout->setWidget(1, QFormLayout::FieldRole, box_code);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        box_name = new QLineEdit(formLayoutWidget);
        box_name->setObjectName(QStringLiteral("box_name"));

        formLayout->setWidget(2, QFormLayout::FieldRole, box_name);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_9);

        box_quantity = new QLineEdit(formLayoutWidget);
        box_quantity->setObjectName(QStringLiteral("box_quantity"));

        formLayout->setWidget(3, QFormLayout::FieldRole, box_quantity);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_11);

        box_price = new QLineEdit(formLayoutWidget);
        box_price->setObjectName(QStringLiteral("box_price"));

        formLayout->setWidget(6, QFormLayout::FieldRole, box_price);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_12);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, dateEdit);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        comboBox_type = new QComboBox(formLayoutWidget);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));

        horizontalLayout_6->addWidget(comboBox_type);

        pushButton_6 = new QPushButton(formLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_6->addWidget(pushButton_6);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_6);

        tabWidget->addTab(tab_2, QString());

        retranslateUi(Ray);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Ray);
    } // setupUi

    void retranslateUi(QWidget *Ray)
    {
        Ray->setWindowTitle(QApplication::translate("Ray", "Ray", nullptr));
        groupBox_5->setTitle(QApplication::translate("Ray", "Schema - 2D ", nullptr));
        groupBox_6->setTitle(QApplication::translate("Ray", "Mangement", nullptr));
        label_15->setText(QApplication::translate("Ray", "Container ID :    ", nullptr));
        label_17->setText(QApplication::translate("Ray", "Item ID :", nullptr));
        label_20->setText(QApplication::translate("Ray", "Price :", nullptr));
        label_18->setText(QApplication::translate("Ray", "Max Quantity :", nullptr));
        label_21->setText(QApplication::translate("Ray", "Alert :", nullptr));
        pushButton_8->setText(QApplication::translate("Ray", "ADD", nullptr));
        pushButton_9->setText(QApplication::translate("Ray", "SAVE", nullptr));
        pushButton_10->setText(QApplication::translate("Ray", "DELETE", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Ray", "Container", nullptr));
        groupBox_7->setTitle(QApplication::translate("Ray", "Notifications", nullptr));
        pushButton->setText(QApplication::translate("Ray", "Delete", nullptr));
        pushButton_7->setText(QApplication::translate("Ray", "Logs", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Ray", "Rayon", nullptr));
        groupBox->setTitle(QApplication::translate("Ray", "Tools", nullptr));
        lineEdit->setText(QApplication::translate("Ray", "Search By ID", nullptr));
        label->setText(QApplication::translate("Ray", "Or", nullptr));
        lineEdit_2->setText(QApplication::translate("Ray", "Search By Name", nullptr));
        Serach_Btn->setText(QApplication::translate("Ray", "Search", nullptr));
        pushButton_3->setText(QApplication::translate("Ray", "Sort by ID", nullptr));
        pushButton_4->setText(QApplication::translate("Ray", "Sort By  Code", nullptr));
        pushButton_5->setText(QApplication::translate("Ray", "Sort By Name", nullptr));
        pushButton_2->setText(QApplication::translate("Ray", "Cancel", nullptr));
        groupBox_3->setTitle(QApplication::translate("Ray", "Information ", nullptr));
        label_2->setText(QApplication::translate("Ray", "Total Selling Price :", nullptr));
        label_3->setText(QApplication::translate("Ray", "x", nullptr));
        label_4->setText(QApplication::translate("Ray", "Number of items:", nullptr));
        label_5->setText(QApplication::translate("Ray", "y", nullptr));
        label_13->setText(QApplication::translate("Ray", "Total Quantity:", nullptr));
        label_14->setText(QApplication::translate("Ray", "z", nullptr));
        groupBox_2->setTitle(QApplication::translate("Ray", "Controls ", nullptr));
        Btn_Add->setText(QApplication::translate("Ray", "ADD", nullptr));
        Btn_Save->setText(QApplication::translate("Ray", "Save", nullptr));
        Btn_Del->setText(QApplication::translate("Ray", "DELET", nullptr));
        Btn_Print->setText(QApplication::translate("Ray", "PRINT", nullptr));
        groupBox_4->setTitle(QApplication::translate("Ray", "Data", nullptr));
        label_6->setText(QApplication::translate("Ray", "Id : ", nullptr));
        label_7->setText(QApplication::translate("Ray", "Code : ", nullptr));
        label_8->setText(QApplication::translate("Ray", "Item Name :", nullptr));
        label_9->setText(QApplication::translate("Ray", "QuantityAvailable :", nullptr));
        label_10->setText(QApplication::translate("Ray", "Type :", nullptr));
        label_11->setText(QApplication::translate("Ray", "Price :", nullptr));
        label_12->setText(QApplication::translate("Ray", "Expiration Date :", nullptr));
        pushButton_6->setText(QApplication::translate("Ray", "ADD Type", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Ray", "Product ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ray: public Ui_Ray {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAY_H
