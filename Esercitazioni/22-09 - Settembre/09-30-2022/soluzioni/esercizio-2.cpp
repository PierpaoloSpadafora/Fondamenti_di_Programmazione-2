#include <iostream>
using namespace std;

int main() {
  int pre, cur, suc;
  cin >> pre >> cur >> suc;

  int len = 3;
  int peaks = 0;

  while (suc > 0) {
    if (cur > pre and cur > suc) {
      peaks++;
      cout << cur << " " << len - 1 << endl;
    }

    pre = cur;
    cur = suc;
    cin >> suc;

    len++;
  }

  cout << "Numero di picchi massimi rilevati: " << peaks << endl;
  cout << "Numero totale di dati: " << len << endl;

  return 0;
}
