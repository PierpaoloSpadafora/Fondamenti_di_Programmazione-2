#ifndef DOCUMENTO_PDF_H
#define DOCUMENTO_PDF_H

#include "Documento.h"

class DocumentoPDF : public Documento {

    public:
        DocumentoPDF() : Documento(), firmato(false) {}
        DocumentoPDF(string pr, string des, int df, bool f) : Documento(pr, des, df), firmato(f) {}
        void setFirmato(bool f) { firmato = f; }
        bool isFirmato() const { return firmato; }

    private:
        bool firmato;        
};

#endif
