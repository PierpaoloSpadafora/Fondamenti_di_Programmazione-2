#ifndef __DOCUMENTOPDF_H__
#define __DOCUMENTOPDF_H__


#include "Documento.h"

using namespace std;

class DocumentoPDF:public Documento{
protected:
    bool firma;
public:
    string a;
    DocumentoPDF();
    DocumentoPDF(string, string, int, bool);
    bool getfirma();
    void setfirma();
};

DocumentoPDF::DocumentoPDF():Documento(){}

DocumentoPDF::DocumentoPDF(string _proprietario, string _descrizione, int _dimensioneFile, bool _firma): 
Documento(_proprietario, _descrizione, _dimensioneFile)
{
firma=_firma;
}

bool DocumentoPDF::getfirma(){
    return firma;
}

void DocumentoPDF::setfirma(){
    cout<<"Il documento è firmato? ";
    cin>>a;
    if (a == "sì" || a =="si" || a == "si'")
    {
        firma=true;
    }
    else firma=false;
}

#endif