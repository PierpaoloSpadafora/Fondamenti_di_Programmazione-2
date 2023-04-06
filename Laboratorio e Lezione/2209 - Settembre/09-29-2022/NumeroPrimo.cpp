

#include <iostream>
using namespace::std;

bool primo(int n){
    for (int i = n/2; i > 1; i--)
    {
        if (n%i==0)
        {
            return false;
        }        
    }
    return true;
}

int main(){
    int a;
    cin>>a;
    if(primo(a)){
        cout<< "E' PRIMO !!!!!"<<endl;
    }
    else{
        cout<< "NON E' PRIMO !!!!!"<<endl;
    }
    return 0;
}
