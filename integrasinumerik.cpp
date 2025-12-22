#include "integrasinumerik.h"
#include "mathparser.h"
#include <cmath>

IntegrasiNumerik::IntegrasiNumerik() {
    hasilAkhir = 0;
    n = 0;
    sumTengah = 0; //sum (f1 - fn-1)
    sumUjung = 0; //(f0 + fn)
}

void IntegrasiNumerik::hitung(std::string rumus, double a, double b, double h) {
    MathParser parser;
    tableData.clear();

    // jumlah pias
    n = round((b - a) / h);

    sumTengah = 0;
    sumUjung = 0;

    // iterasi dan hitung sigma
    for (int i = 0; i <= n; i++) {
        double xi = a + (i * h);
        double fxi = parser.evaluate(rumus, xi);

        // tabel iterasi
        tableData.push_back({i, xi, fxi});

        // Logika Trapesium
        if (i == 0 || i == n) {
            sumUjung += fxi;
        } else {
            sumTengah += fxi;
        }
    }

    // Hitung Hasil Akhir
    hasilAkhir = (h / 2) * (sumUjung + (2 * sumTengah));
}

double IntegrasiNumerik::getHasil() const
{
    return hasilAkhir;
}
int IntegrasiNumerik::getN() const
{
    return n;
}
double IntegrasiNumerik::getSumTengah() const
{
    return sumTengah;
}
double IntegrasiNumerik::getSumUjung() const
{
    return sumUjung;
}
std::vector<TableRow> IntegrasiNumerik::getTableData() const
{
    return tableData;
}
