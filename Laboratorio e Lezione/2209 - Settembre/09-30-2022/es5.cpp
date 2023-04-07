

/*
Scrivere una funzione che calcoli l’n-esimo numero della sequenza di Fibonacci,
definito come F(n) = F(n − 1) + F(n − 2), dove F(0) = 0, F(1) = 1.
*/


#include <iostream>
using namespace::std;

int fib(int x){
    if(x==1){
        return 1;
    }
    else if (x==0)
    {
        return 0;
    }
    else
    {
        return (fib(x-1)+fib(x-2));
    }
    
    
}

int main(){
    for (int i = 0; i < 10; i++)
    {
        if(i==0){
            cout<<fib(i);
        }
        else{
            cout<<","<<fib(i);
        }
    }
      
}