#ifndef PROFESSORE_H
#define PROFESSORE_H

#include "Persona.h"

class Professore : public Persona {

    public:
        Professore() : Persona(), stipendio(0.0) {}
        Professore(string cf, string n, string c, float s) : Persona(cf, n, c), stipendio(s) {}
        
        Professore* clone() const { return new Professore(*this); }
        
        float getStipendio() const { return stipendio; }
        void setStipendio(float s) { stipendio = s; }
        
        float getTariffaMensa() const {
            if(stipendio <= 30000)
                return 2.5;
            if(stipendio <= 40000)
                return 3.5;
            return 5.0;
        }
        
    protected:
        ostream& stampa(ostream& o) const {
            Persona::stampa(o) << ", stipendio: " << stipendio;
            return o;
        }
        
    private:
        float stipendio;
};

#endif
