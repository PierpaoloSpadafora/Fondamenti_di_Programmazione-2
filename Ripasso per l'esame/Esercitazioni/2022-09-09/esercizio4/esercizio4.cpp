
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;



string unifica(vector<string> a){
    string b;
    for (int i = 0; i < a.size(); i++)
    {
        b+=a[i];
    }
    return b;
    
}

bool cercaSeUsata(vector<string> usate, vector<string> W){
    string a= unifica(W);
    for (int i = 0; i < usate.size(); i++)
    {
        if(usate[i]==a){
            return true;
        }
    }
    return false;    
}

vector<string> CreaW(vector<string>& V, vector<vector<string>>& vec, int k){
    
    vector<string> usate;
    vector<string> W;

    int count=0;
    do
    {
        if(!PresenteInVec(W, V[count])){
            W.push_back(V[count]);
        }
        count++;
        if(W.size()>=k){
            if(!cercaSeUsata(usate, W)){
                if(!ConvalidaW(W,vec)){
                    W.clear();
                    count=0;
                    usate.push_back(unifica(W));
                }
                else{
                    return W;
                }
            }
        }
    } while ( W.size()<k);
    

    
    return W;
}

bool PresenteInVec(vector<string>& vec, string a){
    //restituisce true se a si trova in vec
    return (find(vec.begin(),vec.end(),a)!=vec.end());
}

bool EntrambePresentiInVec(vector<string>& vec, string a, string b){
    //Restituisce true se sia a che b sono presenti in vec

    return (PresenteInVec(vec,a)&&PresenteInVec(vec,b));
}

bool EntrambeInVectorDiTransazioni(vector<vector<string>>& vec, string a, string b){
    // Restituisce true se nel vettore di transazioni a e b compaiono almeno una volta
    // nella stessa transazione
    bool flag=false;
    for (int i = 0; i < vec.size(); i++)
    {
        if(EntrambePresentiInVec(vec[i],a,b)){
            flag=true;
        }
    }
    return flag;
    
}

bool ConvalidaW(vector<string>& W, vector<vector<string>>& vec){
    //restituisce true se la prima condizione dell'esercizio è vera
    for (int i = 0; i < W.size(); i++)
    {
        for (int j = i; j < W.size(); j++)
        {
            if(i!=j){
                if(EntrambeInVectorDiTransazioni(vec,W[i],W[j])){
                    return false;
                }            
            }
        }
    }
    return true;
    
}

bool esercizio4(vector<string>V, vector<vector<string>> T, int k){
    
    vector<string> W;
    W=CreaW(V, T, k);
    return (ConvalidaW(W, T));
}


int main(){

    int k=2;

    vector<string> V;
    V.push_back("a");
    V.push_back("b");
    V.push_back("c");
    V.push_back("d");
    V.push_back("e");
    V.push_back("f");
    V.push_back("g");
    V.push_back("h");

    vector<vector<string>> T;

    vector<string> a;
    a.push_back("a");
    a.push_back("b");
    a.push_back("f");
    a.push_back("c");
    T.push_back(a);
    a.clear();

    a.push_back("b");
    a.push_back("h");
    a.push_back("d");
    T.push_back(a);
    a.clear();

    a.push_back("b");
    a.push_back("a");
    a.push_back("c");
    T.push_back(a);
    a.clear();
    
    a.push_back("d");
    a.push_back("h");
    T.push_back(a);
    a.clear();

    a.push_back("e");
    a.push_back("f");
    a.push_back("g");
    a.push_back("h");
    T.push_back(a);
    a.clear();


    cout<<esercizio4(V,T,k)<<endl;


    return 0;
}*/





#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>

using namespace std;



bool check(list<string>& W, vector<vector<string>>& T, int k){
    
    if(W.size()<k){
        return false;
    }

    int count=0;
    for (int i = 0; i < T.size(); i++)
    {
        for (int j = 0; j < T[i].size(); j++)
        {
            if( find(W.begin(),W.end(),T[i][j])!= W.end() ){
                count++;
            }
            if(count>1){
                return false;
            }
        }
        count=0;
    }
    return true;
    
}


bool esercizio4(vector<string>& V, vector<vector<string>>& T, int k, int index){

    list<string> W;
    if( W.size()<k || index>V.size() ){
        return false;
    }

    if(check(W, T, k)){
        return true;
    }

    W.push_back(V[index]);
    if(esercizio4(V,T,k,index+1)){
        return true;
    }
    else{
        W.pop_back();
    }
}


int main(){

    vector<string> V = {"a","b","c","d","e","f","g","h"};
    vector<vector<string>> T = {{"a","b","f","c"},{"b","h","d"},{"b","a","c"},{"d","h"},{"e","f","g","h"}};
    int k = 2;
    int index
=0;
    bool flag=esercizio4(V,T,k,index
);


    return 0;
}






