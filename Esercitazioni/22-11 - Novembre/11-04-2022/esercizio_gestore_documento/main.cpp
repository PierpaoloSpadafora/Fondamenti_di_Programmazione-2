#include <iostream>
using namespace std;

#include "GestoreDocumenti.h"
#include "DocumentoPDF.h"
#include "DocumentoMP3.h"

int main() {
    GestoreDocumenti g;
    DocumentoPDF* d1 = new DocumentoPDF("marco", "esame", 100, false);
    DocumentoPDF* d2 = new DocumentoPDF("antonio", "istruzioni", 140, false);
    DocumentoPDF* d3 = new DocumentoPDF("simona", "libro", 1000, true);
    DocumentoMP3* d4 = new DocumentoMP3("maria", "canzone", 300, 7.5);
    DocumentoMP3* d5 = new DocumentoMP3("angelo", "registrazione", 200, 5.0);
    DocumentoMP3* d6 = new DocumentoMP3("dario", "audiolibro", 100, 2.5);
        
    g.aggiungiDocumento(d1);
    g.aggiungiDocumento(d2);
    g.aggiungiDocumento(d3);
    g.aggiungiDocumento(d4);
    g.aggiungiDocumento(d5);
    g.aggiungiDocumento(d6);
    
    g.stampaDocumenti();
    
    cout << endl;
    cout << "-------" << endl;
    cout << "Ordino per 1" << endl;
    g.ordinaDocumenti(1);
    g.stampaDocumenti();
    
    cout << endl;
    cout << "-------" << endl;
    cout << "Ordino per 2" << endl;
    g.ordinaDocumenti(2);
    g.stampaDocumenti();
    
    cout << endl;
    cout << "-------" << endl;
    cout << "Ordino per 3" << endl;
    g.ordinaDocumenti(3);
    g.stampaDocumenti();
    
    cout << endl;
    cout << "-------" << endl;
    cout << "Ordino per 4" << endl;
    g.ordinaDocumenti(4);
    g.stampaDocumenti();
    
    
    cout << endl;
    cout << "-------" << endl;
    cout << "Rimuovo tutto" << endl;
    g.rimuoviDocumento(d1);
    g.rimuoviDocumento(d2);
    g.rimuoviDocumento(d3);
    g.rimuoviDocumento(d4);
    g.rimuoviDocumento(d5);
    g.rimuoviDocumento(d6);
    g.stampaDocumenti();    
    
    delete d1;
    delete d2;
    delete d3;
    delete d4;
    delete d5;
    delete d6;
    return 0;
}