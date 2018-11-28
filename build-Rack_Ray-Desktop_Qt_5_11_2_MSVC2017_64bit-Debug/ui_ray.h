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
    QTableView *Tab_Prod;
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
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Btn_Add;
    QPushButton *Btn_Edit;
    QPushButton *Btn_Del;
    QPushButton *Btn_Print;
    QGroupBox *groupBox_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Ray)
    {
        if (Ray->objectName().isEmpty())
            Ray->setObjectName(QStringLiteral("Ray"));
        Ray->resize(889, 562);
        tabWidget = new QTabWidget(Ray);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 871, 541));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Tab_Prod = new QTableView(tab_2);
        Tab_Prod->setObjectName(QStringLiteral("Tab_Prod"));
        Tab_Prod->setGeometry(QRect(10, 100, 841, 251));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 841, 80));
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
        horizontalLayoutWidget_2->setGeometry(QRect(410, 30, 421, 41));
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

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 420, 841, 81));
        horizontalLayoutWidget_3 = new QWidget(groupBox_2);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 20, 821, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Btn_Add = new QPushButton(horizontalLayoutWidget_3);
        Btn_Add->setObjectName(QStringLiteral("Btn_Add"));

        horizontalLayout_3->addWidget(Btn_Add);

        Btn_Edit = new QPushButton(horizontalLayoutWidget_3);
        Btn_Edit->setObjectName(QStringLiteral("Btn_Edit"));

        horizontalLayout_3->addWidget(Btn_Edit);

        Btn_Del = new QPushButton(horizontalLayoutWidget_3);
        Btn_Del->setObjectName(QStringLiteral("Btn_Del"));

        horizontalLayout_3->addWidget(Btn_Del);

        Btn_Print = new QPushButton(horizontalLayoutWidget_3);
        Btn_Print->setObjectName(QStringLiteral("Btn_Print"));

        horizontalLayout_3->addWidget(Btn_Print);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 360, 841, 51));
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 20, 751, 21));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

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
        groupBox_2->setTitle(QApplication::translate("Ray", "Controls ", nullptr));
        Btn_Add->setText(QApplication::translate("Ray", "ADD", nullptr));
        Btn_Edit->setText(QApplication::translate("Ray", "EDIT", nullptr));
        Btn_Del->setText(QApplication::translate("Ray", "DELET", nullptr));
        Btn_Print->setText(QApplication::translate("Ray", "PRINT", nullptr));
        groupBox_3->setTitle(QApplication::translate("Ray", "Information ", nullptr));
        label_2->setText(QApplication::translate("Ray", "Total Selling Price :", nullptr));
        label_3->setText(QApplication::translate("Ray", "x", nullptr));
        label_4->setText(QApplication::translate("Ray", "Number of items:", nullptr));
        label_5->setText(QApplication::translate("Ray", "y", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Ray", "Product ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ray: public Ui_Ray {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAY_H
