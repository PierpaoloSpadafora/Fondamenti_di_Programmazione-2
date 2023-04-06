#include "calcolatrice.h"
#include <iostream>

using namespace std;

template <class v>
void Calcolatrice<v>::mostraRisultati(){
    cout << "I numeri sono: " << num1 << " e " << num2 << "." << endl;
    cout << "La somma e': " << somma() << endl;
    cout << "La differenza e': " << sottrazione() << endl;
    cout << "Il prodotto e': " << moltiplicazione() << endl;
    cout << "La divisione e': " << divisione() << endl;
}

template <class v>
v Calcolatrice<v>::somma(){
    return num1+num2;
}
template <class v>
v Calcolatrice<v>::sottrazione(){
    return num1-num2;
}
template <class v>
v Calcolatrice<v>::moltiplicazione(){
    return num1*num2;
}
template <class v>
v Calcolatrice<v>::divisione(){
    return num1/num2;
}