#ifndef KONTOFIRMOWE_H
#define KONTOFIRMOWE_H

#include "firma.h"
using namespace std;
#include <iostream>
class Firma;
class KontoFirmowe
{
    string login;
    string haslo;
    bool czy_zalogowany_do_banku;
    double srodki;
     string Numer_konta;
     Firma * f1;

public:
    Firma* getf1();
    void setF1(Firma *f1);
    KontoFirmowe(double srodki, string Numer_Konta, string login, string haslo);
    void wykonajprzelew();
    double sprawdzStanKonta();
    void wydrukujRaport();
};

#endif // KONTOFIRMOWE_H
