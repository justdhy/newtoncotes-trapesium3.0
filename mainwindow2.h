#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include "mainwindow3.h"
#include "mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow2;
}
QT_END_NAMESPACE

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

signals:
    void backToMenu();

protected:
    void closeEvent(QCloseEvent *event) override;


private slots:
    void on_pushButton_hitung_clicked(); //fungsi tombol hitung
    void on_pushButton_hapus_clicked(); //tombol hapus
    void on_pushButton_detail_clicked(); //lanjut halaman detail (mw3)
    void on_pushButton_back_clicked(); //balik ke halaman awal (mw)

private:
    Ui::MainWindow2 *ui;
    MainWindow3 *mw3;
    MainWindow *mw1;
};

#endif
