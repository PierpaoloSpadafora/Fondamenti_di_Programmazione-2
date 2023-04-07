#ifndef __POSTA_H__
#define __POSTA_H__

#include <list>
#include <vector>
#include "Utente.h"

using namespace std;

class Posta{
private:
    list<Utente> utenti;
    vector<int> operazioni;

public:
    Posta();

    void aggiungiUtente(int tipologiaOperazione);
    Utente prossimoUtente();
    void stampaUtentiInCoda() const;
    void stampaUtenti(int tipologiaOperazione) const;
    void reset();

};

#endif
