

#include <iostream>
using namespace::std;

const int dim=10;

int main(){

    int a[dim];
    cout<<"Inserisci "<<dim<<" elementi nell'array\n";
    for (int i = 0; i < dim; i++)
    {
        cin>>a[i];
    }
    cout<<"\n";

    for (int i = 0; i < dim; i++)
    {
        cout<<"\n array["<<i<<"] = "<<a[i];
    }
    
    cout<<"\n";
        
    return 0;
}

