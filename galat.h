#ifndef GALAT_H
#define GALAT_H

#include <string>

class Galat {
public:
    Galat();

    // Fungsi hitung perbandingan exact vs numerik
    void hitung(std::string rumusExact, double a, double b, double hasilNumerik);

    // Getters
    double getExact() const;
    double getAbsolut() const;
    double getRelatif() const;
    bool isValid() const; //cek antiturunan (ada atau tidak)

private:
    double nilaiExact;
    double galatAbsolut;
    double galatRelatif;
    bool valid;
};

#endif // GALAT_H
