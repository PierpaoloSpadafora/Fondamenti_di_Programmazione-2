


/*
Scrivere una funzione che ricevuti in input due numeri a, b ∈ N 
calcoli (se esiste) il logaritmo discreto di a in base b, 
cioè l’intero c tale che bc=a. Se c non esiste, la funzione dovrà restituire-1.
*/

#include <iostream>
using namespace::std;

int log(int base, int argomento){

        int ris=argomento/base;
        int c=1;
        while(ris!=1){
            ris=ris/base;
            c++;
            //cout<<"\n argomento: "<<argomento<< "\nbase: "<< base<<"\n ris: "<< ris<<"c: "<< c<<endl;
        }
        return c;
}

int main(){
    int argomento,base;
    cout<<"Inserisci una base a: ";
    cin>>base;        
    cout<<"Inserisci un argomento b: ";
    cin>>argomento;  
    cout<<"\nIl logartimo in base: " << base <<" di: "<< argomento << " e' "<<log(base,argomento)<<"\n\n";
}