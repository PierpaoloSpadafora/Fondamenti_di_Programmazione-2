#include <iostream>
#include "GestoreDipendenti.cpp"

using namespace std;

int main(){

    GestoreDipendenti g;
    Dipendente d1("0", "Mario", "Rossi", 100.0);
    Dipendente d2("1", "Topolino", "Topolo", 200.0);
    Dipendente d3("2", "Paperino", "Papero", 300.0);
    Dipendente d4("3", "Pluto", "Cane", 400.0);
    Dipendente d5("0", "Minnie", "Topola", 500.0); //Stesso id di d1

    g.aggiungiDipendente(d1);
    g.aggiungiDipendente(d2);
    g.aggiungiDipendente(d3);
    g.aggiungiDipendente(d4);
    g.aggiungiDipendente(d5);


    if(g.esisteDipendente("1")){
        cout<<"Esiste dipendente 1\n"<<endl;
    }
    else{
        cout<<"Non esiste dipendente 1\n"<<endl;
    }
    if(g.esisteDipendente("4")){
        cout<<"Esiste dipendente 4\n"<<endl;
    }
    else{
        cout<<"Non esiste dipendente 4\n"<<endl;
    }

    g.stampa();

    cout<< "\nCosto Dipendenti: "<<g.costoDipendenti()<<"\n"<<endl;

    g.rimuoviDipendente("1");

    g.stampa();

    return 0;
}