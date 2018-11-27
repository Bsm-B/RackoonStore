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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ray
{
public:

    void setupUi(QWidget *Ray)
    {
        if (Ray->objectName().isEmpty())
            Ray->setObjectName(QStringLiteral("Ray"));
        Ray->resize(400, 300);

        retranslateUi(Ray);

        QMetaObject::connectSlotsByName(Ray);
    } // setupUi

    void retranslateUi(QWidget *Ray)
    {
        Ray->setWindowTitle(QApplication::translate("Ray", "Ray", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ray: public Ui_Ray {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAY_H
