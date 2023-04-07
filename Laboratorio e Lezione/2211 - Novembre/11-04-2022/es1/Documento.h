#ifndef __DOCUMENTO_H__
#define __DOCUMENTO_H__

#include <iostream>
#include <string>

using namespace std;

class Documento{
protected:
    string proprietario;
    string descrizione;
    int dimensioneFile;
public:
    Documento();
    Documento(string, string, int);
    string getProprietario();
    string getDescrizione();
    int getDimensioneFile();
    string setProprietario();
    string setDescrizione();
    int setDimensioneFile();
};

Documento::Documento():
    proprietario(""),
    descrizione(""),
    dimensioneFile(0){}

Documento::Documento(string _proprietario, string _descrizione, int _dimensioneFile):
    proprietario(_proprietario),
    descrizione(_descrizione),
    dimensioneFile(_dimensioneFile){}




#endif