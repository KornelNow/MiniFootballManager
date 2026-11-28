#include "zawodnik.h"
#include <iostream>
using namespace std;
Zawodnik::Zawodnik() : imie(""), nazwisko(""), wiek(0), numer(0), ocena(0){}

Zawodnik::Zawodnik(const string& imie, const string& nazwisko,
                   int wiek, int numer, int ocena)
    : imie(imie), nazwisko(nazwisko), wiek(wiek), numer(numer), ocena(ocena){}

string Zawodnik::getImie() const { return imie; }
string Zawodnik::getNazwisko() const { return nazwisko; }
int Zawodnik::getWiek() const { return wiek; }
int Zawodnik::getNumer() const { return numer; }
int Zawodnik::getOcena() const { return ocena; }

void Zawodnik::setWiek(int w) { wiek = w; }
void Zawodnik::setNumer(int n) { numer = n; }
void Zawodnik::setOcena(int o) { ocena = o; }

double Zawodnik::obliczWartoscRynkowa() const {
    return ocena * 10000.0;
}

void Zawodnik::wypisz() const {
    cout << "#" << numer << " " << imie << " " << nazwisko << ", wiek: " << wiek << ", ocena: " << ocena << ", wartosc: " << obliczWartoscRynkowa() << " EUR\n";
}

double Zawodnik::obliczOceneMeczowa() const {
    return ocena;
}