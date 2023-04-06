#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int sets = 0;
  int current_set_cardinality = 0;
  int max_set_cardinality = 0;

  while (n != -1) {
    if (n == 0) {
      sets++;
      max_set_cardinality = (current_set_cardinality > max_set_cardinality)
                                ? current_set_cardinality
                                : max_set_cardinality;
      current_set_cardinality = 0;
    } else {
      current_set_cardinality++;
    }
    cin >> n;
  }

  cout << "Numero di insiemi nella famiglia: " << sets << endl;
  cout << "Massima cardinalità degli insiemi: " << max_set_cardinality << endl;

  return 0;
}
