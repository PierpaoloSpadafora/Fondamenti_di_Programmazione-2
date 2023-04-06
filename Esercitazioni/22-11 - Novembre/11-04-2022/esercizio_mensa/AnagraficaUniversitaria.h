#ifndef ANAGRAFICA_UNIVERSITARIA_H
#define ANAGRAFICA_UNIVERSITARIA_H

#include <vector>
using namespace std;

#include "Persona.h"
#include "Professore.h"
#include "Studente.h"

class AnagraficaUniversitaria {
    
    public:
        AnagraficaUniversitaria() {}
        void aggiungiStudente(string cf, string n, string c, float isee) {
            if(getPersona(cf)!=nullptr) //Se è già presente una persona con quel codice fiscale non deve essere inserita
                return;
            Studente* s = new Studente(cf, n, c, isee);            
            persone.push_back(s);
        }
        
        void aggiungiProfessore(string cf, string n, string c, float stipendio) {
            if(getPersona(cf)!=nullptr) //Se è già presente una persona con quel codice fiscale non deve essere inserita
                return;
            Professore* p = new Professore(cf, n, c, stipendio);
            persone.push_back(p);
        }
        
        Persona* getPersona(string cf) const {
            for(auto p : persone)
                if(p->getCodiceFiscale() == cf)
                    return p;
            return nullptr;        
        }
        
        void stampa() const {
            cout << "Anagrafica:" << endl;
            for(auto p : persone)
                cout << *p << endl;
        }
        
        ~AnagraficaUniversitaria() { clear(); }
        
        AnagraficaUniversitaria(const AnagraficaUniversitaria& a) {
            for(auto p : a.persone)
                persone.push_back(p->clone());
        }
        
        AnagraficaUniversitaria& operator=(const AnagraficaUniversitaria& a) {
            if(this != &a) {
                clear();
                for(auto p : a.persone)
                    persone.push_back(p->clone());
            }
            return *this;
        }
        
    private:
        void clear() {
            for(auto p : persone)
                delete p;
            persone.clear();
        }
        
        vector<Persona*> persone;
};

#endif