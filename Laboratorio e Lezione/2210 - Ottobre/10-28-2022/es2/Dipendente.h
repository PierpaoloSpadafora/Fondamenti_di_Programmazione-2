
#ifndef DIPENDENTE_H
#define DIPENDENTE_H

#include <iostream>
#include <string>
using namespace std;

class Dipendente{
private:
    string id;
    string nome;
    string cognome;
    float stipendio;

public:
    Dipendente(): stipendio(0.0) {}
    Dipendente(string i, string n, string c, float s): id(i), nome(n), cognome(c), stipendio(s){}

    string getId() const { return id; }
    string getNome() const { return nome; }
    string getCognome() const { return cognome; }
    float getStipendio() const { return stipendio; }

    void setId(string id){ id=id; }
    void setNome(string n){ nome=n; }
    void setCognome(string c){ cognome=c; }
    void setStipendio(float s){ stipendio=s; }

    friend ostream& operator<<(ostream& o, const Dipendente& d) {
        o<<d.id<<" "<<d.nome<<" "<<d.cognome<<" "<<d.stipendio<<" euro";
    }
};

#endif