#include "GestoreDipendenti.h"
#include <iostream>
using namespace std;

bool GestoreDipendenti::aggiungiDipendente(Dipendente d){
    if( !(esisteDipendente(d.getId())) ){
        dipendenti.push_back(d);
        return true;
    }
    return false;
}

bool GestoreDipendenti::esisteDipendente(string id)const{
    for (int i = 0; i < dipendenti.size(); i++)
    {
        if(dipendenti[i].getId()==id){
            return true;
        }
    }
    return false;
    
}

void GestoreDipendenti::rimuoviDipendente(string id) {
    if(!esisteDipendente(id)){
        return;
    }
        
    unsigned int j = 0;
    for(unsigned int i = 0; i < dipendenti.size(); i++) {
        dipendenti[j] = dipendenti[i];
        if(dipendenti[i].getId() != id){
            j++;
        }
    }
    dipendenti.resize(j);
}

void GestoreDipendenti::stampa()const{
    for (int i = 0; i < dipendenti.size(); i++)
    {
        cout<<dipendenti[i]<<endl;
    }
    
}

float GestoreDipendenti::costoDipendenti()const{
    
    float stipendio=0.0;
    for (int i = 0; i < dipendenti.size(); i++)
    {
        stipendio=stipendio+dipendenti[i].getStipendio();
    }
    return stipendio;
    
}

