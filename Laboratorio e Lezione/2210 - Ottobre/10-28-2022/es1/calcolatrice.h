#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

template<class v>
class Calcolatrice{
private:
    v num1,num2;
public:
    Calcolatrice(v n1, v n2){
    	num1 = n1;
		num2 = n2;
    }
    void mostraRisultati();

    v somma();
    v sottrazione();
    v moltiplicazione();
    v divisione();

};

#endif


