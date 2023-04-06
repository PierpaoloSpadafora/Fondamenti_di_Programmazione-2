

/*
Sia A un array di interi di dimensione n. 
Scrivere una funzione ricorsiva che
calcoli la somma degli elementi di A.
*/

#include <iostream>
using namespace::std;

const int n = 5;

void LeggiArray(int a[]){

    cout<<"Inserisci "<<n<<" elementi nell'array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"\n";

    return;
}

int somma(int v[], int som, int i){

    som=som+v[i];
    i++;
    if(i<n){  
        return somma(v,som,i);
    }
    return som;
}

int main(){

    int v[n];
    LeggiArray(v);
    cout <<"La somma degli elementi nell'array e': "<< somma(v,0,0) <<"\n\n"<< endl;

    return 0; 
}