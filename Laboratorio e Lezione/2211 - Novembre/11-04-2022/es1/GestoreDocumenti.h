#ifndef __GESTOREDOCUMENTI_H__
#define __GESTOREDOCUMENTI_H__

#include <iostream>
#include <list>
#include "Documento.h"
#include "Documento.cpp"
#include "DocumentoMP3.h"
#include "DocumentoPDF.h"

using namespace std;

class GestoreDocumenti{
private:
    list<Documento*> gestore;
public:

    void aggiungiDocumento(Documento*);
    void rimuoviDocumento(Documento*);
    void stampaDocumenti()const;
    void ordinaDocumenti(int valore);
};


#endif