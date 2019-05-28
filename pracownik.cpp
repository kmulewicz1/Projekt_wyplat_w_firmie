#include "pracownik.h"
#include "firma.h"
#include "kontofirmowe.h"

using namespace std;
Pracownik::Pracownik(string imie, string nazwisko, double Id, double zarobki, double stanKonta)

{
    this->imie=imie;
       this->nazwisko=nazwisko;
       this->Id=Id;
       this->zarobki=zarobki;
       this->stanKonta=stanKonta;
}
string Pracownik::getNazwisko()
{
    return nazwisko;
}
double Pracownik:: pobierzZarobki()
{
    return zarobki;
}
double Pracownik:: sprawdzSrodki()
{
    return stanKonta;
}
void Pracownik:: dodajSrodki()
{
    cout<<"stan konta pracownika "<<imie<<" "<<"nazwisko wynosi "<<stanKonta<<endl;
    cout<<"przelewam"<<endl;
 stanKonta+=zarobki;
 cout<<"stan konta pracownika "<<imie<<" "<<nazwisko<<" po przelewie wynosi "<<stanKonta<<endl;
}
int Pracownik:: getID()
{
    return Id;
}
