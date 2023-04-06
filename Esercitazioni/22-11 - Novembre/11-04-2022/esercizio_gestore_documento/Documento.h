#ifndef DOCUMENTO_H
#define DOCUMENTO_H

#include <string>
using namespace std;

class Documento {
    
    public:
        Documento();
        Documento(string, string, int);
        string getProprietario() const;
        string getDescrizione() const;
        int getDimensioneFile() const;
        
        void setProprietario(string);
        void setDescrizione(string);
        void setDimensioneFile(int);
    
    private:
        string proprietario;
        string descrizione;
        int dimensioneFile;
};

#endif