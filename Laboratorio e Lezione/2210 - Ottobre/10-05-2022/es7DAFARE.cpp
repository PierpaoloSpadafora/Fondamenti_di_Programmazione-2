
/*
Scrivere una funzione che, data una matrice, determini
se tutte le coppie di righe hanno almeno un elemento in comune
anche se in colonne diverse
*/

#include <iostream>
using namespace::std;

const int rowsize = 3;
const int colsize = 3;
bool Verifica(int m[][colsize], int rowsize, int colsize){
    bool Trovate=false, tutte=true, match=false;

    for (int r1 = 0; r1 < rowsize-1 && tutte; r1++)
    {
        for (int r2 = r1+1; r2 < rowsize && tutte; r2++)
        {
            for (int c = 0; c < colsize && !match; c++)
            {
                if(m[r1][c]==m[r2][c]){
                    match=true;
                }
                if (match==false)
                {
                    tutte=false;
                }
            }
            match=false;
        }
        Trovate=false;        
    }
    return tutte;    
}

void LeggiMatrice(int m[][colsize], int rowsize, int colsize){
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout<<"inserisci l'elemento m["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];
        }
    }
    
}

int main(){
    int m[rowsize][colsize];
    LeggiMatrice(m,rowsize,colsize);
    if(Verifica(m,rowsize,colsize)){
        cout<<"Esistono! "<<endl;
    }
    else{
        cout<<"NON Esistono!"<<endl;
    }
    return 0;
}