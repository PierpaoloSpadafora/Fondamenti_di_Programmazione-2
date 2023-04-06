#include "Camera.cpp"
#include "Camera.h"
#include "Singola.h"
#include "Doppia.h"
#include "Prenotazione.h"
#include "Gestorehotel.h"
#include "Gestorehotel.cpp"
#include <iostream>
#include <list>
using namespace std;

int main(){
Camera *s = new Singola(1); 
cout<<"costo "<<s->calcolaCosto(3);
cout<<" tipologia "<<s->getTipologia()<<endl;

Camera *d = new Doppia(2); 
cout<<"costo "<<d->calcolaCosto(1);
cout<<" tipologia "<<d->getTipologia()<<endl;

Prenotazione p(129,"pie","bru","09781",true,3,s);
Prenotazione p1(19,"die","aru","90701",false,4,d);
Prenotazione p2(9,"pao","ga","01781",true,2,s);
Prenotazione p3(109,"ale","lio","92781",false,1,s);
Prenotazione p4(12,"bob","sin","09709",true,6,d);
Prenotazione p5(1,"alice","won","90661",false,7,d);
cout<<"costo Pren "<<p.costoPrenotazione(p.getId())<<endl;

Gestorehotel g;
g.addPrenotazione(p);
g.addPrenotazione(p1);
g.addPrenotazione(p2);
g.addPrenotazione(p3);
g.addPrenotazione(p4);
g.addPrenotazione(p5);
cout<<"costo TOT Pren "<<g.sommaTotPrenotazione()<<endl;
g.removePrenotazione(p2.getCognome());


return 0;
}
