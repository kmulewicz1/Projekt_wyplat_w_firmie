#ifndef PRACOWNIK_H
#define PRACOWNIK_H
#include<iostream>
using namespace  std;


class Pracownik
{
      string imie;
      string nazwisko;
      int Id;
      double zarobki;
      double stanKonta;
public:
      int getID();
      string getNazwisko();
      double sprawdzSrodki();
       void dodajSrodki();
      double pobierzZarobki();
    Pracownik(string imie, string nazwisko, double Id, double zarobki, double stanKonta);
};

#endif // PRACOWNIK_H
