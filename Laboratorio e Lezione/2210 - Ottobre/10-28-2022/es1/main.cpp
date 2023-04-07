
#include "calcolatrice.cpp"
#include <iostream>
using namespace std;


int main(){

    int a=10,b=20;
    Calcolatrice<int> intCalc(a,b);
    intCalc.mostraRisultati();

    float c=5.5,d=2.6;
    Calcolatrice<float> floatCalc(c,d);
    floatCalc.mostraRisultati();
    
    double e=1.6,f=7.4;
    Calcolatrice<double> doubleCalc(e,f);
    doubleCalc.mostraRisultati();

    return 0;
}