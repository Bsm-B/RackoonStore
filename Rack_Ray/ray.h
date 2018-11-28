#ifndef RAY_H
#define RAY_H
#include "material.h"
#include <QMessageBox>
#include <QWidget>

namespace Ui {
class Ray;
}

class Ray : public QWidget
{
    Q_OBJECT

public:
    explicit Ray(QWidget *parent = nullptr);
    ~Ray();
protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_Btn_Add_clicked();

    void on_Btn_Save_clicked();

    void on_Btn_Del_clicked();

    void on_Tab_Prod_activated(const QModelIndex &index);

private:
    Ui::Ray *ui;
    Material M;
};

#endif // RAY_H
