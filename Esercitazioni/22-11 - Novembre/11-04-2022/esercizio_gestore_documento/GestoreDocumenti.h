#ifndef GESTORE_DOCUMENTI_H
#define GESTORE_DOCUMENTI_H

#include <list>
using namespace std;

#include "Documento.h"

class GestoreDocumenti {
    
    public:
        void aggiungiDocumento(Documento*);
        void rimuoviDocumento(Documento*);
        void stampaDocumenti() const;
        void ordinaDocumenti(int valore);
        
    private:
        list<Documento*> documenti;
};

#endif