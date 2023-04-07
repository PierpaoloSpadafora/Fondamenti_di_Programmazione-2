/*
Si M una matrice di interi di dimensione n ×n. Si scriva un programma che
determini la dimensione massima di una sottomatrice quadrata costituita da
elementi uguali. Il programma deve stampare la dimensione, le coordinate
dell’elemento della sottomatrice posto in alto a sinistra ed il valore degli elementi
della matrice.
*/



#include <iostream>
#include <cmath>
using namespace::std;

const int n=5;

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

void DimMaxSottoMat(int m[][n], int l){
    
}


int main(){

    // int a[n][n], b[n][n];
    int i, j, V[n];

    // LeggiMatrice(a,0);
    // LeggiMatrice(b,1);
    // cout<<"Inserisci una colonna I di A: "<<endl;
    // cin >> i;
    // cout<<"Inserisci una colonna J di B: "<<endl;
    // cin >> j;

    int a [n][n]={{1,2,3,4,5},{2,2,2,3,1},{2,2,2,4,5},{2,2,2,1,3},{3,4,1,5,6}};



    return 0;
}