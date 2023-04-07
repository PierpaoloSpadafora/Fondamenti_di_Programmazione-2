#include <iostream>
using namespace std;

class Mother{
public: 
    Mother(){cout<<"Mother: nessun parametro\n";}
    Mother(int a){cout<<"Mother: un parametro\n";}
};

class Daughter: public Mother{
public:
    Daughter(int a){cout<<"Daughter: un parametro\n";}
};

class Son: public Mother{
public:
    Son(int a):Mother(a){
        cout<<"Son: un parametro\n";
    }
};


int main(){
    Daughter Kelly(0);
    cout<<"\n";
    Son Bud(0);
    
    return 0;
}