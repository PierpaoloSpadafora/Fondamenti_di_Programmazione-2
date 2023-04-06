#ifndef __DOCUMENTOMP3_H__
#define __DOCUMENTOMP3_H__


#include "Documento.h"

using namespace std;

class DocumentoMP3:public Documento{
protected:
    float durata;
public:
    DocumentoMP3();
    DocumentoMP3(string, string, int, float);

    float getdurata();
    void setdurata();
};


DocumentoMP3::DocumentoMP3():Documento(){}

DocumentoMP3::DocumentoMP3(string _proprietario, string _descrizione, int _dimensioneFile, float _durata): 
Documento(_proprietario, _descrizione, _dimensioneFile)
{
    durata=_durata;
}

float DocumentoMP3::getdurata(){
    return durata;
}
void DocumentoMP3::setdurata(){
    cout<<"quanto dura la traccia? ";
    cin>>durata; 
}

#endif