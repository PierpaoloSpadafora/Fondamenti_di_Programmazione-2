

#include "Grafo.h"
#include <iostream>

using namespace std;



int NumArchientranti(Grafo g, int nodo){
    int num=0;
    for (int i = 0; i < g.n(); i++)
    {
        if(g(i,nodo)){
            num++;
        }
    }
    return num;
    
}

int sommaTentranti(Grafo g, int nodo){
    int num=0;
    for (int i = 0; i < g.n(); i++)
    {
        if(g(i,nodo)){
            num+=g.transfer(i,nodo);
        }
    }
    return num;
}


int sommaTuscenti(Grafo g, int nodo){
    int num=0;
    for (int i = 0; i < g.n(); i++)
    {
        if(g(nodo,i)){
            num+=g.transfer(nodo,i);
        }
    }
    return num;
}


bool func(Grafo g, int k1, int k2){
    bool flag=true;
    for (int i = 0; i < g.n(); i++)
    {
        for (int j = 0; j < g.n(); j++)
        {
            if(g.transfer(i,j)<k1||g.transfer(i,j)>k2){
                flag=false;
                return flag;
            }
        }
    }

    for (int nodo = 0; nodo < g.n(); nodo++)
    {
        if(NumArchientranti(g,nodo)%2==0){
            if(sommaTentranti(g,nodo)>sommaTuscenti(g,nodo)){
                flag=false;
                return flag;
            }
        }
        else{
            if(sommaTentranti(g,nodo)<sommaTuscenti(g,nodo)){
                flag=false;
                return flag;
            }
        }
    }    
}

string esercizio3(Grafo g, int k1, int k2){
    if(func(g,k1,k2)){
        return "YES";
    }
    else{
        return "NO";
    }
}


int main(){


}