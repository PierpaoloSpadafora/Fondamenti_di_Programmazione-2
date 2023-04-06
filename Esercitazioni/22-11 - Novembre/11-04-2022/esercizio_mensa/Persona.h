#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;

class Persona {

    public:
        Persona() {}
        Persona(string cf, string n, string c) : codiceFiscale(cf), nome(n), cognome(c) {}
        virtual ~Persona() {}
        
        virtual Persona* clone() const { return new Persona(*this); }
        
        
        void setCodiceFiscale(string cf) { codiceFiscale = cf; }   
        void setNome(string n) { nome = n; }
        void setCognome(string c) { cognome = c; }
        
        string getCodiceFiscale() const { return codiceFiscale; }
        string getNome() const { return nome; }
        string getCognome() const { return cognome; }
        
        virtual float getTariffaMensa() const { return 7.0; }
        
        friend ostream& operator<<(ostream& o, const Persona& p) {
            return p.stampa(o);
        }
    
    protected:
        virtual ostream& stampa(ostream& o) const {
            o << codiceFiscale << " " << nome << " " << cognome;
            return o;
        } 

    private:
        string codiceFiscale;
        string nome;
        string cognome;
};

#endif
