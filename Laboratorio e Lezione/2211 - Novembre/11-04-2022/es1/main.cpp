

#include <iostream>
#include <string>
#include "GestoreDocumenti.cpp"

using namespace std;


int menu(){
        cout<< "\n  1 - Aggiungi un documento"<<endl;
        cout<< "  2 - Rimuovi un documento"<<endl;
        cout<< "  3 - Stampa documenti"<<endl;
        cout<< "  4 - Riordina in base al proprietario"<<endl;
        cout<< "  5 - Riordina in base alla descrizione"<<endl;
        cout<< "  6 - Riordina in base alla dimensione del file"<<endl;
        cout<< "  7 - Termina esecuzione"<<endl;
}

int InputPerTest(GestoreDocumenti &documentManager){
    string p1="Paolo", p2="Massoni", p3="Topolino";
    string d1="Interessante",d2="Bello",d3="patata", d4="himlamlah";
    int dim1=10, dim2=20, dim3=30, dim4=40;

    Documento a(p1,d1,dim1);
    Documento b(p1,d2,dim2);
    Documento c(p2,d2,dim3);
    Documento d(p2,d3,dim4);
    Documento e(p3,d4,dim4);

    DocumentoPDF dpdf1(a.getProprietario(), a.getDescrizione(), a.getDimensioneFile(), true);
    DocumentoPDF dpdf2(b.getProprietario(), b.getDescrizione(), b.getDimensioneFile(), false);
    DocumentoPDF dpdf5(e.getProprietario(), e.getDescrizione(), e.getDimensioneFile(), true);

    DocumentoMP3 dmp33(c.getProprietario(), c.getDescrizione(), c.getDimensioneFile(), 3.4);
    DocumentoMP3 dmp34(d.getProprietario(), d.getDescrizione(), d.getDimensioneFile(), 2.4);

    Documento *p;

    p=&dpdf1;
    documentManager.aggiungiDocumento(p);

    p=&dpdf2;
    documentManager.aggiungiDocumento(p);

    p=&dpdf5;
    documentManager.aggiungiDocumento(p);

    p=&dmp33;
    documentManager.aggiungiDocumento(p);

    p=&dmp34;
    documentManager.aggiungiDocumento(p);
}

int main(){

    GestoreDocumenti documentManager;

    InputPerTest(documentManager);


    int scelta=-1;
    while(scelta!=4){
        menu();
        cin>>scelta;
        switch (scelta)
        {
        case 1:{
            string p1,d1;
            int dim1;
            cout<< "Chi e' il proprietario di qeusto documento?: "<<endl;
            cin.ignore();
            getline(cin,p1);
            cout<< "Aggiungi una descrizione al documento: "<<endl;
            getline(cin,d1);
            cout<< "Inserisci la dimensione del documento in KB: "<<endl;
            cin>>dim1;

            Documento a(p1,d1,dim1);
            DocumentoPDF dpdf1(a.getProprietario(), a.getDescrizione(), a.getDimensioneFile(), true);
            Documento *p;
            p=&dpdf1;

            documentManager.aggiungiDocumento(p);

        }
        break;
        case 2:{            
            string p1,d1;
            int dim1;
            cout<< "Chi e' il proprietario del documento da eliminare?: "<<endl;
            cin.ignore();
            getline(cin,p1);
            cout<< "Qual e' la descrizione del documento?: "<<endl;
            cin.ignore();
            getline(cin,d1);

            Documento a(p1,d1,dim1);
            DocumentoPDF dpdf1(a.getProprietario(), a.getDescrizione(), a.getDimensioneFile(), true);
            Documento *p;
            p=&dpdf1;

            documentManager.rimuoviDocumento(p);
        }
        break;
        case 3:{
            documentManager.stampaDocumenti();
        }
        break;
        case 4:{
            documentManager.ordinaDocumenti(1);
        }
        break;
        case 5:{
            documentManager.ordinaDocumenti(2);
        }
        break;
        case 6:{
            documentManager.ordinaDocumenti(3);
        }
        break;

        case 7:{

        }
        break;
        default:
            break;
        }
    }

    return 0;
}