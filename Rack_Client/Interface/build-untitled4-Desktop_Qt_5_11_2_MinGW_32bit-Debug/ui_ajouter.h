/********************************************************************************
** Form generated from reading UI file 'ajouter.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTER_H
#define UI_AJOUTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ajouter
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Ajouter)
    {
        if (Ajouter->objectName().isEmpty())
            Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->resize(400, 335);
        widget = new QWidget(Ajouter);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 20, 61, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        widget1 = new QWidget(Ajouter);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(60, 10, 331, 281));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        widget2 = new QWidget(Ajouter);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(70, 300, 251, 30));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(Ajouter);

        QMetaObject::connectSlotsByName(Ajouter);
    } // setupUi

    void retranslateUi(QDialog *Ajouter)
    {
        Ajouter->setWindowTitle(QApplication::translate("Ajouter", "Dialog", nullptr));
        label->setText(QApplication::translate("Ajouter", "Nom :", nullptr));
        label_2->setText(QApplication::translate("Ajouter", "Pr\303\251nom :", nullptr));
        label_3->setText(QApplication::translate("Ajouter", "CIN :", nullptr));
        label_5->setText(QApplication::translate("Ajouter", "Xd :", nullptr));
        pushButton->setText(QApplication::translate("Ajouter", "Ajouter", nullptr));
        pushButton_2->setText(QApplication::translate("Ajouter", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ajouter: public Ui_Ajouter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTER_H
