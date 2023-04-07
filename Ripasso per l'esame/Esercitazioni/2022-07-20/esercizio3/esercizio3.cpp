

#include <vector>
#include <iostream>
#include "GrafoNonOrientato.h"

using namespace std;



vector<int> adiacenti(GrafoNonOrientato g, int n){
    vector<int> vec;
    for (int i = 0; i < g.n(); i++)
    {
        if(g(i,n)){
            vec.push_back(i);
        }
    }
    return vec;
}

int calcoloPotenziale(GrafoNonOrientato g, int n){
    int somma=0;
    vector<int> adiac=adiacenti(g,n);
    for (int i = 0; i < adiac.size(); i++)
    {
        somma+=g.pot(adiac[i]);
    }
    if(g.pot(n)>somma/adiac.size()){
        return 1;
    }
    else{
        return 0;
    }   
}

void esercizio3(GrafoNonOrientato g){
    vector<int> vec;
    for (int i = 0; i < g.n(); i++)
    {
        if(calcoloPotenziale(g,i)){
            vec.push_back(i);
        }
    }
    int max=0,nodo=0;
    for (int i = 0; i < vec.size(); i++)
    {
        if(max<g.pot(vec[i])){
            max=g.pot(vec[i]);
            nodo=vec[i];
        }
    }
    return nodo;   
}


int main(){

    return 0;
}