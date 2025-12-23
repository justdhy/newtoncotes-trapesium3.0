#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setStyleSheet(
        //background-darkmode
        "QMainWindow { background-color: #2b2b2b; }"
        "QWidget { color: #ffffff; font-family: 'Segoe UI'; font-size: 10pt; }"

        //button
        "QPushButton {"
        "   background-color: #3d85c6;"
        "   color: white;"
        "   border-radius: 5px;"
        "   padding: 10px 20px;"
        "   font-weight: bold;"
        "   font-size: 11pt;"
        "}"
        "QPushButton:hover { background-color: #5698d1; }"
        "QPushButton:pressed { background-color: #2a5e8f; }"

        //tombol kembali (atas)
        "QPushButton#pushButton_back {"
        "   padding: 5px 10px;"
        "   font-size: 14pt;"
        "   font-weight: 900;"
        "}"

        //warna input kolom
        "QLineEdit {"
        "   background-color: #3e3e3e;"
        "   color: #ffffff;"
        "   border: 1px solid #555;"
        "   border-radius: 4px;"
        "   padding: 5px;"
        "}"
        "QLineEdit:focus { border: 1px solid #3d85c6; }"

        //warna tabel
        "QTableWidget {"
        "   background-color: #3e3e3e;"
        "   color: #ffffff;"
        "   gridline-color: #555;"
        "   border: none;"
        "}"
        "QHeaderView::section {"
        "   background-color: #202020;"
        "   color: white;"
        "   padding: 5px;"
        "   border: 1px solid #555;"
        "}"

        //judul
        "QLabel#label_judul {"
        "   font-size: 22pt;"
        "   font-weight: bold;"
        "   color: #ffffff;"
        "   padding-bottom: 10px;"
        "   border-bottom: 3px solid #3d85c6;"
        "   margin-bottom: 15px;"
        "}"

        //error box
        "QMessageBox {"
        "   background-color: #2b2b2b;"
        "}"
        "QMessageBox QLabel {"
        "   color: #ffffff;"
        "}"

        //groupbox
        "QGroupBox {"
        "   border: 2px solid #555;"
        "   border-radius: 6px;"
        "   margin-top: 20px;"
        "   font-weight: bold;"
        "   color: #3d85c6;"
        "   font-size: 16pt;"
        "}"
        "QGroupBox::title {"
        "   subcontrol-origin: margin;"
        "   subcontrol-position: top center;"
        "   padding: 0 10px;"
        "   background-color: #2b2b2b;"
        "}"
    );

    MainWindow w;
    w.show();
    return a.exec();
}
