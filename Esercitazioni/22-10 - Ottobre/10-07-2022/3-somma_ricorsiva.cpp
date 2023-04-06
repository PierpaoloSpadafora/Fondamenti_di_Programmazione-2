#include <iostream>
using namespace std;

const int ARRAY_LENGTH = 5;

int somma(int a[ARRAY_LENGTH], int i, int sum) {
	if (i == ARRAY_LENGTH)
		return sum;
	return somma(a,i+1,sum+a[i]);
	}


int main() {
	int a[ARRAY_LENGTH];
	for (int i = 0; i < 5; ++i) {
		cin >> a[i]; 
	}
	int sum = 0;
	cout << "\nla somma è "<<somma(a, 0, sum) << endl; 
return 0;
}



