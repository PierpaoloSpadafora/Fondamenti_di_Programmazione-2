#ifndef PRENOTAZIONE_H
#define PRENOTAZIONE_H
#include <string>
using namespace std;
#include "Camera.h"
class Prenotazione{

private:
string nome;
string cognome;
string codice_carta_credito;
bool colazione;
Camera* camera;
int numeroCamera;
int id_p;

public:
Prenotazione(){};
Prenotazione(int idp,string n,string c,string cc, bool col, int numC, Camera *cam){
	id_p=idp, 
	nome = n, 
	cognome=c, 
	codice_carta_credito = cc, 
	colazione=col, 
	camera = cam , 
	numeroCamera = numC;};

int costoPrenotazione(int idp){
int somma=0;
if(id_p == idp){
if (colazione)
	somma = (10 * numeroCamera)+ camera->calcolaCosto(numeroCamera);

else
	somma = camera->calcolaCosto(numeroCamera);
}
return somma;
}	

int getId(){
return id_p;
}

string getCognome(){
return cognome;
}

};
#endif
