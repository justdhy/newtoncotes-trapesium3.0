#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tombol_Kalkulasi_clicked()
{
    MainWindow2 *w = new MainWindow2(); //pindah ke window input fungsi w2
    w->setAttribute(Qt::WA_DeleteOnClose);
    connect(w, &MainWindow2::backToMenu, this, &MainWindow::show);
    w->show();
    this->hide();
}

void MainWindow::on_tombol_Keluar_clicked()
{
    close();   // nutup aplikasi
}
