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
    QWidget *tab_2;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
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
    QComboBox *comboBox_type;
    QLabel *label_11;
    QLineEdit *box_price;
    QLabel *label_12;
    QDateEdit *dateEdit;

    void setupUi(QWidget *Ray)
    {
        if (Ray->objectName().isEmpty())
            Ray->setObjectName(QStringLiteral("Ray"));
        Ray->resize(984, 562);
        tabWidget = new QTabWidget(Ray);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 971, 541));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
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
        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

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
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 20, 881, 21));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

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

        comboBox_type = new QComboBox(formLayoutWidget);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_type);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_11);

        box_price = new QLineEdit(formLayoutWidget);
        box_price->setObjectName(QStringLiteral("box_price"));

        formLayout->setWidget(5, QFormLayout::FieldRole, box_price);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_12);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, dateEdit);

        tabWidget->addTab(tab_2, QString());

        retranslateUi(Ray);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Ray);
    } // setupUi

    void retranslateUi(QWidget *Ray)
    {
        Ray->setWindowTitle(QApplication::translate("Ray", "Ray", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Ray", "Tab 1", nullptr));
        groupBox->setTitle(QApplication::translate("Ray", "Tools", nullptr));
        lineEdit->setText(QApplication::translate("Ray", "Search By ID", nullptr));
        label->setText(QApplication::translate("Ray", "Or", nullptr));
        lineEdit_2->setText(QApplication::translate("Ray", "Search By Name", nullptr));
        pushButton->setText(QApplication::translate("Ray", "Search", nullptr));
        pushButton_3->setText(QApplication::translate("Ray", "Sort by Date", nullptr));
        pushButton_4->setText(QApplication::translate("Ray", "Sort By ", nullptr));
        pushButton_5->setText(QApplication::translate("Ray", "Sort By", nullptr));
        pushButton_2->setText(QApplication::translate("Ray", "Cancel", nullptr));
        groupBox_3->setTitle(QApplication::translate("Ray", "Information ", nullptr));
        label_2->setText(QApplication::translate("Ray", "Total Selling Price :", nullptr));
        label_3->setText(QApplication::translate("Ray", "x", nullptr));
        label_4->setText(QApplication::translate("Ray", "Number of items:", nullptr));
        label_5->setText(QApplication::translate("Ray", "y", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Ray", "Product ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ray: public Ui_Ray {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAY_H
