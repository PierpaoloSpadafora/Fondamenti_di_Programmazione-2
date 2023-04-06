
#include <iostream>
#include <vector>


using namespace std;

/*
Scrivere una funzione che prenda in input un grafo orientato
e pesato G dove ogni nodo in G ha associato un valore intero psitivo 
chiamato deposito. La funzione deve restituire la stringa "YES" se per ogni nodo v
del grafo valgono le seguenti condizioni:
    - La somma dei pesi degli archi entranti in v è < del suo deposito
    - Il deposito di ogni nodo avente un arco entrante in v è >= al deposito di v
Se un nodo non ha archi entranti le condizioni si assumono verificate

g(i,j) restituisce il peso ell'arco, 0 se non c'è

g.dep(i) restituisce il deposito associato al nodo

*/


for (int i = 0; i < G.n(); i++)
{
    int somma=0;
    for (int j = 0; j < G.n(); j++)
    {
        if(i!=j&&G(j,i)!=0){
            if(g.dep(j)<g.dep(i)){
                //Esci
            }
            somma += g(j,i);
        }
    }
    if(somma>=g.dep(i)){
        //Esci
    }
    
}



int main() {


    return 0;
}