



#include <iostream>
using namespace::std;
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int a;
    cout<<"\tCALCOLATORE DI FATTORIALE \n \tInserisci un numero: ";
    cin>>a;
    cout<<"\t\t";
    for (int i = 0; i < a; i++)
    {
        cout<<""<<fib(i)<<",";
    }
    return 0;
}