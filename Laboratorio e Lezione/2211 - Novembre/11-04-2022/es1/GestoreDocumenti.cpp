

#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>
#include "GestoreDocumenti.h"
using namespace std;



void GestoreDocumenti::aggiungiDocumento(Documento* d){
    gestore.push_back(d);
}
void GestoreDocumenti::rimuoviDocumento(Documento* d){
    gestore.remove(d);
}
void GestoreDocumenti::stampaDocumenti()const{
    for(list<Documento*>::const_iterator it=gestore.begin(); it!=gestore.end(); it++){
        cout<<"Proprietario: "<<(*it)->getProprietario()<<"\n"; //doppia dereferenziazione, prendo ciò a cui punta l'iteratore(cioè un puntatore) e poi ciò a cui punta l'oggetto
        cout<<"Descrizione: "<<(*it)->getDescrizione()<<"\n"<<endl;
        //cout<<"Dimensione file: "<<(*it)->getDimensioneFile()<<"\n"<<endl;
    }
}

void GestoreDocumenti::ordinaDocumenti(int valore){
    
    switch (valore){
        case 1:{
            list<string> nomi;
            unordered_map<string,Documento*> hashmap;
            for(list<Documento*>:: const_iterator it=gestore.begin(); it!=gestore.end(); it++){
                nomi.push_back((*it)->getProprietario());

                hashmap[(*it)->getProprietario()]=*it;
            }
            nomi.sort();
            for(auto elem:nomi){
                cout<<"Proprietario: "<<hashmap[elem]->getProprietario()<<"\n";
                cout<<"Descrizione: "<<hashmap[elem]->getDescrizione()<<"\n";
                cout<<"Dimensione File: "<<hashmap[elem]->getDimensioneFile()<<"\n"<<endl;
            }
        }
        break;
        case 2:{
            list<string> descrizione;
            unordered_map<string,Documento*> hashmap;
            for(auto it=gestore.begin(); it!=gestore.end(); it++){
                descrizione.push_back((*it)->getDescrizione());
            }
            descrizione.sort();
            for(auto elem:descrizione){
                cout<<hashmap[elem]->getProprietario()<<endl;
                cout<<hashmap[elem]->getDescrizione()<<endl;
                cout<<hashmap[elem]->getDimensioneFile()<<endl;
            }

        }
        break;
        case 3:{
            list<int> DimensioneFile;
            unordered_map<int,Documento*> hashmap;
            for(auto it=gestore.begin(); it!=gestore.end(); it++){
                DimensioneFile.push_back((*it)->getDimensioneFile());
            }
            DimensioneFile.sort();
            for(auto elem:DimensioneFile){
                cout<<hashmap[elem]->getProprietario()<<endl;
                cout<<hashmap[elem]->getDescrizione()<<endl;
                cout<<hashmap[elem]->getDimensioneFile()<<endl;
            }

        }
        break;
        default:{
            cout<<"\nScelta non valida\n"<<endl;
        }
        break;
    }
}