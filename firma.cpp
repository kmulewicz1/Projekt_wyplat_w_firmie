
#include "firma.h"
#include "pracownik.h"
#include "kontofirmowe.h"
using namespace std;
vector<Pracownik> Firma:: pobierzPracownikow()
    {
        return pracownicy;
    }
bool Firma:: sprawdzam_zalogowanie()
    {
        return czy_zalogowany;
    }
void Firma:: dodajpracownika(Pracownik p1)
{
pracownicy.push_back(p1);
}
void Firma:: usunPracownika(Pracownik p1)
{
    for(unsigned int i=0;i<pracownicy.size();i++)
    {
        if(p1.getID()==pracownicy[i].getID())
        {
            pracownicy.erase(pracownicy.begin()+i);
            break;
        }
    }
}

Firma::Firma()
{
    this->nazwa="firma";
    this->login="admin";
    this->haslo="admin1";
    this->czy_zalogowany=false;
}
Firma* Firma::instance = 0;
 Firma *Firma::getSingleton()
{
   if(instance==0)
       instance= new Firma();
   return instance;
}
void Firma:: zaloguj()
{
    string podany_login;
    string podane_haslo;
    for(unsigned int i=1; i<=3;i++)
    {
    cout<<"Prosze podac login i haslo "<<endl;
    cin>>podany_login>>podane_haslo;
    if(podane_haslo==haslo&&podany_login==login)
        {
            czy_zalogowany=true;
            cout<<"logowanie przebieglo poprawnie"<<endl;
            break;
        }

    else {
        cout<<"Bledne dane"<<endl;
        if(i!=3) cout<<"sproboj ponownie"<<endl;
        else
        {
            cout<<"zbyt wiele nieudanych prob"<<endl;

        }
    }
}//for do logowania
}//metoda
void Firma:: wyloguj()
{
    czy_zalogowany=false;
}
 void Firma::setKonto(KontoFirmowe *konto)
 {
     this->konto=konto;
 }
KontoFirmowe* Firma:: getKonto()
{
    return konto;
}
