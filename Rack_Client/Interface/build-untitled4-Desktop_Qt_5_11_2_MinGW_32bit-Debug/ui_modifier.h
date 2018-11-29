/********************************************************************************
** Form generated from reading UI file 'modifier.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFIER_H
#define UI_MODIFIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Modifier
{
public:

    void setupUi(QDialog *Modifier)
    {
        if (Modifier->objectName().isEmpty())
            Modifier->setObjectName(QStringLiteral("Modifier"));
        Modifier->resize(400, 300);

        retranslateUi(Modifier);

        QMetaObject::connectSlotsByName(Modifier);
    } // setupUi

    void retranslateUi(QDialog *Modifier)
    {
        Modifier->setWindowTitle(QApplication::translate("Modifier", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Modifier: public Ui_Modifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFIER_H
