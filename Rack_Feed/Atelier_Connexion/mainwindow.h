#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "offre.h"
#include "reclamation.h"
#include "avis.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonR_clicked();

    void on_pb_supprimer_clicked();

    void on_pushButton_O_clicked();

    void on_pb_Osupprimer_clicked();

    void on_pushButton_2_clicked();

    void on_Rrechercher_clicked();

    void on_pb_orechercher_clicked();


    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_lineEdit_rid_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_oid_2_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
    reclamation tmpreclamation;
    offre tmpoffre;
    avis tmpavis;

};

#endif // MAINWINDOW_H
