#include <iostream>
using namespace std; 

const int N = 5; 

// Returns true if, for all x, y M[x][y] has the same value - x in [i, i+k] and y in [j, j+k]
bool check_submat_eq(int M[N][N], int i, int j, int k) {
	int value = M[i][j]; 
	for (int ii = 0; ii < k; ++ii) {
		for (int jj = 0; jj < k; ++jj) {
			if (M[ii+i][jj+j] != value) return false;
		}
	}
	return true; 
}

// Returns the max dimension of a matrix we can expand to the right and downwards starting from M[ri][rj]
int expand(int M[N][N], int ri, int rj) {
	int value = M[ri][rj]; 

	// Check max dim on the left
	int max_exp_right = 0;
	bool can_expand_right = true; 
	for (int j = 0; j+rj < N and can_expand_right; ++j) {
		if (M[ri][j+rj] == value) max_exp_right++;
		else can_expand_right = false;
	}

	// Check max dim down
	int max_exp_down = 0;
	bool can_expand_down = true; 
	for (int i = 0; i+ri < N and can_expand_down; ++i) {
		if (M[i+ri][rj] == value) max_exp_down++;
		else {
			can_expand_down = false;
		}
	}

	int min_exp = (max_exp_right < max_exp_down) ? max_exp_right : max_exp_down; 
	while (not check_submat_eq(M, ri, rj, min_exp) and min_exp >= 1) min_exp--; 

	return min_exp; 
}

int search_best(int M[N][N], int& ri, int& rj, int& value) {
	int best_expansion = 0; 
	int best_i = 0; 
	int best_j = 0; 

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			int ij_expansion = expand(M,i,j);
			if (ij_expansion > best_expansion) {
				best_expansion = ij_expansion;
				best_i = i; 
				best_j = j;
			}
		}
	}
	ri = best_i; 
	rj = best_j; 
	value = M[ri][rj]; 
	return best_expansion; 
}

struct solution {
	int i;
	int j; 
	int v;
	int d; 
};

void print_solution(const solution& s) {
	cout << "Dimensione massima di sottomatrice: " << s.d << endl; 
	cout << "Coordinate del primo punto: [" << s.i << ", " << s.j << "]" << endl; 
	cout << "Valore: " << s.v << endl; 
}

solution search_best_2(int M[N][N]) {
	int best_expansion = 0; 
	int best_i = 0; 
	int best_j = 0; 

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			int ij_expansion = expand(M,i,j);
			if (ij_expansion > best_expansion) {
				best_expansion = ij_expansion;
				best_i = i; 
				best_j = j;
			}
		}
	}

	solution s; 
	s.i = best_i; 
	s.j = best_j; 
	s.v = M[best_i][best_j];
	s.d = best_expansion;
	return s; 
}


int main() {
	int M[N][N] = {
		{1, 2, 3, 4, 5},
		{2, 2, 2, 3, 1},
		{2, 2, 2, 4, 5}, 
		{2, 2, 2, 1, 3}, 
		{3, 4, 1, 5, 6}
	};

	solution s = search_best_2(M);
	print_solution(s); 
 
}
