#ifndef ADD_TYPE_H
#define ADD_TYPE_H
#include "type.h"
#include <QWidget>

namespace Ui {
class Add_Type;
}

class Add_Type : public QWidget
{
    Q_OBJECT

public:
    explicit Add_Type(QWidget *parent = nullptr);
    ~Add_Type();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Add_Type *ui;
        Type temType;
};

#endif // ADD_TYPE_H
