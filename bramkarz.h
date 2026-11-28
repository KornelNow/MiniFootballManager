#ifndef BRAMKARZ_H
#define BRAMKARZ_H

#include "zawodnik.h"
using namespace std;

class Bramkarz : public Zawodnik {
    private:
        int refleks;

    public:
        Bramkarz();
        Bramkarz(const string& imie, const string& nazwisko,
                int wiek, int numer, int ocena, int refleks);

        int getRefleks() const;
        void setRefleks(int refleks);

        double obliczWartoscRynkowa() const;
        double obliczOceneMeczowa() const;

        void wypisz() const;
};

#endif