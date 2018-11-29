#ifndef RAY_H
#define RAY_H
#include "material.h"
#include "notification.h"
#include <QMessageBox>
#include <QWidget>
#include "dialogtype.h"

namespace Ui {
class Ray;
}

class Ray : public QWidget
{
    Q_OBJECT

public:
    explicit Ray(QWidget *parent = nullptr);
    ~Ray();
    void UpdateChech();
protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_Btn_Add_clicked();

    void on_Btn_Save_clicked();

    void on_Btn_Del_clicked();

    void on_Tab_Prod_activated(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_Serach_Btn_clicked();

    void on_Btn_Print_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Ray *ui;
    Material M;
    Notification N;
    DialogType * D;
};

#endif // RAY_H
