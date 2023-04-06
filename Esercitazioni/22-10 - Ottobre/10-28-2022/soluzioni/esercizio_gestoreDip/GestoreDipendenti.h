#ifndef GESTORE_DIPENDENTI_H
#define GESTORE_DIPENDENTI_H

#include <vector>
#include "Dipendente.h"
using namespace std;

class GestoreDipendenti {
    
    public:
        bool aggiungiDipendente(Dipendente d);
        bool esisteDipendente(string id) const;
        void rimuoviDipendente(string id);
        void stampa() const;
        float calcolaCostoDipendenti() const;
            
    
    private:
        vector<Dipendente> dipendenti;

};

#endif