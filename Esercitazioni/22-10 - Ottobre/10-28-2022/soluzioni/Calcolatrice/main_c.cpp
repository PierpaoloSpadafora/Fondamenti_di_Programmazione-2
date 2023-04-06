#include "Calculator.cpp"
#include <iostream>
using namespace std ;

int main() {
	Calculator<int> intCalc(2, 1);
	Calculator<float> floatCalc(2.4, 1.2);
	cout << "Int results:" << endl;
	intCalc.displayResult();
	cout << endl << "Float results:" << endl;
	floatCalc.displayResult();
return 0;
}
