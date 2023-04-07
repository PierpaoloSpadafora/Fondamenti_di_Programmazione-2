
#ifndef __GESTORE_DIPENDENTI_H__
#define __GESTORE_DIPENDENTI_H__

#include <vector>
#include "Dipendente.h"
using namespace std;

class GestoreDipendenti{
private:
    vector<Dipendente> dipendenti;
public:
    bool aggiungiDipendente(Dipendente d);
    bool esisteDipendente(string id)const;
    void rimuoviDipendente(string id);
    void stampa()const;
    float costoDipendenti() const;

};

#endif