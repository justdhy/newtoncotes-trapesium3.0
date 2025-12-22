#include "galat.h"
#include "mathparser.h"
#include <cmath>

Galat::Galat() {
    valid = false;
    nilaiExact = 0;
    galatAbsolut = 0;
    galatRelatif = 0;
}

void Galat::hitung(std::string rumusExact, double a, double b, double hasilNumerik) {
    if (rumusExact.empty()) {
        valid = false;
        return;
    }

    MathParser parser;

    // F(b) - F(a)
    double Fa = parser.evaluate(rumusExact, a);
    double Fb = parser.evaluate(rumusExact, b);

    nilaiExact = Fb - Fa;
    galatAbsolut = std::abs(nilaiExact - hasilNumerik);

    if (std::abs(nilaiExact) > 1e-9) {
        galatRelatif = (galatAbsolut / std::abs(nilaiExact)) * 100.0;
    } else {
        galatRelatif = 0.0;
    }

    valid = true;
}

double Galat::getExact() const
{
    return nilaiExact;
}
double Galat::getAbsolut() const
{
    return galatAbsolut;
}
double Galat::getRelatif() const
{
    return galatRelatif;
}
bool Galat::isValid() const
{
    return valid;
}
