
#include <iostream>
using namespace::std;
int fatt(int n){
    if (n==0){
        return 0;
    }
    else if (n==1)
    {   
        return 1;
    }
    else 
    {
        return (n*fatt(n-1));
    }
}

int main(){
    int a;
    cout<<"\tCALCOLATORE DI FATTORIALE \n \tInserisci un numero: ";
    cin>>a;
    cout<<"\n\t\t"<<fatt(a)<<"\n\n";
    return 0;
}