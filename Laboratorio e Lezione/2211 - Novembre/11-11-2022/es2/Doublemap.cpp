

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

template <class T, class R>
class Doublemap{
private:
    unordered_map<T, R> hashmap1;
    unordered_map<R, T> hashmap2 ;
public:
    void add(T x, R y){
        hashmap1[x]=y;
        hashmap2[y]=x;
    }
    R getinfo(T x){
        return hashmap1[x];
    }
    T getinfo(R y){
        return hashmap2[y];
    }
};

int main(){
    Doublemap <int, string> d;

    d.add(2,"B");
    d.add(3,"C");

    cout<<d.getinfo(3)<<endl;
    cout<<d.getinfo("C")<<endl;

    return 0;
}