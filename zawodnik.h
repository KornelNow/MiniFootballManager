#ifndef ZAWODNIK_H
#define ZAWODNIK_H

#include <string>
using namespace std;
class Zawodnik{
    private:
        string imie;
        string nazwisko;
        int wiek;
        int numer;
        int ocena;

    public:
        Zawodnik();
        Zawodnik(const string& imie, const string& nazwisko,
                int wiek, int numer, int ocena);
        virtual ~Zawodnik() = default;

        string getImie() const;
        string getNazwisko() const;
        int getWiek() const;
        int getNumer() const;
        int getOcena() const;

        void setWiek(int wiek);
        void setNumer(int numer);
        void setOcena(int ocena);

        virtual double obliczWartoscRynkowa() const;
        virtual void wypisz() const;
        virtual double obliczOceneMeczowa() const;
};  

#endif