

/*
Scrivere una funzione che, ricevuti due interi x, y ∈ Z, restituisca il risultato
dell’operazione x + x + y · y.
*/


#include <iostream>
using namespace::std;

int es4(int x, int y){
    return (x+x+(y*y));
}

int main(){
    int x,y;
    cout<<"Inserisci un numero x: ";
    cin>>x;        
    cout<<"Inserisci un numero y: ";
    cin>>y;  
    cout<<es4(x,y);
}