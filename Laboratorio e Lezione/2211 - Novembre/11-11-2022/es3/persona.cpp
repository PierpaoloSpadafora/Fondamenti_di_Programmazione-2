
#include "persona.h"
#include <iostream>
#include <string>

using namespace std;


Persona::Persona()
{
    nome = "";
    cognome = "";
}
Persona::Persona(string _nome, string _cognome)
{
    nome = _nome;
    cognome = _cognome;
}
void Persona::setNome(string n){
    nome=n;
}
void Persona::setCognome(string c){
    cognome=c;
}
string Persona::concatena()
{
    return nome + " " + cognome;
}

