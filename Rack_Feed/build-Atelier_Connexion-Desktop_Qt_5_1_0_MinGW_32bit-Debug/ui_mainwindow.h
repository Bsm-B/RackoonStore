/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *reclamation;
    QTabWidget *tabWidget_2;
    QWidget *RAJOUTER;
    QLabel *label_Rnom;
    QLabel *label_Rprenom;
    QLabel *label_Radresse;
    QLabel *label_Rtype;
    QLineEdit *lineEdit_Rnom;
    QLineEdit *lineEdit_Rprenom;
    QLineEdit *lineEdit_Radresse;
    QComboBox *comboBox_Rtype;
    QLineEdit *lineEdit_Rcontenu;
    QPushButton *pushButtonR;
    QLineEdit *lineEdit_Rid;
    QLabel *label_Rid;
    QWidget *RAFFICHER;
    QTableView *tabreclamation;
    QWidget *RSUPPRIMER;
    QLineEdit *lineEdit_id;
    QLabel *label_identifiant;
    QPushButton *pb_supprimer;
    QGroupBox *OFFRE;
    QTabWidget *tabWidget_3;
    QWidget *OAJOUTER;
    QLabel *label_Otitre;
    QLabel *label_Otype;
    QLabel *label_Oprix;
    QLabel *label_Oreduction;
    QLineEdit *lineEdit_Otitre;
    QLineEdit *lineEdit_Oprix;
    QPushButton *pushButton_O;
    QLineEdit *lineEdit_Oid_3;
    QLabel *label_Oid;
    QLabel *label_Odatedeb;
    QLabel *label_Odatefin;
    QLineEdit *lineEdit_Oreduction;
    QLineEdit *lineEdit_Odatedeb;
    QLineEdit *lineEdit_Odatefin;
    QComboBox *comboBox;
    QWidget *OAFFICHER;
    QTableView *taboffre;
    QWidget *OSUPPRIMER;
    QLineEdit *lineEdit_Oid_5;
    QLabel *label_Oidentifiant;
    QPushButton *pb_Osupprimer;
    QGroupBox *OFFRE_2;
    QTabWidget *tabWidget_4;
    QWidget *OAJOUTER_2;
    QWidget *OAFFICHER_2;
    QTableView *tabavis;
    QWidget *OSUPPRIMER_2;
    QLineEdit *lineEdit_Oid_4;
    QLabel *label_Oidentifiant_2;
    QPushButton *pb_Osupprimer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(898, 495);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        reclamation = new QGroupBox(centralWidget);
        reclamation->setObjectName(QStringLiteral("reclamation"));
        reclamation->setGeometry(QRect(10, 10, 271, 421));
        tabWidget_2 = new QTabWidget(reclamation);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 20, 251, 391));
        RAJOUTER = new QWidget();
        RAJOUTER->setObjectName(QStringLiteral("RAJOUTER"));
        label_Rnom = new QLabel(RAJOUTER);
        label_Rnom->setObjectName(QStringLiteral("label_Rnom"));
        label_Rnom->setGeometry(QRect(20, 50, 47, 13));
        label_Rprenom = new QLabel(RAJOUTER);
        label_Rprenom->setObjectName(QStringLiteral("label_Rprenom"));
        label_Rprenom->setGeometry(QRect(20, 80, 47, 13));
        label_Radresse = new QLabel(RAJOUTER);
        label_Radresse->setObjectName(QStringLiteral("label_Radresse"));
        label_Radresse->setGeometry(QRect(20, 120, 47, 13));
        label_Rtype = new QLabel(RAJOUTER);
        label_Rtype->setObjectName(QStringLiteral("label_Rtype"));
        label_Rtype->setGeometry(QRect(20, 170, 47, 13));
        lineEdit_Rnom = new QLineEdit(RAJOUTER);
        lineEdit_Rnom->setObjectName(QStringLiteral("lineEdit_Rnom"));
        lineEdit_Rnom->setGeometry(QRect(110, 50, 113, 20));
        lineEdit_Rprenom = new QLineEdit(RAJOUTER);
        lineEdit_Rprenom->setObjectName(QStringLiteral("lineEdit_Rprenom"));
        lineEdit_Rprenom->setGeometry(QRect(110, 80, 113, 20));
        lineEdit_Radresse = new QLineEdit(RAJOUTER);
        lineEdit_Radresse->setObjectName(QStringLiteral("lineEdit_Radresse"));
        lineEdit_Radresse->setGeometry(QRect(110, 110, 113, 20));
        comboBox_Rtype = new QComboBox(RAJOUTER);
        comboBox_Rtype->setObjectName(QStringLiteral("comboBox_Rtype"));
        comboBox_Rtype->setGeometry(QRect(110, 160, 111, 22));
        lineEdit_Rcontenu = new QLineEdit(RAJOUTER);
        lineEdit_Rcontenu->setObjectName(QStringLiteral("lineEdit_Rcontenu"));
        lineEdit_Rcontenu->setGeometry(QRect(40, 210, 171, 91));
        pushButtonR = new QPushButton(RAJOUTER);
        pushButtonR->setObjectName(QStringLiteral("pushButtonR"));
        pushButtonR->setGeometry(QRect(50, 310, 151, 21));
        lineEdit_Rid = new QLineEdit(RAJOUTER);
        lineEdit_Rid->setObjectName(QStringLiteral("lineEdit_Rid"));
        lineEdit_Rid->setGeometry(QRect(110, 20, 113, 20));
        label_Rid = new QLabel(RAJOUTER);
        label_Rid->setObjectName(QStringLiteral("label_Rid"));
        label_Rid->setGeometry(QRect(20, 20, 47, 13));
        tabWidget_2->addTab(RAJOUTER, QString());
        RAFFICHER = new QWidget();
        RAFFICHER->setObjectName(QStringLiteral("RAFFICHER"));
        tabreclamation = new QTableView(RAFFICHER);
        tabreclamation->setObjectName(QStringLiteral("tabreclamation"));
        tabreclamation->setGeometry(QRect(10, 10, 221, 341));
        tabWidget_2->addTab(RAFFICHER, QString());
        RSUPPRIMER = new QWidget();
        RSUPPRIMER->setObjectName(QStringLiteral("RSUPPRIMER"));
        lineEdit_id = new QLineEdit(RSUPPRIMER);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(100, 30, 113, 20));
        label_identifiant = new QLabel(RSUPPRIMER);
        label_identifiant->setObjectName(QStringLiteral("label_identifiant"));
        label_identifiant->setGeometry(QRect(20, 30, 61, 16));
        pb_supprimer = new QPushButton(RSUPPRIMER);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(140, 120, 75, 23));
        tabWidget_2->addTab(RSUPPRIMER, QString());
        OFFRE = new QGroupBox(centralWidget);
        OFFRE->setObjectName(QStringLiteral("OFFRE"));
        OFFRE->setGeometry(QRect(300, 10, 271, 421));
        tabWidget_3 = new QTabWidget(OFFRE);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 20, 251, 391));
        OAJOUTER = new QWidget();
        OAJOUTER->setObjectName(QStringLiteral("OAJOUTER"));
        label_Otitre = new QLabel(OAJOUTER);
        label_Otitre->setObjectName(QStringLiteral("label_Otitre"));
        label_Otitre->setGeometry(QRect(20, 90, 47, 13));
        label_Otype = new QLabel(OAJOUTER);
        label_Otype->setObjectName(QStringLiteral("label_Otype"));
        label_Otype->setGeometry(QRect(20, 60, 47, 13));
        label_Oprix = new QLabel(OAJOUTER);
        label_Oprix->setObjectName(QStringLiteral("label_Oprix"));
        label_Oprix->setGeometry(QRect(20, 130, 47, 13));
        label_Oreduction = new QLabel(OAJOUTER);
        label_Oreduction->setObjectName(QStringLiteral("label_Oreduction"));
        label_Oreduction->setGeometry(QRect(20, 180, 61, 16));
        lineEdit_Otitre = new QLineEdit(OAJOUTER);
        lineEdit_Otitre->setObjectName(QStringLiteral("lineEdit_Otitre"));
        lineEdit_Otitre->setGeometry(QRect(110, 90, 113, 20));
        lineEdit_Oprix = new QLineEdit(OAJOUTER);
        lineEdit_Oprix->setObjectName(QStringLiteral("lineEdit_Oprix"));
        lineEdit_Oprix->setGeometry(QRect(110, 130, 113, 20));
        pushButton_O = new QPushButton(OAJOUTER);
        pushButton_O->setObjectName(QStringLiteral("pushButton_O"));
        pushButton_O->setGeometry(QRect(50, 310, 151, 21));
        lineEdit_Oid_3 = new QLineEdit(OAJOUTER);
        lineEdit_Oid_3->setObjectName(QStringLiteral("lineEdit_Oid_3"));
        lineEdit_Oid_3->setGeometry(QRect(110, 20, 113, 20));
        label_Oid = new QLabel(OAJOUTER);
        label_Oid->setObjectName(QStringLiteral("label_Oid"));
        label_Oid->setGeometry(QRect(20, 20, 47, 13));
        label_Odatedeb = new QLabel(OAJOUTER);
        label_Odatedeb->setObjectName(QStringLiteral("label_Odatedeb"));
        label_Odatedeb->setGeometry(QRect(20, 220, 47, 13));
        label_Odatefin = new QLabel(OAJOUTER);
        label_Odatefin->setObjectName(QStringLiteral("label_Odatefin"));
        label_Odatefin->setGeometry(QRect(20, 260, 47, 13));
        lineEdit_Oreduction = new QLineEdit(OAJOUTER);
        lineEdit_Oreduction->setObjectName(QStringLiteral("lineEdit_Oreduction"));
        lineEdit_Oreduction->setGeometry(QRect(110, 180, 113, 20));
        lineEdit_Odatedeb = new QLineEdit(OAJOUTER);
        lineEdit_Odatedeb->setObjectName(QStringLiteral("lineEdit_Odatedeb"));
        lineEdit_Odatedeb->setGeometry(QRect(110, 220, 113, 20));
        lineEdit_Odatefin = new QLineEdit(OAJOUTER);
        lineEdit_Odatefin->setObjectName(QStringLiteral("lineEdit_Odatefin"));
        lineEdit_Odatefin->setGeometry(QRect(110, 260, 113, 20));
        comboBox = new QComboBox(OAJOUTER);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 50, 111, 22));
        tabWidget_3->addTab(OAJOUTER, QString());
        OAFFICHER = new QWidget();
        OAFFICHER->setObjectName(QStringLiteral("OAFFICHER"));
        taboffre = new QTableView(OAFFICHER);
        taboffre->setObjectName(QStringLiteral("taboffre"));
        taboffre->setGeometry(QRect(10, 10, 221, 341));
        tabWidget_3->addTab(OAFFICHER, QString());
        OSUPPRIMER = new QWidget();
        OSUPPRIMER->setObjectName(QStringLiteral("OSUPPRIMER"));
        lineEdit_Oid_5 = new QLineEdit(OSUPPRIMER);
        lineEdit_Oid_5->setObjectName(QStringLiteral("lineEdit_Oid_5"));
        lineEdit_Oid_5->setGeometry(QRect(100, 30, 113, 20));
        label_Oidentifiant = new QLabel(OSUPPRIMER);
        label_Oidentifiant->setObjectName(QStringLiteral("label_Oidentifiant"));
        label_Oidentifiant->setGeometry(QRect(20, 30, 61, 16));
        pb_Osupprimer = new QPushButton(OSUPPRIMER);
        pb_Osupprimer->setObjectName(QStringLiteral("pb_Osupprimer"));
        pb_Osupprimer->setGeometry(QRect(140, 120, 75, 23));
        tabWidget_3->addTab(OSUPPRIMER, QString());
        OFFRE_2 = new QGroupBox(centralWidget);
        OFFRE_2->setObjectName(QStringLiteral("OFFRE_2"));
        OFFRE_2->setGeometry(QRect(580, 10, 271, 421));
        tabWidget_4 = new QTabWidget(OFFRE_2);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 20, 251, 391));
        OAJOUTER_2 = new QWidget();
        OAJOUTER_2->setObjectName(QStringLiteral("OAJOUTER_2"));
        tabWidget_4->addTab(OAJOUTER_2, QString());
        OAFFICHER_2 = new QWidget();
        OAFFICHER_2->setObjectName(QStringLiteral("OAFFICHER_2"));
        tabavis = new QTableView(OAFFICHER_2);
        tabavis->setObjectName(QStringLiteral("tabavis"));
        tabavis->setGeometry(QRect(10, 10, 221, 341));
        tabWidget_4->addTab(OAFFICHER_2, QString());
        OSUPPRIMER_2 = new QWidget();
        OSUPPRIMER_2->setObjectName(QStringLiteral("OSUPPRIMER_2"));
        lineEdit_Oid_4 = new QLineEdit(OSUPPRIMER_2);
        lineEdit_Oid_4->setObjectName(QStringLiteral("lineEdit_Oid_4"));
        lineEdit_Oid_4->setGeometry(QRect(100, 30, 113, 20));
        label_Oidentifiant_2 = new QLabel(OSUPPRIMER_2);
        label_Oidentifiant_2->setObjectName(QStringLiteral("label_Oidentifiant_2"));
        label_Oidentifiant_2->setGeometry(QRect(20, 30, 61, 16));
        pb_Osupprimer_2 = new QPushButton(OSUPPRIMER_2);
        pb_Osupprimer_2->setObjectName(QStringLiteral("pb_Osupprimer_2"));
        pb_Osupprimer_2->setGeometry(QRect(140, 120, 75, 23));
        tabWidget_4->addTab(OSUPPRIMER_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 898, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", 0));
        reclamation->setTitle(QApplication::translate("MainWindow", "RECLAMATION", 0));
        label_Rnom->setText(QApplication::translate("MainWindow", "NOM", 0));
        label_Rprenom->setText(QApplication::translate("MainWindow", "PRENOM", 0));
        label_Radresse->setText(QApplication::translate("MainWindow", "ADRESSE", 0));
        label_Rtype->setText(QApplication::translate("MainWindow", "TYPE", 0));
        comboBox_Rtype->clear();
        comboBox_Rtype->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CHOISIR TYPE () :", 0)
         << QApplication::translate("MainWindow", "BONNE ANNEE", 0)
         << QApplication::translate("MainWindow", "REMERCIMENT", 0)
         << QApplication::translate("MainWindow", "ANNIVERSAIRE", 0)
         << QApplication::translate("MainWindow", "EXPLICATION", 0)
         << QApplication::translate("MainWindow", "EXCUSE", 0)
        );
        pushButtonR->setText(QApplication::translate("MainWindow", "envoyer", 0));
        label_Rid->setText(QApplication::translate("MainWindow", "ID", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(RAJOUTER), QApplication::translate("MainWindow", "Ajouter", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(RAFFICHER), QApplication::translate("MainWindow", "Afficher", 0));
        label_identifiant->setText(QApplication::translate("MainWindow", "Identifiant", 0));
        pb_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(RSUPPRIMER), QApplication::translate("MainWindow", "Supprimer", 0));
        OFFRE->setTitle(QApplication::translate("MainWindow", "OFFRE", 0));
        label_Otitre->setText(QApplication::translate("MainWindow", "TITRE", 0));
        label_Otype->setText(QApplication::translate("MainWindow", "TYPE", 0));
        label_Oprix->setText(QApplication::translate("MainWindow", "PRIX", 0));
        label_Oreduction->setText(QApplication::translate("MainWindow", "REDUCTION", 0));
        pushButton_O->setText(QApplication::translate("MainWindow", "envoyer", 0));
        label_Oid->setText(QApplication::translate("MainWindow", "ID", 0));
        label_Odatedeb->setText(QApplication::translate("MainWindow", "DATE DEBUT", 0));
        label_Odatefin->setText(QApplication::translate("MainWindow", "DATE FIN", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "choisir type() :", 0)
         << QApplication::translate("MainWindow", "jouets", 0)
         << QApplication::translate("MainWindow", "vetement", 0)
         << QApplication::translate("MainWindow", "hightech", 0)
        );
        tabWidget_3->setTabText(tabWidget_3->indexOf(OAJOUTER), QApplication::translate("MainWindow", "Ajouter", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(OAFFICHER), QApplication::translate("MainWindow", "Afficher", 0));
        label_Oidentifiant->setText(QApplication::translate("MainWindow", "Identifiant", 0));
        pb_Osupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(OSUPPRIMER), QApplication::translate("MainWindow", "Supprimer", 0));
        OFFRE_2->setTitle(QApplication::translate("MainWindow", "AVIS", 0));
        tabWidget_4->setTabText(tabWidget_4->indexOf(OAJOUTER_2), QApplication::translate("MainWindow", "Ajouter", 0));
        tabWidget_4->setTabText(tabWidget_4->indexOf(OAFFICHER_2), QApplication::translate("MainWindow", "Afficher", 0));
        label_Oidentifiant_2->setText(QApplication::translate("MainWindow", "Identifiant", 0));
        pb_Osupprimer_2->setText(QApplication::translate("MainWindow", "Supprimer", 0));
        tabWidget_4->setTabText(tabWidget_4->indexOf(OSUPPRIMER_2), QApplication::translate("MainWindow", "Supprimer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
