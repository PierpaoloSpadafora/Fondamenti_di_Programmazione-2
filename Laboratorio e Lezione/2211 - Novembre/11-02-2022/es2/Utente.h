#ifndef __UTENTE_H__
#define __UTENTE_H__

#include <iostream>
using namespace std;

class Utente{
private:
    int numero;
    int tipologiaOperazione; //0 spedizione - 1 pagamento - 2 riscossione
public:

    Utente(): 
    numero(0), 
    tipologiaOperazione(0){}

    Utente(int numero, int tipo): 
    numero(numero), 
    tipologiaOperazione(tipo){}

    int get_numero(){return numero;};    
    int get_tipo(){return tipologiaOperazione;};


    friend ostream& operator<<(ostream& out, const Utente& u){
        out<<"Numero: "<<u.numero<<", ";
        switch (u.tipologiaOperazione)
        {
        case 0:
            out<<"spedizione";
            break;
        case 1:
            out<<"pagamento";
            break;
        case 2:
            out<<"riscossione";
            break;
        default:
            break;
        }
        return out;
    }
};




#endif