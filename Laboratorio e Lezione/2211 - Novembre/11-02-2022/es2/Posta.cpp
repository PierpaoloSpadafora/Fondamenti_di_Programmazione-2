#include "Posta.h"
#include <cassert>

using namespace std;

Posta::Posta(){
    operazioni.push_back(0);
    operazioni.push_back(0);
    operazioni.push_back(0);
};

void Posta::aggiungiUtente(int tipologiaOperazione) {
    if(tipologiaOperazione < 0 || tipologiaOperazione > 2)
        return;
    
    int prossimoNumero = ++operazioni[tipologiaOperazione];
    Utente u(prossimoNumero, tipologiaOperazione);
    
    /*
      Se il nuovo utente deve effettuare una spedizione, deve essere inserito prima del primo utente
      che non deve effettuare spedizioni.
    */
    if(u.get_tipo()==0) {
        for(auto it = utenti.begin(); it != utenti.end(); ++it) {
            if(it->get_tipo() != 0) {
                utenti.insert(it,u);
                return;
            }
        }
    }
    else {
        /*
        Inseriamo l'utente nella prima posizione disponibile
        */
        for(auto it = utenti.begin(); it != utenti.end(); ++it) {
            auto j = it;
            j++;
            if(j==utenti.end())
                break;
            if((*it).get_tipo() != 0) {
                if((*it).get_tipo()==(*j).get_tipo()) {
                    if((*it).get_tipo()!=u.get_tipo()) {
                        utenti.insert(j, u);
                        return;
                    }
                    break;
                }
            }
        }
    } // 0 0 1 2 1 2   2        
    //Nel caso non sia stato inserito prima, lo inseriamo in coda
    utenti.push_back(u);
}

Utente Posta::prossimoUtente(){
    assert(!utenti.empty());
    Utente u=utenti.front();
    utenti.pop_front();
    return u;
}

void Posta::stampaUtentiInCoda() const{
    cout<< "Utenti in coda"<< endl;
    for(auto elem:utenti){
        cout<<elem<<endl;
    }
}

void Posta::stampaUtenti(int tipologiaOperazione) const{
    cout << "Utenti in coda per l'operazione " << tipologiaOperazione << endl;
    for (auto elem : utenti)
    {
        if(elem.get_tipo()==tipologiaOperazione){
            cout<<elem<<endl;
        }
    }
    
}

void Posta::reset(){
    utenti.clear();
    for (int i = 0; i < operazioni.size(); i++)
    {
        operazioni[i]=0;
    }
    
}

    
