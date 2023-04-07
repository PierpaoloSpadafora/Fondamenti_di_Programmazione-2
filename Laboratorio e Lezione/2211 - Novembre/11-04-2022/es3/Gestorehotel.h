#ifndef GESTOREHOTEL_H
#define GESTOREHOTEL_H
#include <list>
#include "Camera.h"
#include "Prenotazione.h"
#include <string>
#include <iostream>
using namespace std;
class Gestorehotel{

private:
list<Camera*> camere;
list<Prenotazione> pre;


public:
Gestorehotel(){};

void addCamera(Camera *c){camere.push_back(c);}

void removeCamera(){camere.pop_back();}

void addPrenotazione(Prenotazione c);

void removePrenotazione(string c1){
if(pre.empty())
	return;

for(list<Prenotazione>::iterator it = pre.begin(); it != pre.end(); it++){
	cout<<"prenot BEFORE "<<(*it).getCognome()<<endl;
}

for(list<Prenotazione>::iterator it = pre.begin(); it != pre.end(); it++){
	if((*it).getCognome() == c1){
	list<Prenotazione>::iterator it2 = it;
		it2++;
		pre.erase((it));
		it = it2;
	}
}

for(list<Prenotazione>::iterator it = pre.begin(); it != pre.end(); it++){
	cout<<"prenot AFTER "<<(*it).getCognome()<<endl;
}
}

int sommaPrenotazione(Prenotazione p){
int somma=0;
	for(list<Prenotazione>::iterator it = pre.begin(); it != pre.end(); it++){
		if((*it).getId() == p.getId())
			somma+=(*it).costoPrenotazione(p.getId());
	}
return somma;
}

int sommaTotPrenotazione(){
int somma=0;
	for(list<Prenotazione>::iterator it = pre.begin(); it != pre.end(); it++){
			somma+=(*it).costoPrenotazione((*it).getId());
	}
return somma;
}



};

#endif
