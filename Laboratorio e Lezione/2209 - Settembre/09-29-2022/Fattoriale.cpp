

#include <iostream>
using namespace::std;

int fact(int n){
    int ret=1;
    while(n>1){
        ret*=n--;
    }
    return ret;
}

int main(){
    int n=5;
    cout<<n<<"! = "<<fact(n);
    return 0;
}
