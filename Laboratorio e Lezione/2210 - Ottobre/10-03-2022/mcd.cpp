

#include <iostream>
using namespace::std;

int mcd(int x, int y){
    if (y==0)
    {
        return x;
    }
    else if(y>0)
    {
        int r;
        r = x%y;
        if(r==0){
            return y;
        }
        else{
            return (mcd(y,r));
        }
    }
    else{
        return 0;
    }
    
    
}


int main(){
    int x,y;
    cout<<"\tCALCOLATORE DI MCD \n \tInserisci il primo numero: ";
    cin>>x;
    cout<<"\tInserisci il secondo numero: ";
    cin>>y;

    cout<<"\n\t L'MCD e': "<<mcd(x,y)<<"\n\n";

    return 0;
}