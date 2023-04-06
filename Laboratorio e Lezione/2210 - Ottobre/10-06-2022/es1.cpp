
#include <iostream>
using namespace::std;

const int DimBase = 10;

void resize(int *&v, int &capacity, int increment){
    
    int *Temp = new int[capacity+increment];
    for (int i = 0; i < capacity; i++)
    {
        Temp[i]=v[i];
    }
    delete[]v;
    v=Temp;
    capacity+=increment;
    return;
}

int main(){

    int *elenco = new int[DimBase];
    int size=0, elem, capacity=DimBase;

    while (cin>>elem)
    {
        if (size<capacity)
        {
            elenco[size++]=elem;
        }
        else{
            resize(elenco,capacity,DimBase);
            elenco[size++]=elem;
        }
    }
    return 0;
}
