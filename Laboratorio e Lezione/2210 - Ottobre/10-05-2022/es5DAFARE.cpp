

/*
Leggi una sequenza di numeri terminata da -1
lunga al più 100 elementi e compattare l'array
*/

#include <iostream>
using namespace::std;


void LeggiArray(int a[], int dim){

    int num;
    bool fine=false;
    for (int i = 0; i < dim && !fine; i++)
    {   
        cin>>num;
        if(num!=-1){
            v[i]=num
        }
        else{
            fine=false;
        }
    }
    cout<<"\n";

    return;
}

void Cancella(int v[], int pos, int &dim){
    for (int i = pos; i < dim-1; i++)
    {
        v[i]=v[i+1];
        dim--;
    }   
}

bool Trovato(int v[], ){



    return bool;
}

void Compatta(int v[], int dim){
    int i=0;
    while(i<dim){
        if( Trovato(v[i],0,i-1) ){
            Cancella(v, i, dim)
        }
        else{
            i++;
        }
    }
}

void Print(int v[], int dim){
    for (int i = 0; i < dim; i++)
    {
        cout<< v[i] <<", "<<endl;
    }
    
}


int main(){

    int a,b,dim=100;
    int v[dim];
    LeggiArray(v, dim);


    
    return 0;
}