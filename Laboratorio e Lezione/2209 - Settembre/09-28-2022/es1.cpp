
//Calcolare distanza tra due punti
#include <iostream>
using namespace::std;
#include <cmath>

//strutture dati
struct punto
{
    int x;
    int y;
};

int main(){
    punto p1,p2;
    double distanza;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    distanza= sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    cout<<distanza;
    return 0;
}


/*
Varianti

int main(){
    punto p1; p1.x=3, p1.y=4;
    
    punto *pp1=&p1; //pp1 indirizzo che contiene gli indirizzi di memoria di p1
    
    cout << (*pp1).x << (*pp1).y;
};

*********************

int main(){
    punto p1; p1.x=3, p1.y=4;
    
    punto *pp1=&p1; //pp1 indirizzo che contiene gli indirizzi di memoria di p1
    
    cout << pp1->x << pp1->y;
};

*/