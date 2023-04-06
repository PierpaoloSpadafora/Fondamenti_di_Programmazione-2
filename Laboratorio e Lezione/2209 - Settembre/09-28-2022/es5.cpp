

//  data una seq di sottoseq di numeri interi positivi separate da uno zero 
//  calcolare la somma di ciascuna sottoseq. 
//  La sequenza e' terminata da una coppia di zeri




#include <iostream>
using namespace::std;

int main(){

    int a, somma=0;
    bool d0=false, u0=false;
    cout<<"Inserisci una sequenza di sottosequenze separate dallo 0=>"<<endl;

    while(d0==false){
        cin >> a;
        if (a==0)
        {
            if (u0==true)
            {
                d0=true;
            }
            else{  
                u0=true;                
                cout<<"la somma della sottoseuenza e': "<< somma<<endl;
            }
            
        }
        else{
            somma+=a;
            u0=false;
        }                        
    }

    return 0;
}

















