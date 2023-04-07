

/*
Scrivere una funzione che stampi l’istogramma di una sequenza di numeri doubleeri
terminata da un numero negativo.
*/

#include <iostream>
using namespace::std;

double potenza(double a, double b){
    if(b==0&&a!=0){
        return 1;
    }
    else{
        double ris=a;
        if(b>0){
            for (double i = 0; i < b-1; i++)
            {
                ris=ris*a;
            }
            return ris;
        }
        else{
            double ris=1/a;
            cout<<ris<<endl;
            for (double i = 0; i < (b*(-1))-1; i++)
            {
                ris=ris*(1/a);
            }
            return ris;
        }
    }
}

int main(){
    double a,b;
    cout<<"Inserisci una base a: ";
    cin>>a;        
    cout<<"Inserisci un esponente b: ";
    cin>>b;  
    cout<<potenza(a,b);
}