/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_hapus;
    QLabel *label_btsA;
    QPushButton *pushButton_hitung;
    QLabel *label_jumlahpias;
    QLabel *label_hasilintegrasi;
    QLineEdit *lineEdit_btsA;
    QLineEdit *lineEdit_btsB;
    QLineEdit *lineEdit_lebarpias;
    QLineEdit *lineEdit_hasilpias;
    QLineEdit *lineEdit_hasilnumerik;
    QPushButton *pushButton_back;
    QLabel *label_hasilintegrasi_2;
    QLineEdit *lineEdit_galatrelatif;
    QPushButton *pushButton_detail;
    QLabel *label_btsA_2;
    QLabel *label_btsA_3;
    QGroupBox *groupBox;
    QLabel *label_inputfungsi;
    QLineEdit *inputFungsi;
    QLabel *label_inputfungsi_2;
    QLineEdit *inputAntiTurunan;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName("MainWindow2");
        MainWindow2->resize(1000, 1000);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName("centralwidget");
        pushButton_hapus = new QPushButton(centralwidget);
        pushButton_hapus->setObjectName("pushButton_hapus");
        pushButton_hapus->setGeometry(QRect(240, 550, 210, 50));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        pushButton_hapus->setFont(font);
        label_btsA = new QLabel(centralwidget);
        label_btsA->setObjectName("label_btsA");
        label_btsA->setGeometry(QRect(190, 430, 21, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label_btsA->setFont(font1);
        pushButton_hitung = new QPushButton(centralwidget);
        pushButton_hitung->setObjectName("pushButton_hitung");
        pushButton_hitung->setGeometry(QRect(480, 550, 210, 50));
        pushButton_hitung->setFont(font);
        label_jumlahpias = new QLabel(centralwidget);
        label_jumlahpias->setObjectName("label_jumlahpias");
        label_jumlahpias->setGeometry(QRect(80, 720, 221, 50));
        label_jumlahpias->setFont(font);
        label_jumlahpias->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_hasilintegrasi = new QLabel(centralwidget);
        label_hasilintegrasi->setObjectName("label_hasilintegrasi");
        label_hasilintegrasi->setGeometry(QRect(370, 710, 221, 61));
        label_hasilintegrasi->setFont(font);
        label_hasilintegrasi->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_hasilintegrasi->setWordWrap(true);
        lineEdit_btsA = new QLineEdit(centralwidget);
        lineEdit_btsA->setObjectName("lineEdit_btsA");
        lineEdit_btsA->setGeometry(QRect(220, 430, 100, 30));
        lineEdit_btsB = new QLineEdit(centralwidget);
        lineEdit_btsB->setObjectName("lineEdit_btsB");
        lineEdit_btsB->setGeometry(QRect(440, 430, 100, 30));
        lineEdit_lebarpias = new QLineEdit(centralwidget);
        lineEdit_lebarpias->setObjectName("lineEdit_lebarpias");
        lineEdit_lebarpias->setGeometry(QRect(660, 430, 100, 30));
        lineEdit_hasilpias = new QLineEdit(centralwidget);
        lineEdit_hasilpias->setObjectName("lineEdit_hasilpias");
        lineEdit_hasilpias->setGeometry(QRect(80, 780, 220, 40));
        lineEdit_hasilnumerik = new QLineEdit(centralwidget);
        lineEdit_hasilnumerik->setObjectName("lineEdit_hasilnumerik");
        lineEdit_hasilnumerik->setGeometry(QRect(370, 780, 220, 40));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(36, 36, 30, 30));
        QFont font2;
        font2.setBold(true);
        pushButton_back->setFont(font2);
        label_hasilintegrasi_2 = new QLabel(centralwidget);
        label_hasilintegrasi_2->setObjectName("label_hasilintegrasi_2");
        label_hasilintegrasi_2->setGeometry(QRect(680, 720, 221, 50));
        label_hasilintegrasi_2->setFont(font);
        label_hasilintegrasi_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_galatrelatif = new QLineEdit(centralwidget);
        lineEdit_galatrelatif->setObjectName("lineEdit_galatrelatif");
        lineEdit_galatrelatif->setGeometry(QRect(680, 780, 220, 40));
        pushButton_detail = new QPushButton(centralwidget);
        pushButton_detail->setObjectName("pushButton_detail");
        pushButton_detail->setGeometry(QRect(380, 870, 210, 50));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        pushButton_detail->setFont(font3);
        label_btsA_2 = new QLabel(centralwidget);
        label_btsA_2->setObjectName("label_btsA_2");
        label_btsA_2->setGeometry(QRect(410, 430, 21, 31));
        label_btsA_2->setFont(font1);
        label_btsA_3 = new QLabel(centralwidget);
        label_btsA_3->setObjectName("label_btsA_3");
        label_btsA_3->setGeometry(QRect(630, 430, 21, 31));
        label_btsA_3->setFont(font1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(150, 90, 671, 161));
        label_inputfungsi = new QLabel(groupBox);
        label_inputfungsi->setObjectName("label_inputfungsi");
        label_inputfungsi->setGeometry(QRect(30, 30, 210, 50));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        label_inputfungsi->setFont(font4);
        label_inputfungsi->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        inputFungsi = new QLineEdit(groupBox);
        inputFungsi->setObjectName("inputFungsi");
        inputFungsi->setGeometry(QRect(250, 40, 350, 40));
        QFont font5;
        font5.setPointSize(13);
        inputFungsi->setFont(font5);
        label_inputfungsi_2 = new QLabel(groupBox);
        label_inputfungsi_2->setObjectName("label_inputfungsi_2");
        label_inputfungsi_2->setGeometry(QRect(30, 90, 210, 50));
        label_inputfungsi_2->setFont(font4);
        label_inputfungsi_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        inputAntiTurunan = new QLineEdit(groupBox);
        inputAntiTurunan->setObjectName("inputAntiTurunan");
        inputAntiTurunan->setGeometry(QRect(250, 100, 350, 40));
        inputAntiTurunan->setFont(font5);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(170, 360, 631, 171));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(70, 680, 881, 181));
        MainWindow2->setCentralWidget(centralwidget);
        groupBox_3->raise();
        groupBox_2->raise();
        pushButton_hapus->raise();
        label_btsA->raise();
        pushButton_hitung->raise();
        label_jumlahpias->raise();
        label_hasilintegrasi->raise();
        lineEdit_btsA->raise();
        lineEdit_btsB->raise();
        lineEdit_lebarpias->raise();
        lineEdit_hasilpias->raise();
        lineEdit_hasilnumerik->raise();
        pushButton_back->raise();
        label_hasilintegrasi_2->raise();
        lineEdit_galatrelatif->raise();
        pushButton_detail->raise();
        label_btsA_2->raise();
        label_btsA_3->raise();
        groupBox->raise();
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName("statusbar");
        MainWindow2->setStatusBar(statusbar);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QCoreApplication::translate("MainWindow2", "MainWindow", nullptr));
        pushButton_hapus->setText(QCoreApplication::translate("MainWindow2", "HAPUS", nullptr));
        label_btsA->setText(QCoreApplication::translate("MainWindow2", "a", nullptr));
        pushButton_hitung->setText(QCoreApplication::translate("MainWindow2", "HITUNG HASIL", nullptr));
        label_jumlahpias->setText(QCoreApplication::translate("MainWindow2", "JUMLAH PIAS", nullptr));
        label_hasilintegrasi->setText(QCoreApplication::translate("MainWindow2", "HASIL INTEGRASI NUMERIK", nullptr));
        pushButton_back->setText(QCoreApplication::translate("MainWindow2", "<", nullptr));
        label_hasilintegrasi_2->setText(QCoreApplication::translate("MainWindow2", "GALAT RELATIF", nullptr));
        pushButton_detail->setText(QCoreApplication::translate("MainWindow2", "LIHAT DETAIL", nullptr));
        label_btsA_2->setText(QCoreApplication::translate("MainWindow2", "b", nullptr));
        label_btsA_3->setText(QCoreApplication::translate("MainWindow2", "h", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow2", "Definisi Fungsi", nullptr));
        label_inputfungsi->setText(QCoreApplication::translate("MainWindow2", "Input Fungsi", nullptr));
        inputFungsi->setText(QString());
        label_inputfungsi_2->setText(QCoreApplication::translate("MainWindow2", "Antiturunan", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow2", "Parameter Integrasi", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow2", "Hasil Perhitungan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
