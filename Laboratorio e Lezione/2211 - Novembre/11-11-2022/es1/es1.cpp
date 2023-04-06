#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main  (){

    int n;                          // 4
    cin  >> n;

    int m;                          // 6
    cin >> m;

    unordered_map <int, pair<bool, int>> h;
    vector<int> v(n);           

    for (int i = 0; i <n; i++){
        cin >> v[i];                //  [2,3,3,1]   
        h[v[i]].first = true;       //  h [()(true,0)(true,0)(true,0)]
        h[v[i]].second = i;         //  (true,0)
    }
     for (int i = 0; i <n; i++){
        int target = m - v[i];
        if (h[target].first && h[target].second != i){
            cout << "trovata soluzione: " << v[i] << " " << v[h[target].second] << endl;
            return 0;
        }
    }

    return 0;
}
