#include "bramkarz.h"
#include <iostream>
using namespace std;

Bramkarz::Bramkarz(): Zawodnik(), refleks(0){}
Bramkarz::Bramkarz(const string& imie, const string& nazwisko,
                  int wiek, int numer, int ocena, int refleks)
                  : Zawodnik(imie, nazwisko, wiek, numer, ocena), refleks(refleks) {}

int Bramkarz::getRefleks() const {return refleks;}
void Bramkarz::setRefleks(int r) {refleks=r;}

double Bramkarz::obliczWartoscRynkowa() const {
    return getOcena() * 40000.0 + refleks * 20000.0;
}

double Bramkarz::obliczOceneMeczowa() const {
    return 0.4 * getOcena() + 0.6 * refleks;
}

void Bramkarz::wypisz() const {
    Zawodnik::wypisz();
    cout << "Pozycja: bramkarz, refleks: " << refleks << endl;
}