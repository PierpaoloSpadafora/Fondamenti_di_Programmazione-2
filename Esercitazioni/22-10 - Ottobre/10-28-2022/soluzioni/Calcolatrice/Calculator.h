#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

template <class T> 
class Calculator {

	private: 
		T num1, num2;
	public: 
		Calculator(T n1, T n2) {
		num1 = n1;
		num2 = n2;
	}
 

	void displayResult();
	 
	T add();
	T subtract();
	T multiply();
	T divide();
 };

 template class Calculator<int>;
 template class Calculator<float>;
 
#endif
