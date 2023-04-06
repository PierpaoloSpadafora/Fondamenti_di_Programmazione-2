
#include <iostream>
#include "SymmetricMatrix.cpp"

using namespace std;

int main(){

    SymmetricMatrix<int> m(4, 0);
    int cont=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            m(i,j)=cont;
            cont++;
        }
    }
    return 0;
}