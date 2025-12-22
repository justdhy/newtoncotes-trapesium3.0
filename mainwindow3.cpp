#include "mainwindow3.h"
#include "ui_mainwindow3.h"
#include <cmath>

MainWindow3::MainWindow3(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow3)
{
    ui->setupUi(this);

    //tabel iterasi
    ui->tableWidget_iterasi->setColumnCount(3);
    QStringList headers;
    headers << "i" << "xi" << "f(xi)";
    ui->tableWidget_iterasi->setHorizontalHeaderLabels(headers);
    ui->tableWidget_iterasi->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //readonly linedit
    ui->lineEdit_sigmaf1fn->setReadOnly(true);
    ui->lineEdit_f0fn->setReadOnly(true);
    ui->lineEdit_hasilnumerik->setReadOnly(true);
    ui->lineEdit_galatexact->setReadOnly(true);
    ui->lineEdit_galatabs->setReadOnly(true);
    ui->lineEdit_galatrelatif->setReadOnly(true);
}

MainWindow3::~MainWindow3()
{
    delete ui;
}

void MainWindow3::setValues(const IntegrasiNumerik &dataIntegral, const Galat &dataGalat)
{
    //tabel iterasi
    std::vector<TableRow> tabel = dataIntegral.getTableData();
    ui->tableWidget_iterasi->setRowCount(0);

    for(const auto &row : tabel) {
        int r = ui->tableWidget_iterasi->rowCount();
        ui->tableWidget_iterasi->insertRow(r);
        ui->tableWidget_iterasi->setItem(r, 0, new QTableWidgetItem(QString::number(row.i)));
        ui->tableWidget_iterasi->setItem(r, 1, new QTableWidgetItem(QString::number(row.xi, 'f', 4)));
        ui->tableWidget_iterasi->setItem(r, 2, new QTableWidgetItem(QString::number(row.fxi, 'f', 4)));
    }

    //hasil sum tengah dan ujung
    ui->lineEdit_sigmaf1fn->setText(QString::number(dataIntegral.getSumTengah(), 'f', 4));
    ui->lineEdit_f0fn->setText(QString::number(dataIntegral.getSumUjung(), 'f', 4));
    ui->lineEdit_hasilnumerik->setText(QString::number(dataIntegral.getHasil(), 'f', 4));

    //menampilkan hasil galat
    if (dataGalat.isValid()) {
        ui->lineEdit_galatexact->setText(QString::number(dataGalat.getExact(), 'f', 4));
        ui->lineEdit_galatabs->setText(QString::number(dataGalat.getAbsolut(), 'f', 4));
        ui->lineEdit_galatrelatif->setText(QString::number(dataGalat.getRelatif(), 'f', 4) + " %");
    } else {
        ui->lineEdit_galatexact->setText("-");
        ui->lineEdit_galatabs->setText("-");
        ui->lineEdit_galatrelatif->setText("-");
    }
}

void MainWindow3::on_pushButton_back_clicked()
{
    emit backToInput();
    this->close();
}

void MainWindow3::hapusData()
{
    //hapus isi tabel
    ui->tableWidget_iterasi->setRowCount(0);

    //hapus isi lineedit semua
    ui->lineEdit_sigmaf1fn->clear();
    ui->lineEdit_f0fn->clear();
    ui->lineEdit_hasilnumerik->clear();
    ui->lineEdit_galatexact->clear();
    ui->lineEdit_galatabs->clear();
    ui->lineEdit_galatrelatif->clear();
}

