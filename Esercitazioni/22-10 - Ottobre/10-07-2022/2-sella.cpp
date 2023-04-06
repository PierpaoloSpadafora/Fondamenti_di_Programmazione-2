#include <iostream>
using namespace std; 

const int N = 3;

bool sella(int M[][N], int& si, int& sj) {
	si = -1;
	sj = -1; 

	int row_max[N] = {0};
	int col_max[N] = {0}; 
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (M[i][j] > M[i][row_max[i]]) row_max[i] = j; 
			if (M[i][j] > M[col_max[j]][i]) col_max[j] = i;
		}
	}

	for (int i = 0; i < N; ++i) {
		if (row_max[i] == col_max[i]) {
			si = row_max[i];
			sj = col_max[i]; 
			return true; 
		}
	}

	si = -1; 
	sj = -1; 
	return false;
}

void read_matrix(int M[][N]) {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> M[i][j]; 
		}
	}
}

int main() {
	int M[N][N];
	read_matrix(M); 

	int si, sj;
	bool has_sella = sella(M, si, sj); 

	if (has_sella) {
		cout << "La matrice ha un punto di sella alle coordinate: (" << si << ", " << sj << ") ";
		cout << "Che corrisponde al punto M[" << si << "][" << sj << "]=" << M[si][sj] << endl;
	} else {
		cout << "La matrice non ha un punto di sella"; 
	}

	return 0; 
}
