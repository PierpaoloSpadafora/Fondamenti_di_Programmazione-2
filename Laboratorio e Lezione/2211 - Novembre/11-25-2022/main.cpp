

#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include "GrafoNonOrientato.h"
#include "Grafo.h"

using namespace std;


    


vector<int> bfs(const Grafo& G, int s){
    vector<bool> visitati(G.n(), false);
    vector<int> p(G.n(), -1);
    queue<int> q;
    q.push(s);
    visitati[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        //valuta u
        for (int i = 0; i < G.n(); i++)
        {
            if(u!=i&&G(u,i)&&!visitati[i]){
                q.push(i);
                visitati[i]=true;
                p[i]=u;
            }
        }
    }
    return p;
}

void ricostruireCammino(int s, int t, const vector<int> p, queue<int> &cammino){
    if(s==t){
        cammino.push(s);
    }
    else if(t==-1){
        return;
    }
    else{
        ricostruireCammino(s, p[t], p, cammino);
        cammino.push(t);
    }
}

bool trovaCammino(const Grafo &G, int s, int t, vector<bool> visitati, list<int> &cammino){
    if(s==t){
        visitati[t]=true;
        return true;
    }
    else{
        visitati[s]=true;
        bool trovato=false;
        for (int j = 0; j < G.n() && trovato==false; j++)
        {
            if(s=!j&&G(s,j)&&!visitati[j]){
                cammino.push_back(j);
                trovato = trovaCammino(G,j,t,visitati,cammino);
                if(!trovato){
                    cammino.pop_back();
                }
            }
        }
        return trovato;
    }
    
}
bool trovaCammino(const Grafo &G, int s, int t){
    vector<bool> visitati(G.n(), false);
    list<int> cammino;
    return trovaCammino(G, s, t, visitati, cammino);
}


    //Esercizio 2
    void stampaGrafo(const Grafo& g){
        cout<<"\nIl grafo ha "<<g.n()<<" nodi\n"<<endl;
        for (int i = 1; i < g.n(); i++)
        {
                cout<<"Il grado del nodo "<<i<<" e': "<<g.grado(i)<<endl;
        }
        if(g.m()>1){            
            cout<<"Il grafo ha "<<g.m()<<" archi"<<endl;
        }
        else{
            cout<<"\nIl grafo ha 1 arco\n"<<endl;
        }
        for (int i = 0; i < g.n(); i++)
        {
            for (int j = 0; j < g.n(); j++)
            {
                if(g(i,j)){
                    cout<<i<<" -> "<< j<<endl;
                }
            }
        }
        cout<<endl;
    }
    //Esercizio 2


    //Esercizio 3
    pair<unsigned, vector<unsigned>> getNodiConGradoMassimo(const GrafoNonOrientato& g){
        pair<unsigned, vector<unsigned>> mypair;
        int gmax=0;
        for (int i = 0; i < g.n(); i++)
        {
            if(gmax<g.grado(i)){
                gmax=g.grado(i);
            }
        }
        mypair.first=gmax;
        for (int i = 0; i < g.n(); i++)
        {
            if(g.grado(i)==gmax){
                mypair.second.push_back(i);
            }
        }
        return mypair;
    }
    //Esercizio 3


    //Esercizio 4
    bool stessoNumeroNodiStessoGrado(const GrafoNonOrientato& g, const GrafoNonOrientato& h){
        bool flag=true;
        if(g.n()!=h.n()){
            return false;
        }
        else{
            //grado,numero nodi per quel grado
            vector<unsigned> gvec;
            vector<unsigned> hvec;

            //inzializza i vettori a 0
            for (int i = 0; i < g.n(); i++)
            {
                gvec.push_back(0);
                hvec.push_back(0);
            }

            //popola vettore gvec
            for (int i = 0; i < g.n(); i++)
            {
                gvec[g.grado(i)]++;
            }
            
            //popola vettore hvec
            for (int i = 0; i < h.n(); i++)
            {
                hvec[h.grado(i)]++;
            }

            if(gvec!=hvec){
                flag=false;
            }
            
                 
        }
        return flag;
    }
    //Esercizio 4


    //Esercizio 5
    bool almenoUnNodoAdiacenteATutti(const GrafoNonOrientato& g){
        bool flag=false;
        for (int i = 0; i < g.n() && !flag; i++)
        {
            if(g.grado(i)==g.n()-1){
                flag=true;
            }
        }
        return flag;
        
    }
    //Esercizio 5


    //Esercizio 6
    template<class T>
    unsigned viciniComuni(unsigned i, unsigned j, const T& g) {
        unsigned answer = 0;
        for (int k = 0; k < g.n(); ++k) {
            if (g(i,k) and g(j,k)) answer++;
        }
        return answer;
    }
    //Esercizio 6


    //Esercizio 7
    bool connesso(const Grafo& g){
        bool flag=true;
        for (int u = 0; u < g.n() && flag; u++)
        {
            for (int v = 0; v < g.n() && flag; v++)
            {
                if(g(u,v) && flag){
                    flag = (trovaCammino(g,u,v) && trovaCammino(g,v,u)) ;
                }
            }
        }
        return flag;
    }
    //Esercizio 7


    //Esercizio 8
   
    //Esercizio 8


int main(){

    Grafo g(8);
    g(1,2,true);
    g(1,6,true);
    g(1,7,true);
    g(2,3,true);
    g(6,4,true);
    g(7,5,true);
    g(3,4,true);
    g(4,5,true);
    g(5,6,true);
    
    //Es2
    // stampaGrafo(g);
    //Es2


    GrafoNonOrientato gno(8);
    gno(1,2,true);
    gno(3,6,true);
    gno(1,4,true);
    gno(4,3,true);

    //Es3
    pair<unsigned, vector<unsigned>> mypair = getNodiConGradoMassimo(gno);
    cout<<"Grado massimo di g: "<<mypair.first<<endl;
    for (auto elem : mypair.second)
    {
        cout<<elem<<endl;
    }
    //Es3




    return 0;
}