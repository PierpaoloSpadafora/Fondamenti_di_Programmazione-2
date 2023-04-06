
#include "Documento.h"

using namespace std;

string Documento::getProprietario(){
    return proprietario;
}
string Documento::getDescrizione(){
    return descrizione;
}
int Documento::getDimensioneFile(){
    return dimensioneFile;
}

string Documento::setProprietario(){
    cout<<"proprietario del file: ";
    cin.ignore();
    getline(cin, proprietario);
}
string Documento::setDescrizione(){
    cout<<"descrizione del file: ";
    cin.ignore();
    getline(cin, descrizione);
}
int Documento::setDimensioneFile(){
    cout<<"dimensione del file: "; 
    cin >> dimensioneFile;
}