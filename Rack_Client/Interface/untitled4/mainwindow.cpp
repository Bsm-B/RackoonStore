#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include<QSqlQuery>
#include <QMessageBox>
#include <QMediaPlayer>
#include "carte_fidelite.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QStringList attributs, attributs2 ;

    ui->setupUi(this);
    setWindowTitle("Gestion Du Client");
    ui->tableWidget->setColumnCount(4);
    attributs << "CIN" << "Nom" << "Prénom" << "Dernière visite" ;
    ui->tableWidget->setHorizontalHeaderLabels(attributs);

    ui->tableWidget_2->setColumnCount(2);
    attributs2 << "CIN" << "Points" ;
    ui->tableWidget_2->setHorizontalHeaderLabels(attributs2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_3_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_pushButton_4_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    Client C;

    C.Supprimer_tout();
    ui->pushButton_2->click();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    QSqlQuery query;
    ui->tableWidget->setRowCount(0);
    query.exec("SELECT * from Client");
                while (query.next()) {
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(query.value(0).toString()) );
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(query.value(1).toString()) );
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(query.value(2).toString()) );
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(query.value(3).toString()) );
                }
}

void MainWindow::on_pushButton_5_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_6_clicked()
{
    QSqlQuery query;
        query.prepare("INSERT INTO Client (nom, prenom, CIN, D_V) VALUES (:nom, :prenom, :CIN, :D_V) ");
        query.bindValue(":nom", ui->lineEdit->text());
        query.bindValue(":prenom", ui->lineEdit_2->text());
        query.bindValue(":CIN", ui->lineEdit_3->text());
        query.bindValue(":D_V", ui->lineEdit_5->text());
        query.exec();

    Client C ;
    //C.Ajouter(ui->lineEdit->text(), ui->lineEdit_2->text(), ui->lineEdit_3->text(), ui->lineEdit_4->text().toInt());

            ui->stackedWidget->setCurrentIndex(0);
            ui->pushButton_2->click();

}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_10_clicked()
{
    QSqlQuery q;
    q.prepare("delete from Client where CIN=:CIN");
    q.bindValue(":CIN", ui->lineEdit_10->text().toInt());
    q.exec();

    ui->stackedWidget->setCurrentIndex(0);
    ui->pushButton_2->click();
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_8_clicked()
{
    QSqlQuery q;
    q.prepare("update Client set nom = ?, prenom = ?, D_V = ?  where CIN= ?");
    q.addBindValue(ui->lineEdit_4->text());
    q.addBindValue(ui->lineEdit_6->text());
    q.addBindValue(ui->lineEdit_8->text());
    q.addBindValue(ui->lineEdit_7->text());
    q.exec();

    ui->stackedWidget->setCurrentIndex(0);
    ui->pushButton_2->click();
}

void MainWindow::on_pushButton_12_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    QSqlQuery query;
    ui->tableWidget_2->setRowCount(0);
    query.exec("SELECT * from Carte_Fidelite");
                while (query.next()) {
    ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
    ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount() - 1, 0, new QTableWidgetItem(query.value(0).toString()) );
    ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount() - 1, 1, new QTableWidgetItem(query.value(1).toString()) );
                }
}

void MainWindow::on_pushButton_17_clicked()
{
    QSqlQuery query;
        query.prepare("INSERT INTO Carte_Fidelite (CIN, Points) VALUES (:CIN, :points) ");
        query.bindValue(":CIN", ui->lineEdit_12->text());
        query.bindValue(":points", ui->lineEdit_13->text());
        query.exec();

        ui->stackedWidget->setCurrentIndex(0);
        ui->pushButton_12->click();
}

void MainWindow::on_pushButton_13_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_14_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_15_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_22_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_16_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    Carte_Fidelite carte ;
    carte.supprimer_tout();

    ui->pushButton_12->click();
}

void MainWindow::on_pushButton_21_clicked()
{
    QSqlQuery q;
    q.prepare("delete from Carte_Fidelite where CIN=:CIN");
    q.bindValue(":CIN", ui->lineEdit_14->text().toInt());
    q.exec();

    ui->stackedWidget->setCurrentIndex(0);
    ui->pushButton_12->click();
}

void MainWindow::on_pushButton_19_clicked()
{
    QSqlQuery q;
    q.prepare("update Carte_Fidelite set Points = ? where CIN= ?");
    q.addBindValue(ui->lineEdit_15->text());
    q.addBindValue(ui->lineEdit_11->text());
    q.exec();

    ui->stackedWidget->setCurrentIndex(0);
    ui->pushButton_12->click();
}

void MainWindow::on_pushButton_23_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_25_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_24_clicked()
{
    QSqlQuery query;
    ui->tableWidget->setRowCount(0);

    if(ui->radioButton_2->isChecked())
    {
        query.exec("SELECT * from Client order by nom");
    }
    else if (ui->radioButton->isChecked())
    {
        query.exec("SELECT * from Client order by CIN");
    }
    else if (ui->radioButton_3->isChecked())
    {
        query.exec("SELECT * from Client order by prenom");
    }
                while (query.next()) {
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(query.value(0).toString()) );
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(query.value(1).toString()) );
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(query.value(2).toString()) );
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(query.value(3).toString()) );
                }
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_27_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_28_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_26_clicked()
{
    QSqlQuery query;
    ui->tableWidget->setRowCount(0);

    QString  cmd  = "SELECT * from Client where " ;

    if(ui->radioButton_4->isChecked())
    {
        cmd += "nom LIKE " ;
    }
    else if (ui->radioButton_5->isChecked())
    {
        cmd += "prenom LIKE " ;
    }
    else if (ui->radioButton_6->isChecked())
    {
        cmd += "CIN LIKE " ;
    }

    if(ui->radioButton_7->isChecked())
    {
        cmd += "'" + ui->lineEdit_9->text() + "%'" ;
    }
    else if (ui->radioButton_8->isChecked())
    {
        cmd += "'%" + ui->lineEdit_9->text() + "'" ;
    }
    else if (ui->radioButton_9->isChecked())
    {
        cmd += "'%" + ui->lineEdit_9->text() + "%'" ;
    }

    query.exec(cmd);
                while (query.next()) {
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(query.value(0).toString()) );
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(query.value(1).toString()) );
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(query.value(2).toString()) );
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(query.value(3).toString()) );
                }
    ui->stackedWidget->setCurrentIndex(0);

}
