

#include <iostream>
#include <vector>
#include <algorithm>
#include "GrafoNonOrientato.h"

using namespace std;

/*
Preso in input un grafo G, vogliamo calcolare una (D+1)-colorazione per
il grafo, dove D è il grado dei nodi con grado massimo in G.

usando almeno D+1 colori la colorazione esiste sempre e si può
calcolare in modo greedy

Idea:
    Scorriamo i nodi in qualsiasi ordine
        Vediamo quali sono i colori "disponibili" per il nodo corrente
            Coloriamo il nodo corrente con il primo colore diponibile
*/


int main(){


    GrafoNonOrientato gno(8);
    gno(1,2,true);
    gno(3,6,true);
    gno(1,4,true);
    gno(4,3,true);


    
    int num_nodes, num_edges;

    cin >> num_nodes >> num_edges;

    /*
        Nell'esercitazione sui grafi abbiamo visto la rappresentazione
        a matrice di adiacenza, mat[i][] = true se e solo se
        esiste l'arco(i,j) nel grafo.

        rappresentazione alternativa: lista di adiacenza, dove

        g[i] = una lista di nodi, i vicini del nodo i
        usiamo una rappresentazione con lista di adiacenza
    */

   


    return 0;
}