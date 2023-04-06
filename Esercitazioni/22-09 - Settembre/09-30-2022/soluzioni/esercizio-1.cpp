#include <iostream>
using namespace std;

int somma(int x, int y) { return x + y; }

int prodotto(int x, int y) {
  int res = 0;
  while (x > 0) {
    res = somma(res, y);
	x--;
  }
  return res;
}

int main() {
  int x, y;
  cin >> x >> y;

  cout << "x+y=" << somma(x, y) << endl;
  cout << "x*y=" << prodotto(x, y) << endl;
}
