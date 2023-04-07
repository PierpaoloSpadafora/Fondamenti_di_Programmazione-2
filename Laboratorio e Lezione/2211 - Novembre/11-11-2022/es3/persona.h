#ifndef __PERSONA_H__
#define __PERSONA_H__

#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nome, cognome;

public:
    Persona();
    Persona(string _nome, string _cognome);
    void setNome(string n);
    void setCognome(string c);
    string concatena();
};


#endif