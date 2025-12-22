/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *tombol_Kalkulasi;
    QPushButton *tombol_Keluar;
    QLabel *label_judul;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 1000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tombol_Kalkulasi = new QPushButton(centralwidget);
        tombol_Kalkulasi->setObjectName("tombol_Kalkulasi");
        tombol_Kalkulasi->setGeometry(QRect(370, 330, 240, 80));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        tombol_Kalkulasi->setFont(font);
        tombol_Keluar = new QPushButton(centralwidget);
        tombol_Keluar->setObjectName("tombol_Keluar");
        tombol_Keluar->setGeometry(QRect(370, 430, 240, 80));
        tombol_Keluar->setFont(font);
        label_judul = new QLabel(centralwidget);
        label_judul->setObjectName("label_judul");
        label_judul->setGeometry(QRect(70, 160, 861, 141));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        label_judul->setFont(font1);
        label_judul->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_judul->setWordWrap(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(780, 890, 211, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tombol_Kalkulasi->setText(QCoreApplication::translate("MainWindow", "KALKULASI", nullptr));
        tombol_Keluar->setText(QCoreApplication::translate("MainWindow", "KELUAR", nullptr));
        label_judul->setText(QCoreApplication::translate("MainWindow", "PROGRAM PERHITUNGAN NEWTON COTES: METODE TRAPESIUM", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Created by Yogi & Dhy (2025)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
