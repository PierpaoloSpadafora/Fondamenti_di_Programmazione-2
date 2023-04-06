#ifndef STUDENTE_H
#define STUDENTE_H

#include "Persona.h"

class Studente : public Persona {

    public:
        Studente() : Persona(), isee(0.0) {}
        Studente(string cf, string n, string c, float is) : Persona(cf,n,c), isee(is) {}    
        
        Studente* clone() const { return new Studente(*this); }
        
        float getIsee() const { return isee; }
        void setIsee(float is) { isee = is; }
    
        float getTariffaMensa() const {
            if(isee <= 10000)
                return 0.0;
            if(isee <= 20000)
                return 2.0;
            if(isee <= 40000)
                return 3.0;
            return 4.0;
        }

    protected:
        ostream& stampa(ostream& o) const {
            Persona::stampa(o) << ", ISEE: " << isee;
            return o;
        }
        
    private:
        float isee;
};

#endif
