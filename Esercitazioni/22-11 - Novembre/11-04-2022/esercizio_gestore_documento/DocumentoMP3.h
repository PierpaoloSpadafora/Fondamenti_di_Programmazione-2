#ifndef DOCUMENTO_MP3_H
#define DOCUMENTO_MP3_H

#include "Documento.h"

class DocumentoMP3 : public Documento {

    public:
        DocumentoMP3() : Documento(), durata(0) {}
        DocumentoMP3(string pr, string des, int df, float d) : Documento(pr, des, df), durata(d) {}
        void setDurata(float d) { durata = d; }
        float getDurata() const { return durata; }
        
    private:
        float durata;
        
};

#endif
