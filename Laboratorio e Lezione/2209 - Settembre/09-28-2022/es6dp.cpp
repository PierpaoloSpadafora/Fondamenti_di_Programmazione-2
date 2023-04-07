
//  leggere una sequenza di n cifre binarie con n letto da input.
//  individuare la lunghezza della massima 
//  sottosequenza costituita da cifre uguali

#include <iostream>
using namespace::std;

int main(){
    int n, lung, lung_max=0, cifra, ultimo, cifra_max;
    cout<<"Inserisci il numero di cifre da leggere:";
    cin>>n;
    if(n>0){
        cin>>cifra;
        ultimo=cifra;
        lung=1;
        n--;
        while (n>0)
        {
            cin>>cifra;
            n--;
            if(cifra==ultimo){
                lung+=1;
            }
            else{
                if(lung>lung_max){
                    lung_max=lung;
                    cifra_max=ultimo;
                }
                ultimo =cifra;
                lung=1;
            }
        }
        if (lung>lung_max)
        {
            lung_max=lung;
            cifra_max=ultimo;
        }
        cout<<lung_max<<" "<<cifra_max;
        return 0;       
    }
    else{
        cout<<"errore, non posso leggere nessun numero";
    }
}