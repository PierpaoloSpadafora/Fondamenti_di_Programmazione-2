/*
Due matrici A,B di dimensione n ×  n sono simili se la somma degli elementi
sulla diagonale principale di A è uguale alla somma degli elementi sulla diagonale
principale di B.
Si scriva una funzione che ricevuto in input due matrici quadrate di interi, A di
dimensione n×n e Q di dimensione k ×k con n > k, verifichi se A contiene una
sottomatrice Q′di dimensione k ×k simile a Q.
Se questa sottomatrice esiste, la funzione dovrà sostituirla con la matrice Q,
modificando A, e restituire true. Altrimenti, dovrò restituire false senza
modificare A. Qualora A contenesse più sottomatrici simili a Q′, solamente la
più in alto a sinistra dovrà essere sostituita
*/



#include <iostream>
#include <cmath>
using namespace::std;

const int n=4;
const int k=3;

void LeggiMatrice(int m[][n], int l){
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if(l==0){
                cout<<"inserisci l'elemento A["<<r<<"]["<<c<<"]: ";
                cin>>m[r][c];
            }
            else{
                cout<<"inserisci l'elemento B["<<r<<"]["<<c<<"]: ";
                cin>>m[r][c];
            }
        }
    }
    return;
}

bool SomiglianzaTraDueMatrici(int a[][k], int b[][k], int s){
    int sommaA=0,sommaB=0;
    bool papr=false;
    for (int i = 0; i < s; i++){
        sommaA+=a[i][i];
        sommaB+=b[i][i];
    }
    papr=(sommaA==sommaB);
    return papr;
}

bool EsisteSimile(int q[][n], int a[][k], int n, int k){
    bool esiste=false;
    int matB[k][k];
    for (int i = 0; i < n-(n-(k)); i++)
    {
        for (int j = 0; j < n-(n-(k)); j++)
        {
            for (int r = 0; r < k; r++)
            {
                for (int c = 0; c < k; c++)
                {
                    matB[r][c]=q[i][j];
                }
            }
            esiste = SomiglianzaTraDueMatrici(a, matB, k);
        }        
    }
    return esiste;
}

int main(){

    // int q[n][n], a[k][k];
    // LeggiMatrice(q,0);                                                       1 2 3 4 5       1 2 3 4 5
    // LeggiMatrice(a,1);                                                       6 7 8 9 0       6 7 8 9 0
    // cout<<"Inserisci una colonna I di A: "<<endl;                            1 3 5 7 9       2 4 6 8 0
    // cin >> i;                                                                0 1 3 8 5       2 0 4 8 6
    // cout<<"Inserisci una colonna J di B: "<<endl;                            2 3 4 5 6       9 8 7 6 5
    // cin >> j;

    int q [n][n]={{1,2,3,4},{5,6,7,8},{1,2,3,4},{5,6,7,8}};
    int a [k][k]={{0,2,3},{4,5,6},{7,8,9}};

    if(EsisteSimile(q,a,n,k)){
        cout<<"ESISTE"<<endl;
    }
    else{
        cout<<"NON ESISTE"<<endl;
    }

    


    return 0;
}