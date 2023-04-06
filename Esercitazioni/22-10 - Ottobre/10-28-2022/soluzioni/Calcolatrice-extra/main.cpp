#include <calc.hpp>
#include <iostream>
using namespace std; 

int main() {
	Calcolatrice<float> calc;
	double x, y;

	char cmd = 'z';
	int i, j, n, k;

	while (cmd != 'E') {
		cout << ">>> Inserire un comando: ";
		cin >> cmd; 

		if (cmd == 'R') {
			cout << "Inserire la sequenza: ";

			cin >> n;
			calc.leggi_sequenza(n);
		} else if (cmd == '+') {
			cin >> x >> y >> k;
			calc.aggiungi(x+y,k); 
		} else if (cmd == '-') {
			cin >> x >> y >> k;
			calc.aggiungi(x-y,k);
		} else if (cmd == '*') {
			cin >> x >> y >> k;
			calc.aggiungi(x*y,k);
		} else if (cmd == 'W') {
			cin >> i >> j;
			cout << "W(" << i << ", " << j << ") = " << calc.finestra(i,j) << endl;
		} else if (cmd == 'M') {
			cout << "La media della sequenza è: " << calc.media() << endl; 
		} else if (cmd == 'C') {
			calc.reset();
		} else if (cmd == 'E') {
			cout << "Arrivederci e a presto!\n";
		} else if (cmd == 'P') {
			cout << "La sequenza corrente è: ";
			calc.print();
			cout << endl; 
		}
	}

	return 0; 
}
