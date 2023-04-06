#include "GestoreDocumenti.h"

#include <iostream>
using namespace std;

void GestoreDocumenti::aggiungiDocumento(Documento* d) {
    documenti.push_back(d);
}

void GestoreDocumenti::rimuoviDocumento(Documento* d) {
    documenti.remove(d);
}

void GestoreDocumenti::stampaDocumenti() const {
    cout << "Documenti: " << endl;
    for(auto d : documenti)
        cout << d->getProprietario() << " " << d->getDescrizione() << endl;
}

bool ordinaProprietario(Documento* d1, Documento* d2) {
    return d1->getProprietario() < d2->getProprietario();
}

bool ordinaDescrizione(Documento* d1, Documento* d2) {
    return d1->getDescrizione() < d2->getDescrizione();
}

bool ordinaDimensioneFile(Documento* d1, Documento* d2) {
    return d1->getDimensioneFile() < d2->getDimensioneFile();
}

void GestoreDocumenti::ordinaDocumenti(int valore) {
    switch(valore) {
        case 1:
            documenti.sort(ordinaProprietario);
            break;
        case 2:
            documenti.sort(ordinaDescrizione);
            break;
        case 3:
            documenti.sort(ordinaDimensioneFile);
            break;            
        default:
            break;
    }
}