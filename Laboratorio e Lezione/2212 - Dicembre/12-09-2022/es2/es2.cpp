

#include <iostream>
#include "GrafoNonOrientato.h"



using namespace std;




int main(){

    GrafoNonOrientato gno(8);
    gno(1,2,true);
    gno(3,6,true);
    gno(1,4,true);
    gno(4,3,true);

    return 0;
}