

//trovare il max e il submax tra 10 numeri positivi

#include <iostream>
using namespace::std;

int main(){
    int max=0,smax=0;
    for (int s = 0; s < 10; s++)
    {
        int val=0;
        cin>>val;
        if(val>max){            
            smax=max;
            max=val;
        }
        else{
            if (val>smax)
            {
                smax=val;
            }
            
        }
    }
    cout<<"l'smax e': "<<smax<<endl;
    cout<<"il max e': "<<max;
    return 0;
}