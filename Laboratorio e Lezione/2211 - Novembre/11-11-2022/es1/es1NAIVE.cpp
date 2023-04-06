
#include <iostream>
using namespace std;



void Exist(bool e){
    if(e){
        cout<< "ESISTE !"<<endl;
    }
    else{
        cout<< "NON ESISTE !"<<endl;
    }
}

int input(int v[], int lungheza){
    int x;
    for (int i = 0; i < lungheza; i++)
    {
        cin>>v[i];
    }
}

bool CercaM(const int v[], int m, int n){
    bool esiste = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j){
                if(v[i]+v[j]==m){
                    esiste = true;
                }
            }
        }
    }
    return esiste;
}

int main(){
    cout<<"Inserisci la lunghezza N della sequenza.\nN: ";
    int n, m;
    cin>>n;

    int v[n];
    input(v, n);
    
    cout<<"Inserisci un intero M: ";
    cin>>m;

    bool esiste = CercaM(v, m, n);
    Exist(esiste);
    
    return 0;
}

