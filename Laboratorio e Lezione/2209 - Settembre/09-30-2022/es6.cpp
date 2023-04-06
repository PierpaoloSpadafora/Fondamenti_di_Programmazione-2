

/*
Scrivere una funzione che stampi l’istogramma di una sequenza di numeri interi
terminata da un numero negativo.
*/


#include <iostream>
using namespace::std;

int istogramma(int x){
    for (int i = 0; i < x; i++)
    {
        cout<<"*";
    }
    cout<<endl;
       
}

int main(){
    bool a=true;
    int input=0;
    while (a=true)
    {   
        cin>>input;
        if(input==-1){
            a=false;
        }
        else{
            istogramma(input);
        }
    }
          
}