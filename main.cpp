#include <iostream>
#include "kontofirmowe.h"
#include "pracownik.h"
#include "firma.h"


using namespace std;

int main()
{

KontoFirmowe konto_inf(145699,"99998888777766665555","sekretarka","sekretarka1");
konto_inf.setF1(Firma::getSingleton());
Firma::getSingleton()->setKonto(&konto_inf);
vector<Pracownik> w1, w2;
Firma *f2=Firma::getSingleton();
Firma *f1=Firma::getSingleton();

Pracownik p1("Jan","Kowaslki",1,3000,98);
Pracownik p2("Pawel","Nowak",2,3000,1234);
Pracownik p3("Adrian","Wisniewski",3,2000,0);
Pracownik p4("Kamil","Orzelek",4,2000,2340);
Pracownik p5("Andrezej","Nowakowski",5,5000,73230);
Pracownik p6("Michal","Nowacki",6,6000,56000) ;
Firma::getSingleton()->dodajpracownika(p1);
Firma::getSingleton()->dodajpracownika(p2);
Firma::getSingleton()->dodajpracownika(p3);
Firma::getSingleton()->dodajpracownika(p4);
Firma::getSingleton()->dodajpracownika(p5);
Firma::getSingleton()->dodajpracownika(p6);
cout<<f2<<endl<<f1<<endl;
w1=f1->pobierzPracownikow();
w2=f2->pobierzPracownikow();
cout<<w1[2].getNazwisko()<<endl<<w2[2].getNazwisko()<<endl;

Firma::getSingleton()->zaloguj();

cout<<Firma::getSingleton()->sprawdzam_zalogowanie()<<endl;
konto_inf.wykonajprzelew();
konto_inf.wydrukujRaport();

}
