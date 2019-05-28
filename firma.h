#ifndef FIRMA_H
#define FIRMA_H
using namespace  std;
#include <iostream>
#include <vector>

class KontoFirmowe;
#include "kontofirmowe.h"
#include "pracownik.h"


class Firma
{
    string login;
       string haslo;
       bool czy_zalogowany;
       string nazwa;
       vector<Pracownik> pracownicy;
       KontoFirmowe * konto;
       Firma();
       static Firma * instance;

public:
   static Firma * getSingleton();
   KontoFirmowe* getKonto();
   void setKonto(KontoFirmowe *konto);
   vector <Pracownik> pobierzPracownikow();
   bool sprawdzam_zalogowanie();
   void dodajpracownika(Pracownik p1);
   void usunPracownika(Pracownik p1);
   void zaloguj();
   void wyloguj();
};

#endif // FIRMA_H
