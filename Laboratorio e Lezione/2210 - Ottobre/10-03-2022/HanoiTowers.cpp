

#include <iostream>
using namespace::std;


void TowerOfHhanoi(int n, char FromRod, char ToRod, char AuxRod){
    if(n==1){
        cout<<"Move disk 1 from "<< FromRod<< " To " << ToRod<<endl;
        return;
    }
    TowerOfHhanoi(n-1, FromRod, AuxRod, ToRod);
    cout<< "Move disk " << n << " from " << FromRod << " To " << ToRod<< endl;
    TowerOfHhanoi(n-1, AuxRod, ToRod, FromRod);
    return;
    
}


int main(){
    int n=4;
    TowerOfHhanoi(n,'A','C','B');
    return 0;
}