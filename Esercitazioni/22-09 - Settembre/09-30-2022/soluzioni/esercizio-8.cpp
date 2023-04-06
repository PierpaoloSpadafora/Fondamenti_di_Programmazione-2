#include <cmath> // pow, oppure esercizio 7
#include <iostream>

using namespace std;

int ilog(int a, int b) {
  if (a == 1)
    return 0;

  int c = 1;
  int val = pow(b, c);
  while (val < a) {
    c++;
    val = pow(b, c);
  }

  return (val == a) ? c : -1;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << ilog(a, b) << endl;
  return 0;
}
