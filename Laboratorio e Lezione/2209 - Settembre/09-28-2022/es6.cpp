
//  leggere una sequenza di n cifre binarie con n letto da input.
//  individuare la lunghezza della massima 
//  sottosequenza costituita da cifre uguali

#include <iostream>
using namespace::std;

int main(){

    int n,a,b;
    cout<<"Inserisci la lunghezza della sequenza: ";
    cin>>n;
    int lmax=0, l=0;
    cin>>a;

    for (int i = 1; i < n; i++)
    {
        cin>>b;
        if (a==b){
            l++;
        }
        else{
            if(lmax<l){
                lmax=l;
            }
            l=0;
        }
    }
    cout<<"Lmax: "<<lmax;
    


    return 0;
}