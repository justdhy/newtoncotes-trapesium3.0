/********************************************************************************
** Form generated from reading UI file 'mainwindow3.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW3_H
#define UI_MAINWINDOW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow3
{
public:
    QWidget *centralwidget;
    QLabel *label_hasilnumerik;
    QLineEdit *lineEdit_f0fn;
    QPushButton *pushButton_back;
    QLineEdit *lineEdit_galatabs;
    QTableWidget *tableWidget_iterasi;
    QLabel *label_galatexact;
    QLabel *label_galatabs;
    QLabel *label_sigmaf1fn;
    QLineEdit *lineEdit_galatexact;
    QLineEdit *lineEdit_hasilnumerik;
    QLineEdit *lineEdit_galatrelatif;
    QLabel *label_f0fn;
    QLineEdit *lineEdit_sigmaf1fn;
    QLabel *label_galatrelatif;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow3)
    {
        if (MainWindow3->objectName().isEmpty())
            MainWindow3->setObjectName("MainWindow3");
        MainWindow3->resize(1000, 1000);
        centralwidget = new QWidget(MainWindow3);
        centralwidget->setObjectName("centralwidget");
        label_hasilnumerik = new QLabel(centralwidget);
        label_hasilnumerik->setObjectName("label_hasilnumerik");
        label_hasilnumerik->setGeometry(QRect(100, 800, 281, 81));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label_hasilnumerik->setFont(font);
        label_hasilnumerik->setTextFormat(Qt::TextFormat::PlainText);
        label_hasilnumerik->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_hasilnumerik->setWordWrap(true);
        lineEdit_f0fn = new QLineEdit(centralwidget);
        lineEdit_f0fn->setObjectName("lineEdit_f0fn");
        lineEdit_f0fn->setGeometry(QRect(260, 740, 110, 40));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(30, 30, 36, 36));
        QFont font1;
        font1.setBold(true);
        pushButton_back->setFont(font1);
        lineEdit_galatabs = new QLineEdit(centralwidget);
        lineEdit_galatabs->setObjectName("lineEdit_galatabs");
        lineEdit_galatabs->setGeometry(QRect(750, 740, 120, 40));
        tableWidget_iterasi = new QTableWidget(centralwidget);
        if (tableWidget_iterasi->columnCount() < 3)
            tableWidget_iterasi->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_iterasi->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_iterasi->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_iterasi->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_iterasi->setObjectName("tableWidget_iterasi");
        tableWidget_iterasi->setGeometry(QRect(100, 200, 800, 441));
        label_galatexact = new QLabel(centralwidget);
        label_galatexact->setObjectName("label_galatexact");
        label_galatexact->setGeometry(QRect(590, 680, 150, 40));
        label_galatexact->setFont(font);
        label_galatabs = new QLabel(centralwidget);
        label_galatabs->setObjectName("label_galatabs");
        label_galatabs->setGeometry(QRect(590, 740, 150, 40));
        label_galatabs->setFont(font);
        label_sigmaf1fn = new QLabel(centralwidget);
        label_sigmaf1fn->setObjectName("label_sigmaf1fn");
        label_sigmaf1fn->setGeometry(QRect(110, 680, 150, 40));
        label_sigmaf1fn->setFont(font);
        lineEdit_galatexact = new QLineEdit(centralwidget);
        lineEdit_galatexact->setObjectName("lineEdit_galatexact");
        lineEdit_galatexact->setGeometry(QRect(750, 680, 120, 40));
        lineEdit_hasilnumerik = new QLineEdit(centralwidget);
        lineEdit_hasilnumerik->setObjectName("lineEdit_hasilnumerik");
        lineEdit_hasilnumerik->setGeometry(QRect(109, 860, 261, 51));
        lineEdit_galatrelatif = new QLineEdit(centralwidget);
        lineEdit_galatrelatif->setObjectName("lineEdit_galatrelatif");
        lineEdit_galatrelatif->setGeometry(QRect(750, 800, 120, 40));
        label_f0fn = new QLabel(centralwidget);
        label_f0fn->setObjectName("label_f0fn");
        label_f0fn->setGeometry(QRect(110, 740, 150, 40));
        label_f0fn->setFont(font);
        lineEdit_sigmaf1fn = new QLineEdit(centralwidget);
        lineEdit_sigmaf1fn->setObjectName("lineEdit_sigmaf1fn");
        lineEdit_sigmaf1fn->setGeometry(QRect(260, 680, 110, 40));
        label_galatrelatif = new QLabel(centralwidget);
        label_galatrelatif->setObjectName("label_galatrelatif");
        label_galatrelatif->setGeometry(QRect(590, 800, 150, 40));
        label_galatrelatif->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 130, 1001, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 10, 680, 100));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        label->setFont(font3);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 100, 1001, 51));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow3);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow3->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow3);
        statusbar->setObjectName("statusbar");
        MainWindow3->setStatusBar(statusbar);

        retranslateUi(MainWindow3);

        QMetaObject::connectSlotsByName(MainWindow3);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow3)
    {
        MainWindow3->setWindowTitle(QCoreApplication::translate("MainWindow3", "MainWindow", nullptr));
        label_hasilnumerik->setText(QCoreApplication::translate("MainWindow3", "Hasil Integrasi Numerik", nullptr));
        pushButton_back->setText(QCoreApplication::translate("MainWindow3", "<", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_iterasi->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow3", "i", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_iterasi->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow3", "xi", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_iterasi->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow3", "f(xi)", nullptr));
        label_galatexact->setText(QCoreApplication::translate("MainWindow3", "Galat Exact", nullptr));
        label_galatabs->setText(QCoreApplication::translate("MainWindow3", "Galat Abslut", nullptr));
        label_sigmaf1fn->setText(QCoreApplication::translate("MainWindow3", "\316\243F1 + Fn-1", nullptr));
        label_f0fn->setText(QCoreApplication::translate("MainWindow3", "F0 + Fn", nullptr));
        label_galatrelatif->setText(QCoreApplication::translate("MainWindow3", "Galat Relatif", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow3", "I Nyoman Yogi Putra Arthawan (2415101060)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow3", "PROGRAM PERHITUNGAN NEWTON COTES: METODE TRAPESIUM", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow3", "I Gede Nyoman Arya Adi Prima Merta (2415101024)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow3: public Ui_MainWindow3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW3_H
