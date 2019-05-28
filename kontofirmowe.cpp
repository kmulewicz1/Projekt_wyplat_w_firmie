#include "kontofirmowe.h"
#include "firma.h"
#include "pracownik.h"

double KontoFirmowe:: sprawdzStanKonta()
{
    return srodki;
}
KontoFirmowe::KontoFirmowe(double srodki, string Numer_Konta, string login, string haslo)
{
    this->Numer_konta=Numer_Konta;
    this->srodki=srodki;
    this->login=login;
    this->haslo=haslo;
    this->czy_zalogowany_do_banku=false;
}

Firma* KontoFirmowe:: getf1()
{
    return f1;
}
void KontoFirmowe::setF1(Firma *f1)
{
    this->f1=f1;
}
void KontoFirmowe::wydrukujRaport()
{
    if(f1->sprawdzam_zalogowanie())
    cout<<"drukuje raport"<<endl;
    else cout<<"brak uprawnien do drukowania"<<endl;
}
void KontoFirmowe:: wykonajprzelew()
{
    if(f1->sprawdzam_zalogowanie())
    { cout<<"sekretarka zalogowana"<<endl;
    string podany_login_do_banku;
    string podane_haslo_do_banku;
    for(int i=1;i<=3;i++)
    {
    cout<<"podaj login i halo do banku"<<endl;
    cin>>podany_login_do_banku>>podane_haslo_do_banku;
    if(podany_login_do_banku==login&&podane_haslo_do_banku==haslo)
    {
     czy_zalogowany_do_banku=true;
     break;
    }
    else
    {
        if(i!=3) cout<<"sproboj ponowanie"<<endl;
            else {cout<<"zbyt wiele nieudanych prób"<<endl;
            return;
        }
    }
    }//for do logowania

    double sumaprzelewow=0;
    vector<Pracownik> pracownicy=f1->pobierzPracownikow();
    for(unsigned int i=0; i<pracownicy.size();i++)
    {
        sumaprzelewow+=pracownicy[i].pobierzZarobki();
    }
    cout<<"srodki na koncie to "<<srodki<<endl;
    if(sumaprzelewow>srodki) cout<<"zbyt mala ilosc srodkow"<<endl;
    else
    {
        cout<<"stan konta: OK"<<endl;
        for(unsigned int i=0; i<pracownicy.size();i++)
        {
            pracownicy[i].dodajSrodki();
            srodki-=pracownicy[i].pobierzZarobki();
        }
        cout<<"srodki na koniec to "<<srodki<<endl;
    }//else



    }//zalogowany do systemu firmowego
    else
    {
        cout<<"najpierw zaloguj sie do systemu firmowego"<<endl;
    }
}//metoda
