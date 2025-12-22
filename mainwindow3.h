#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H

#include <QMainWindow>
#include "integrasinumerik.h"
#include "galat.h"

namespace Ui {
class MainWindow3;
}

class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3(QWidget *parent = nullptr);
    ~MainWindow3();

    void setValues(const IntegrasiNumerik &dataIntegral, const Galat &dataGalat);
    //hapus isi tabel dan seluruh hasil perhitungan
    void hapusData();

signals: //balik ke mainwindow2
    void backToInput();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::MainWindow3 *ui;
};

#endif // MAINWINDOW3_H
