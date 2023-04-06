

#include <iostream>
using namespace::std;

int somma(int x, int y){
    int som=0;
    som=x+y;
    return som;
}

int prodotto(int x, int y){
    int prod=0;
    for (int i = 0; i < y; i++)
    {
        prod=somma(prod,x);
    }
    return prod;
}

int main(){
    int x,y;
    cout<<"Inserisci un numero x: ";
    cin>>x;        
    cout<<"Inserisci un numero y: ";
    cin>>y;        
    int som = somma(x, y);
    int prod= prodotto (x, y);
    cout<<"\nla somma e' uguale a :" << som <<endl;
    cout<<"Il prodotto e' uguale a: "<< prod <<"\n"<<endl;
    return 0;
}
