
#include <queue>
#include <iostream>
using namespace std;
 
struct nodo {
    int valore;
    struct nodo *SIN, *DES;
};
 
void StampaInOrdineDiLivelli(nodo* radice)
{
    if (radice == NULL)
        return;
 
    queue<nodo*> q;
 
    q.push(radice);
 
    while (q.empty() == false) {
        nodo* nodo = q.front();
        cout << nodo->valore << " ";
        q.pop();
 
        if (nodo->SIN != NULL)
            q.push(nodo->SIN);
 
        if (nodo->DES != NULL)
            q.push(nodo->DES);
    }
}
 
nodo* NuovoNodo(int valore)
{
    nodo* temp = new nodo;
    temp->valore = valore;
    temp->SIN = temp->DES = NULL;
    return temp;
}
 
int main()
{
    nodo* radice = NuovoNodo(1);
    radice->SIN = NuovoNodo(2);
    radice->DES = NuovoNodo(3);
    radice->SIN->SIN = NuovoNodo(4);
    radice->SIN->DES = NuovoNodo(5);
 
    cout << "La visita in ordine di livelli dell'albero è: \n";
    StampaInOrdineDiLivelli(radice);
    return 0;
}