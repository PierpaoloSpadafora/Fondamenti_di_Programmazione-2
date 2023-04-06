#include <iostream>
using namespace std;

int f(int x, int y) { return 2 * x + y * y; }

int main() {
  int x, y;
  cin >> x >> y;
  cout << f(x, y) << endl;

  return 0;
}
