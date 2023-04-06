

//  data una seq di sottoseq di numeri interi positivi separate da uno zero 
//  calcolare la somma di ciascuna sottoseq. 
//  La sequenza e' terminata da una coppia di zeri


#include <iostream>
using namespace::std;

int main(){

    int a, cmax=0, c=0, cins=0;
    bool flag=false;
    cout<<"Inserisci una sequenza di sottosequenze separate dallo 0=>"<<endl;

    while(flag==false){
        cin >> a;
        if(a==-1){
            flag = true;
        }
        else{
            if(a!=0){
                cins++;
            }
            else{
                if(cins>cmax){
                    cmax=cins;
                }
                cins=0;
                c++;
            }
        }                      
    }
    cout<<"la cardinalita' della famiglia e': "<< c<<endl;
    cout<<"l'insieme di cardinalita' massima e': "<< cmax<<endl;

    return 0;
}

















