#include <iostream>
using namespace std;

int pow(int base, int exp) {
  if (exp == 0)
    return 1;

  int res = 1;
  while (exp > 0) {
    res *= base;
	exp--;
  }
  return res;
}

int main() {
  int base, exp;
  cin >> base >> exp;

  cout << pow(base, exp) << endl;

  return 0;
}
