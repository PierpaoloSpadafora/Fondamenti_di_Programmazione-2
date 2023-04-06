#include "Calculator.h"
#include <iostream>
using namespace std; 

template<class T>
void Calculator<T>::displayResult() {
		cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
}
	 
template<class T>
T Calculator<T>::add() {
	return num1 + num2;
}

template<class T>
T Calculator<T>::subtract() {
	return num1 - num2;
}

template<class T>
T Calculator<T>::multiply() {
	return num1 * num2;
}

template<class T>
T Calculator<T>::divide() {
	return num1 / num2;
}