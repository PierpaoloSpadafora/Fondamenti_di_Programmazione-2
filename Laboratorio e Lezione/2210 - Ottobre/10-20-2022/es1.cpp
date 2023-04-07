#include <iostream>
using namespace::std;

class MyClass{
    public:
        int x;
        MyClass(int val): x(val){};
        int get(){return x;};
        /*  restituisce un riferimento costante 
            const int& get(){return x;}; */
        /*  
            const int& get() const {return x;} */
};

int main(){
    const MyClass foo(10);
    // NO foo.x=20; 
    cout<<foo.x<<endl;
    /* NO cout<<foo.get()<<endl;
            bisognerebbe modificare la funzione di get in: 
            int get()const{return x;}; */
}