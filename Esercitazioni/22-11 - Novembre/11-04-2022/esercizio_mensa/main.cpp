#include "AnagraficaUniversitaria.h"
#include "Mensa.h"
#include <iostream>
using namespace std;

int main() {

    AnagraficaUniversitaria a;
    a.aggiungiStudente("cf3", "nome3", "cognome3", 10000.0);
    a.aggiungiStudente("cf4", "nome4", "cognome4", 20000.0);
    a.aggiungiProfessore("cf1", "nome1", "cognome1", 100000.0);
    a.aggiungiProfessore("cf2", "nome2", "cognome2", 20000.0);
    a.aggiungiProfessore("cf2", "nome2", "cognome2", 40000.0);
    a.aggiungiProfessore("cf5", "nome5", "cognome5", 40000.0);
    a.stampa();
    
    Mensa m;
    m.accesso(a.getPersona("cf1"));
    m.accesso(a.getPersona("cf2"));
    m.accesso(a.getPersona("cf3"));
    m.accesso(a.getPersona("cf4"));
    m.accesso(a.getPersona("cf5"));
    m.accesso(a.getPersona("cf1"));
    
    Persona* p1 = new Persona("cf6", "nome6", "cognome6");
    m.accesso(p1);
    m.stampa();
    cout << "Incasso: " << m.calcolaIncassoGiornaliero() << endl;
    
    m.nuovoGiorno();
    m.accesso(a.getPersona("cf1"));
    m.stampa();
    
    
    delete p1;
    return 0;
}
