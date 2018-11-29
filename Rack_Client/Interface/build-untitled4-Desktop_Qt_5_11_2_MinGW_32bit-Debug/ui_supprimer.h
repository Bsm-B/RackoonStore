/********************************************************************************
** Form generated from reading UI file 'supprimer.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMER_H
#define UI_SUPPRIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Supprimer
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Supprimer)
    {
        if (Supprimer->objectName().isEmpty())
            Supprimer->setObjectName(QStringLiteral("Supprimer"));
        Supprimer->resize(313, 62);
        layoutWidget = new QWidget(Supprimer);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 311, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        layoutWidget1 = new QWidget(Supprimer);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 30, 221, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        retranslateUi(Supprimer);

        QMetaObject::connectSlotsByName(Supprimer);
    } // setupUi

    void retranslateUi(QDialog *Supprimer)
    {
        Supprimer->setWindowTitle(QApplication::translate("Supprimer", "Dialog", nullptr));
        label->setText(QApplication::translate("Supprimer", "Nom :", nullptr));
        pushButton->setText(QApplication::translate("Supprimer", "Supprimer", nullptr));
        pushButton_2->setText(QApplication::translate("Supprimer", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Supprimer: public Ui_Supprimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMER_H
