

/*
Leggere un array di interi di 10 elementi e verificare se un
elemento N è presente nell'array
*/

#include <iostream>
using namespace::std;


void LeggiArray(int a[], int dim){
    cout<<"Inserisci "<<dim<<" elementi nell'array\n";
    for (int i = 0; i < dim; i++)
    {
        cin>>a[i];
    }
    cout<<"\n";
    return;
}

int CercaInArray(int a[], int dim, int elemento){
    bool trovato = false;
    for (int i = 0; i < dim && !trovato; i++)
    {
        if(a[i]==elemento){
            trovato=true;
        }
    }
    return trovato;
}

int main(){

    int n, dim=10, a[dim];
    LeggiArray(a, dim);
    cout<<"\nQuale numero vuoi cercare? ";
    cin>>n;

    if(CercaInArray(a, dim, n)){
        cout<<"TROVATO!\n\n";
    }
    else{
        "NON TROVATO\n\n";
    }
    return 0;
}

