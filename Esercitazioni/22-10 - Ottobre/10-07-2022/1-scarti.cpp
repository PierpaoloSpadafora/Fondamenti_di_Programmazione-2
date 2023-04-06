#include <iostream>
using namespace std; 

const int N = 4; 

void read_array(int A[N]) {
	for (int i = 0; i < N; ++i) {
		cin >> A[i]; 
	}
}

int find_max(int A[N]) {
	int imax = 0; 

	for (int i = 0; i < N; ++i) {
		if (A[i] > A[imax]) {
			imax = i; 
		}
	}
	return imax;
}

int main() {
	int A[N]; 
	read_array(A); 

	int max = A[find_max(A)];
	for (int i = 0; i < N; ++i) {
		cout << "Scarto di A[" << i << "]=" << A[i] - max << endl; 
	}

	return 0; 
}
