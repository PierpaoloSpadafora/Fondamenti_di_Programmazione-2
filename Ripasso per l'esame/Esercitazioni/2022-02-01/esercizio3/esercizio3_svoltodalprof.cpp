
#include<iostream>
#include <stack>
#include <vector>
#include "Grafo.h"


using namespace std;



int least_reached_node(const Grafo& g){

    int NumNodi = g.n();
    vector<int> raggiunti(NumNodi, 0);

    for(int source = 0; source < NumNodi; ++source){
        vector<bool> visitati(NumNodi, false);
        visitati[source] = true;
        stack<int> n2v;
        n2v.push(source);

        while(!n2v.empty()){
            int current_node = n2v.top();
            n2v.pop();
            raggiunti[current_node]++;
            for(int j = 0; j < NumNodi; ++j){
                if(g(current_node, j) && !visitati[j]){
                    visitati[j] = true;
                    n2v.push(j);
                }
            }
        }
    }
    return min_element(raggiunti.begin(), raggiunti.end())-raggiunti.begin();
}


int f(Grafo G, int u){

	
}

int esercizio3(Grafo G){
	
}