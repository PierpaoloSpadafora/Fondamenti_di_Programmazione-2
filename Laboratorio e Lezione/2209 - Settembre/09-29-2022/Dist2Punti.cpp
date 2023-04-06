

#include <iostream>
#include <cmath>
using namespace::std;

struct punto
{
    int x;
    int y;
};

double distanza(const punto &p1, const punto &p2){
    double dist;
    dist= sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    return dist;
}

int main(){
    punto p1,p2;
    double d;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    d=distanza(p1,p2);
    cout<<d;
    return 0;
}