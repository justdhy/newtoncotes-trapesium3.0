#ifndef INTEGRASINUMERIK_H
#define INTEGRASINUMERIK_H

#include <string>
#include <vector>

// Struktur untuk menyimpan data per baris tabel
struct TableRow {
    int i;
    double xi;
    double fxi;
};

class IntegrasiNumerik {
public:
    IntegrasiNumerik();

    // Fungsi Utama Hitung
    void hitung(std::string rumus, double a, double b, double h);

    // Getters (Untuk diambil UI)
    double getHasil() const;
    int getN() const;
    double getSumTengah() const;
    double getSumUjung() const;
    std::vector<TableRow> getTableData() const;

private:
    double hasilAkhir;
    int n;
    double sumTengah;
    double sumUjung;
    std::vector<TableRow> tableData;
};

#endif // INTEGRASINUMERIK_H
