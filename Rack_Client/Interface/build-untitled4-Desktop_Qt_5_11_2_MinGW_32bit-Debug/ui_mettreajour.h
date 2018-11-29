/********************************************************************************
** Form generated from reading UI file 'mettreajour.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METTREAJOUR_H
#define UI_METTREAJOUR_H

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

class Ui_MettreAJour
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *MettreAJour)
    {
        if (MettreAJour->objectName().isEmpty())
            MettreAJour->setObjectName(QStringLiteral("MettreAJour"));
        MettreAJour->resize(400, 300);
        widget = new QWidget(MettreAJour);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 93, 241));
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

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        widget1 = new QWidget(MettreAJour);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(100, 0, 291, 251));
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

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        widget2 = new QWidget(MettreAJour);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(110, 260, 195, 30));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(MettreAJour);

        QMetaObject::connectSlotsByName(MettreAJour);
    } // setupUi

    void retranslateUi(QDialog *MettreAJour)
    {
        MettreAJour->setWindowTitle(QApplication::translate("MettreAJour", "Dialog", nullptr));
        label->setText(QApplication::translate("MettreAJour", "Nom :", nullptr));
        label_2->setText(QApplication::translate("MettreAJour", "Pr\303\251nom :", nullptr));
        label_3->setText(QApplication::translate("MettreAJour", "CIN :", nullptr));
        label_4->setText(QApplication::translate("MettreAJour", "Derni\303\250re visite :", nullptr));
        label_5->setText(QApplication::translate("MettreAJour", "xD :", nullptr));
        pushButton->setText(QApplication::translate("MettreAJour", "Mettre A Jour", nullptr));
        pushButton_2->setText(QApplication::translate("MettreAJour", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MettreAJour: public Ui_MettreAJour {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METTREAJOUR_H
