#include "mainwindow.h"
#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindow3.h"
#include "integrasinumerik.h"
#include "galat.h"
#include <QCloseEvent>
#include <QMessageBox>
#include <cmath>
#include <string>

//contsructor mainwindow2
MainWindow2::MainWindow2(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);

    //deklarasi mainwindow lain agar bisa pindah2
    mw1 = new MainWindow(this);
    mw3 = new MainWindow3(this);
    //sinyal mainwindow3 ke 2
    connect(mw3, &MainWindow3::backToInput, this, &MainWindow2::show);

    //agar tidak bisa diedit
    ui->lineEdit_hasilnumerik->setReadOnly(true);
    ui->lineEdit_hasilpias->setReadOnly(true);
    ui->lineEdit_galatrelatif->setReadOnly(true);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

//tombolhitung
void MainWindow2::on_pushButton_hitung_clicked()
{
    //input
    QString rumusQ = ui->inputFungsi->text();
    std::string rumus = rumusQ.toStdString();

    QString rumusExactQ = ui->inputAntiTurunan->text();
    std::string rumusExact = rumusExactQ.toStdString();

    bool okA, okB, okH;
    double a = ui->lineEdit_btsA->text().toDouble(&okA);
    double b = ui->lineEdit_btsB->text().toDouble(&okB);
    double h = ui->lineEdit_lebarpias->text().toDouble(&okH);

    //validasi input
    if (rumusQ.isEmpty() || !okA || !okB || !okH) {
        QMessageBox::warning(this, "Input Error", "Pastikan semua data (Fungsi, a, b, h) terisi dengan benar!");
        return;
    }
    if (h <= 0) {
        QMessageBox::warning(this, "Input Error", "Lebar pias (h) harus lebih besar dari 0!");
        return;
    } if (a >= b){
        QMessageBox::warning(this, "Input error", "Nilai a (batas bawah) harus lebih kecil daripada b (batas atas)!");
        return;
    }

    //validasi input specialcase nomor 4
    if (a == 0 && (rumusQ.contains("ln", Qt::CaseInsensitive))) {

        QMessageBox::critical(this, "Input Error",
                              "Tidak dapat menghitung fungsi ln apabila a bernilai 0");
        ui->lineEdit_hasilpias->setText("-");
        ui->lineEdit_hasilnumerik->setText("-");
        ui->lineEdit_galatrelatif->setText("-");
        mw3->hapusData();
        return;
    }

    //hitung_integrasinumerik
    IntegrasiNumerik integral;
    integral.hitung(rumus, a, b, h);

    //hitung_galat
    Galat errorCalc;
    errorCalc.hitung(rumusExact, a, b, integral.getHasil());

    ui->lineEdit_hasilpias->setText(QString::number(integral.getN()));
    ui->lineEdit_hasilnumerik->setText(QString::number(integral.getHasil(), 'f', 4));

    //munculkan hasil perhitungan galat
    if (errorCalc.isValid()) {
        ui->lineEdit_galatrelatif->setText(QString::number(errorCalc.getRelatif(), 'f', 4) + " %");
    } else {
        ui->lineEdit_galatrelatif->setText("-");
    }
    mw3->setValues(integral, errorCalc);
}

//tombol detail
void MainWindow2::on_pushButton_detail_clicked()
{
    mw3->show();
    // this->hide();
}

//fungsi tombol hapus
void MainWindow2::on_pushButton_hapus_clicked()
{
    ui->inputFungsi->clear();
    ui->lineEdit_btsA->clear();
    ui->lineEdit_btsB->clear();
    ui->lineEdit_lebarpias->clear();
    ui->lineEdit_galatrelatif->clear();
    ui->lineEdit_hasilnumerik->clear();
    ui->inputAntiTurunan->clear();
    ui->lineEdit_hasilpias->clear();

    //hapus hasil di mw3
    mw3->hapusData();

    ui->inputFungsi->setFocus();
}

void MainWindow2::on_pushButton_back_clicked()
{
    mw1->show();
    this->hide();
}

void MainWindow2::closeEvent(QCloseEvent *event)
{
    emit backToMenu();
    event->accept();
}
