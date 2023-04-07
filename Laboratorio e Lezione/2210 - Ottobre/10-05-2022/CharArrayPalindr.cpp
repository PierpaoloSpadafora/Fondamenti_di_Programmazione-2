
/*
Leggere da input una parola terminata da un punto.
determinare se la parola è palindroma.
*/

#include <iostream>
using namespace::std;

const int maxdim = 100;

void LeggiParola(char v[], int &dim){
    char c;
    dim = 0;
    cin>>c;
    while ( (c!='.') && (dim<maxdim) ){
            v[dim] = c;
            dim++;
            cin>>c;
    }
    return;
}

bool Palindroma(char v[], int dim){
    bool TrovatoDiverso;
    for (int i = 0; (i < dim/2) && !TrovatoDiverso ; i++)
    {
        if(v[i]!=v[dim-1-i]){
            TrovatoDiverso=true;
        }
    }
    if (TrovatoDiverso)
    {
        return false;
    }
    else{
        return true;
    }
    
    
    return TrovatoDiverso;
}

int main(){

    int dim=0;
    char v[dim];
    LeggiParola(v, dim);

    if(Palindroma(v, dim)){
        cout<<"E' PALINDROMA.\n"<<endl;
    }
    else{
        cout<<"NON E' PALINDROMA\n"<<endl;
    }

    return 0;
}




