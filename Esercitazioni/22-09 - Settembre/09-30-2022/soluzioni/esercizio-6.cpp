#include <iostream>
using namespace std;

void print_row(int n) {
  for (int i = 0; i < n; ++i) {
    cout << "*";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;

  while (n > 0) {
    print_row(n);
    cin >> n;
  }

  return 0;
}
