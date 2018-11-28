#ifndef DIALOGTYPE_H
#define DIALOGTYPE_H

#include <QDialog>
#include "type.h"

namespace Ui {
class DialogType;
}

class DialogType : public QDialog
{
    Q_OBJECT

public:
    explicit DialogType(QWidget *parent = nullptr);
    ~DialogType();
    void TDis();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DialogType *ui;
    Type TType;
};

#endif // DIALOGTYPE_H
