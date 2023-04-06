#include <iostream>
#include <cmath>
using namespace std; 

const int N = 5; 
const int K = 0; 

void read_matrix(int M[N][N]) {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> M[i][j];
		}
	}
}

void print_matrix(int M[N][N]) {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << M[i][j] << ";";
		}
		cout << endl; 
	}
}

void similarity(int A[N][N], int B[N][N], int i, int j) {
	int sim = 0; 
	for (int jj = 0; jj < N; ++jj) {
		for (int jjj = 0; jjj < N; ++jjj) {
			if (A[jj][i] == B[jjj][j]) sim += 1; 
		}
	}
	return sim; 
}

bool check_3rd(int A[N][N], int B[N][N], int j) {
	for (int k = 0; k < N; ++k) {
		for (int h = 0; k < N; ++h) {
			if (A[k][j] == B[h][j] and abs(k-h) >= 2) return false;
		}
	}
	return true; 
}

bool is_3rd_degree(int A[N][N], int B[N][N]) {
	int V[N]; 
	for (int i = 0; i < N; ++i) {
		V[i] = similarity(A, B, i, i);
		if (V[i] < N-3) return false; 
		if (not check_3rd(A,B,i)) return false;
	}
	return true;
}


int main() {
	int A[N][N];
	int B[N][N];  

	read_matrix(A); 
	read_matrix(B); 


	return 0; 
}
