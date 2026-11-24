#pragma once
#include <string>

class Zawodnik{
    private:
        std::string imie;
        std::string nazwisko;
        int wiek;
        int numer;
        int ocena;

    public:
        Zawodnik();
        Zawodnik(const std::string& imie, const std::string& nazwisko,
                int wiek, int numer, int ocena);
        virtual ~Zawodnik() = default;

        std::string getImie() const;
        std::string getNazwisko() const;
        int getWiek() const;
        int getNumer() const;
        int getOcena() const;

        void setWiek(int wiek);
        void setNumer(int numer);
        void setOcena(int ocena);

        virtual double obliczWartoscRynkowa() const;
        virtual void wypisz() const;
};  