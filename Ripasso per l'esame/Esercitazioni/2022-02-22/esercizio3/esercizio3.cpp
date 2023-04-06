


#include <list>
#include "AlberoB.h"

using namespace std;


AlberoB<int> cerca( const AlberoB<int> a, int x){
    if(a.nullo()||a.radice()==x){
        return a;
    }
    AlberoB<int> temp=cerca(a.figlio(SIN), x);
    if(!temp.nullo()){
        return temp;
    }
    return cerca(a.figlio(DES), x);
}


list<int> esercizio3 (AlberoB<int> a, int x){

    list<int> result;
    AlberoB<int> t = cerca(a,x);
    if(t.nullo() || !t.foglia()){
        result.push_back(-1);
    }
    else{
        result.push_front(t.radice());
        t=t.padre();
        while(!t.nullo()){
            result.push_front(t.radice());
            t=t.padre();
        }
    }
    return result;
}

int main(){

    return 0;
}