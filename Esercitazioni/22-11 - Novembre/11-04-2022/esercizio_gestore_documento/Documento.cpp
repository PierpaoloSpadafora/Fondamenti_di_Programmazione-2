#include "Documento.h"

Documento::Documento() {
    proprietario = "";
    descrizione = "";
    dimensioneFile = 0;
}

Documento::Documento(string pr, string des, int df) {
    proprietario = pr;
    descrizione = des;
    dimensioneFile = df;
}

string Documento::getProprietario() const {
    return proprietario;
}

string Documento::getDescrizione() const {
    return descrizione;
}

int Documento::getDimensioneFile() const {
    return dimensioneFile;
}

void Documento::setProprietario(string p) {
    proprietario = p;
}

void Documento::setDescrizione(string d) {
    descrizione = d;
}

void Documento::setDimensioneFile(int df) {
    dimensioneFile = df;
}