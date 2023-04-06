#ifndef MENSA_H
#define MENSA_H

#include "Persona.h"
#include <vector>
#include <algorithm>
using namespace std;

class Mensa {
    public:
        void accesso(Persona* p) {
            for(auto c : clienti)
                if(c->getCodiceFiscale()==p->getCodiceFiscale())
                    return;
            clienti.push_back(p);
        }
        
        void stampa() const {
            cout << "Utilizzatori mensa:" << endl;
            for(auto c : clienti)
                cout << *c << endl;
        }
        
        float calcolaIncassoGiornaliero() const {
            float somma = 0.0;
            for(auto c : clienti)
                somma += c->getTariffaMensa();
            return somma;
        }
        
        void nuovoGiorno() {
            clienti.clear();
        }

    private:
        vector<Persona*> clienti;
};

#endif