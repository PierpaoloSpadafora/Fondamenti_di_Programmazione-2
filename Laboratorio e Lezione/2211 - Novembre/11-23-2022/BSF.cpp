

#include <iostream>
#include <vector>
#include <queue>

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

// iterativo, trovare percorso dati due nodi e vettore di dsjfnsjfn


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



int main(){

}