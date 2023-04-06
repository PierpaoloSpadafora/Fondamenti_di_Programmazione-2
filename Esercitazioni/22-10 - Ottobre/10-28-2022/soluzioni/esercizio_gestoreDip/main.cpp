#include "GestoreDipendenti.cpp"
#include <iostream>
using namespace std;

int main() {
    GestoreDipendenti g;
    Dipendente d1("0", "Nome1", "Cognome1", 100.0);
    Dipendente d2("1", "Nome2", "Cognome2", 200.0);
    Dipendente d3("2", "Nome3", "Cognome3", 300.0);
    Dipendente d4("3", "Nome4", "Cognome4", 400.0);
    Dipendente d5("0", "Nome5", "Cognome5", 500.0); //Stesso id di d1
    
    g.aggiungiDipendente(d1);
    g.aggiungiDipendente(d2);
    g.aggiungiDipendente(d3);
    g.aggiungiDipendente(d4);
    g.aggiungiDipendente(d5);
    g.aggiungiDipendente(d1);
    
    if(g.esisteDipendente("1"))
        cout << "Esiste dipendente con id 1" << endl;
    else
        cout << "Non esiste dipendente con id 1" << endl;
        
    if(g.esisteDipendente("4"))
        cout << "Esiste dipendente con id 4" << endl;
    else
        cout << "Non esiste dipendente con id 4" << endl;
        
    g.stampa();
    
    cout << "Il costo dei dipendenti è " << g.calcolaCostoDipendenti() << endl;
    
    g.rimuoviDipendente("1");
    g.stampa();
}