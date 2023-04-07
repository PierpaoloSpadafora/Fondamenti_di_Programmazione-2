

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){

    int n, k, somma=0;
    cout<<"Inserisci n"<<endl;
    cin>>n;
    cout<<"Inserisci k"<<endl;
    cin>>k;

    vector<pair<int,int>> vec(n);
    for(int i = 0; i < n; i++) {
        cin>>vec[i].first;
        vec[i].second=i;
    }
    sort(vec.begin(), vec.end(), greater<>());

    cout<<"Sottosequenza Ottima: ";
    for (int i = 0; i < k; i++)
    {
        somma+=vec[i].first;
        cout<<vec[i].first<<" ";
    }
    cout<<endl;
    
    cout<<"Indici Ottimi: ";
    for (int i = 0; i < k; i++)
    {
        cout<<vec[i].second<<" ";
    }
    cout<<endl;

    cout<<"Somma: "<<somma<<endl;

    return 0;
}




