

/*
Leggere da input un array di dim elementi
determinare il massimo e stampare l'elenco dei numeri contenuti nell'array
ed il relativo scarto dal massimo
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

int TrovaMaxInArray(int v[], int dim){

    int max=v[0];
    for (int i = 1; i < dim; i++)
    {
        if (max<v[i])   
        {
            max=v[i];
        }
    }
    return max;
}

int main(){
    int dim, max;
    cout<<"Inserisci la dimensione dell'array"<<endl;
    cin>>dim;
    int v[dim];

    LeggiArray(v, dim);
    max=TrovaMaxInArray(v,dim);

    for (int i = 0; i < dim; i++)
    {
        cout<<"v["<<i<<"] = "<<v[i]<<" - Scarto dal max: "<<max-v[i]<<endl;
    }

    return 0; 
}