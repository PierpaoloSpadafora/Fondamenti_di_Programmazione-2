/*
Siano A, B due matrici di interi di dimensioni n × n. Si definisce grado di
somiglianza tra la colonna i di A e la colonna j di B, denotato come σA,B(i, j),
il numero di elementi comuni alle due colonne. Scrivere un programma che:
1. Prese in input A, B e due interi 0 ≤ i, j ≤ N − 1 calcoli σA,B(i, j).
2. Popoli un array V di dimensione n tale che V [j] = σA,B(j, j)


Inoltre, A e B si dicono allineate con grado 3 se sono soddisfatte le seguenti
condizioni:
•σA,B(j,j) ≥n −3 per ogni 0 ≤j ≤N −1
•Per ogni 0 ≤ x,y ≤ N − 1 tale che A[x,j] = B[y,j] si ha anche che
|x −y|< 2.
3. Determini se A, B sono allineate con grado 3
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

int SomiglianzaTraDueMatrici(int a[][n], int b[][n], int i, int j){
    int c=0;
    for (int k = 0; k < n; k++)
    {
        if(a[k][i]==b[k][i]){
            c++;
        }
    }
    return c;
}

void PopolaArray(int v[], int a[][n], int b[][n], int n){
    
    for (int i = 0; i < n; i++)
    {
        v[i]=SomiglianzaTraDueMatrici(a,b,i,i);
    }
    return;
}

bool Allineate3(int a[][n], int b[][n], int n){
    bool val=true;
    for (int j = 0; j < n && val; j++)
    {
        if(  !(( SomiglianzaTraDueMatrici(a,b,j,j) ) >= (n-3))  ){
            val=false;
        }
     for (int x = 0; x < n && val; x++)
    {
        for (int y = 0; y < n && val; y++)
        {
            if(a[x][j]==b[y][j]){
                if(! ( abs(x-y)<2 ) ){
                    val = false;
                }
            }
        }        
    } 
    }
    return val;
    
}

int main(){

    int a[n][n], b[n][n];
    int i, j, V[n];

    LeggiMatrice(a,0);
    LeggiMatrice(b,1);
    cout<<"Inserisci una colonna I di A: "<<endl;
    cin >> i;
    cout<<"Inserisci una colonna J di B: "<<endl;
    cin >> j;

    // int a [n][n]={{1,2,3},{4,5,6},{7,8,9}};
    // int b [n][n]={{1,2,3},{4,5,6},{7,8,9}};

    PopolaArray(V, a, b, n);
    for (int i = 0; i < n; i++)
    {
        cout<<"\n V["<<i<<"] = "<<V[i]<<endl;
    }
    if(Allineate3(a,b,n)){
        cout<<"\n Le due matrici sono allineate con grado 3"<<endl;
    }
    else{
        cout<<"\n Le due matrici NON sono allineate con grado 3\n"<<endl;
    }
    

    return 0;
}