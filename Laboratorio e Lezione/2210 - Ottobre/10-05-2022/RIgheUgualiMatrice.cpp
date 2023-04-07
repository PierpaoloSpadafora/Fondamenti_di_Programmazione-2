

/*
Data una matrice determini se esistono due righe esattamente identiche
*/


#include <iostream>
using namespace::std;

const int rowsize = 3;
const int colsize = 3;
bool Verifica(int m[][colsize], int rowsize, int colsize){
    bool Trovate=false;
    for (int r1 = 0; r1 < rowsize-1 && !Trovate; r1++)
    {
        for (int r2 = r1+1; r2 < rowsize && !Trovate; r2++)
        {
            bool identiche=true;
            for (int c = 0; c < colsize && identiche; c++)
            {
                if(m[r1][c]!=m[r2][c]){
                    identiche=false;
                }
            }
            if(identiche){
                Trovate=true;
            }   
        }        
    }
    return Trovate;    
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