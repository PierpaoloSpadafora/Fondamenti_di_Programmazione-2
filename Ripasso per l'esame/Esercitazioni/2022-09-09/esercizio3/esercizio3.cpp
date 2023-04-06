

#include "Grafo.h"

using namespace std;


bool checkarchientranti(Grafo& g, int nodo){
    bool flag=false;
    for (int i = 0; i < g.n(); i++)
    {
        if(g(i,nodo)>0){
            flag=true;
        }
    }
    return flag;    
}

bool sommaminoredep(Grafo& g, int nodo){
    int somma=0;
    for (int i = 0; i < g.n(); i++)
    {
        somma+=g(i,nodo);
    }
    return somma<g.dep(nodo);
}

bool depmaggiorediV(Grafo g, int nodo){
    int deposito=g.dep(nodo);
    for (int i = 0; i < g.n(); i++)
    {
        if(g(i,nodo)>0){
            if(g.dep(i)<deposito){
                return false;
            }
        }
    }
}

bool esercizio3(Grafo g, int nodo){
    if(!checkarchientranti(g,nodo)){
        return true;
    }
    else{
        if(!sommaminoredep(g,nodo)){
            return false;
        }
        else{
            return (depmaggiorediV(g,nodo));
        }
    }
}