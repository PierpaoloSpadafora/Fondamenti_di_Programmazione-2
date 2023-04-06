


#include <list>
#include <algorithm>
#include <vector>

using namespace std;

class FakeList: protected list<int>{

public:
    int getFakeSize() const{
        return ((this->size()) *2);
    }
    void insert(int el){
        if( find(this->begin(),this->end(),el)!= this->end() ){
            this->push_back(el);
        }
        else{
            this->push_front(el);
        }
    }
    void fakeSort(bool s){
        if(s){
            this->sort();
        }
        else{
            this->sort(greater<int>());
        }
    }
    void fakeClear(bool c){
        if(c){
            this->clear();
        }
    }




};

