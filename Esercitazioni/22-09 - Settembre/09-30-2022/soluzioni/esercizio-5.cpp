#include <iostream>
using namespace std;

int fib(int n) {
  if (n < 2)
    return n;

  int a = 0;
  int b = 1;
  n -= 1;

  while (n > 0) {
    int tmp = b;
    b = a + b;
    a = tmp;
	n--;
  }

  return b;
}

int main() {
  int n;
  cin >> n;

  cout << fib(n) << endl;

  return 0;
}
