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
    int ret=A.connect_arduino(); // lancer la connexion à arduino
        switch(ret){
        case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
            break;
        case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
           break;
        case(-1):qDebug() << "arduino is not available";
        }
         QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer

    setWindowTitle("Gestion Du Client");
    ui->tableWidget->setColumnCount(7);
    attributs << "CIN" << "NAME" << "SURNAME" << "BIRTH_DATE" << "LAST_VISIT" << "E-MAIL" << "PHOTO"  ;
    ui->tableWidget->setHorizontalHeaderLabels(attributs);

    ui->tableWidget_2->setColumnCount(3);
    attributs2 << "CIN" << "POINTS" << "RFID" ;
    ui->tableWidget_2->setHorizontalHeaderLabels(attributs2);
}

void MainWindow::update_label()
{
    data=A.read_from_arduino();

    rfid += data ;

    //qDebug() << rfid ;

    QStringList pieces = rfid.split( "\r\n" );
    //qDebug() << pieces ;

    if( pieces.length() >= 2 )
        if( pieces[pieces.length() - 2].size() == 11 )
        {
            qDebug() << pieces[pieces.length() - 2] ;
            rfid="";
            if( ui->stackedWidget->currentIndex() == 4 )
                ui->lineEdit_16->setText(pieces[pieces.length() - 2]);
            else if( ui->stackedWidget->currentIndex() == 5 )
                ui->lineEdit_11->setText(pieces[pieces.length() - 2]);
            else if( ui->stackedWidget->currentIndex() == 8 )
                ui->lineEdit_14->setText(pieces[pieces.length() - 2]);
                //qDebug() <<  ui->stackedWidget->currentIndex() ;
        }
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

    Client C ;
    C.Afficher(ui->tableWidget, ui->label_18);
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
    Client C ;
    try {
        C.Ajouter(ui->lineEdit->text().toInt(), ui->lineEdit_2->text(), ui->lineEdit_3->text(), ui->lineEdit_5->text(),ui->lineEdit_17->text(), ui->lineEdit_18->text(), ui->lineEdit_19->text() );
        QMessageBox::information(this, "Success", "Client Ajoutée");
        ui->stackedWidget->setCurrentIndex(0);
        C.Afficher(ui->tableWidget, ui->label_18);
    } catch (QString e) {
        QMessageBox::information(this, "Erreur", e);
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_10_clicked()
{
    Client C ;
    try {
        C.Supprimer(ui->lineEdit_10->text().toInt());
        QMessageBox::information(this, "Success", "Client Supprimée");
        ui->stackedWidget->setCurrentIndex(0);
        C.Afficher(ui->tableWidget, ui->label_18);
    } catch (QString e) {
        QMessageBox::information(this, "Erreur", e);
    }
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
    Client C ;
    try {
        C.Modifier(ui->lineEdit_4->text().toInt(), ui->lineEdit_6->text(), ui->lineEdit_7->text(), ui->lineEdit_8->text(), ui->lineEdit_20->text(), ui->lineEdit_21->text(), ui->lineEdit_22->text());
        QMessageBox::information(this, "Success", "Client Modifiée");
        ui->stackedWidget->setCurrentIndex(0);
        C.Afficher(ui->tableWidget, ui->label_18);
    } catch (QString e) {
        QMessageBox::information(this, "Erreur", e);
    }
}

void MainWindow::on_pushButton_12_clicked()
{
    QMediaPlayer * sound = new QMediaPlayer();
    sound->setMedia(QUrl("C:/Users/Khaled/Downloads/click.mp3"));
    sound->play();

    Carte_Fidelite C ;
    C.Afficher(ui->tableWidget_2, ui->label_20);
}

void MainWindow::on_pushButton_17_clicked()
{
    Carte_Fidelite C ;
    try {
        C.ajouter_carte(ui->lineEdit_12->text().toInt(), ui->lineEdit_13->text().toInt(), ui->lineEdit_16->text());
        QMessageBox::information(this, "Success", "Carte Ajoutée");
        ui->stackedWidget->setCurrentIndex(0);
        C.Afficher(ui->tableWidget_2, ui->label_20);
    } catch (QString e) {
        QMessageBox::information(this, "Erreur", e);
    }
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
    Carte_Fidelite C ;
    try {
        C.supprimer_carte(ui->lineEdit_14->text());
        QMessageBox::information(this, "Success", "Carte Supprimée");
        ui->stackedWidget->setCurrentIndex(0);
        C.Afficher(ui->tableWidget_2, ui->label_20);
    } catch (QString e) {
        QMessageBox::information(this, "Erreur", e);
    }
}

void MainWindow::on_pushButton_19_clicked()
{
    Carte_Fidelite C ;
    try {
        C.modifier_carte(ui->lineEdit_15->text().toInt(), ui->lineEdit_11->text());
        QMessageBox::information(this, "Success", "Carte Modifiée");
        ui->stackedWidget->setCurrentIndex(0);
        C.Afficher(ui->tableWidget_2, ui->label_20);
    } catch (QString e) {
        QMessageBox::information(this, "Erreur", e);
    }
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
    int checked = 0 ;
    Client C ;

    if(ui->radioButton_2->isChecked())
    {
        checked = 2 ;
    }
    else if (ui->radioButton->isChecked())
    {
        checked = 1 ;
    }
    else if (ui->radioButton_3->isChecked())
    {
        checked = 3 ;
    }

    C.tri(ui->tableWidget, checked) ;
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
    int column_checked = 0, checked_spot = 0 ;
    if(ui->radioButton_4->isChecked())
    {
        column_checked = 1 ;
    }
    else if (ui->radioButton_5->isChecked())
    {
        column_checked = 2 ;
    }
    else if (ui->radioButton_6->isChecked())
    {
        column_checked = 3 ;
    }

    if(ui->radioButton_7->isChecked())
    {
        checked_spot = 1 ;
    }
    else if (ui->radioButton_8->isChecked())
    {
        checked_spot = 2 ;
    }
    else if (ui->radioButton_9->isChecked())
    {
        checked_spot = 3 ;
    }

    Client C ;
    C.rech_avancee(ui->tableWidget, ui->lineEdit_9->text(), column_checked, checked_spot) ;
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_pushButton_29_clicked()
{
    Client C ;
    C.stat();
}

void MainWindow::on_comboBox_activated(const QString &arg1)
{
    if ( arg1 == "Food" )
        A.write_to_arduino("A");
    else if ( arg1 == "Office" )
        A.write_to_arduino("B");
    else if ( arg1 == "Electronics" )
        A.write_to_arduino("C");
}
