#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> a;
    StampaStack(a);

    return 0;
}

void StampaStack(stack<int>&s){
    //caso base
    if(s.empty()){
        cout<<"|"<<endl;
        return;
    }
    //caso ricorsivo
    int x=s.top();
    s.pop();
    StampaStack(s);
    cout<<x<<" ";
    s.push(x);
}