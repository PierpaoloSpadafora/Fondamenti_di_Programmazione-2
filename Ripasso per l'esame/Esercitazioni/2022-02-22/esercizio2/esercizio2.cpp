/*

Definire una classe FakeList che erediti opportunamente da list<int> e implementi i seguenti 
metodi:
1. int getFakeSize() const: che restituisce la dimensione della lista raddoppiata;
2. void insert(int el): che inserisce el in coda se el è già presente nella lista, in testa altrimenti;
3. void fakeSort(bool s): che ordina la lista in ordine crescente se s è true, in ordine 
decrescente altrimenti;
4. void fakeClear(bool c): che svuota la lista se c è true e non fa nulla altrimenti.
La traccia richiede esplicitamente che dal main non sia possibile invocare i metodi propri della 
classe list su oggetti di tipo FakeList.
Ad esempio, nel main non deve essere possibile eseguire: 
 FakeList l;
cout << l.size();
Nell’implementazione fare in modo che, se la classe FakeList viene ulteriormente estesa tramite 
ereditarietà, le classi figlie di FakeList possano comunque accedere ai metodi di list<int>.

*/

#include <list>
using namespace std;

class FakeList: protected list<int>{

public:
    int getFakeSize(){
        return this->size()*2;
    }
    void insert(int el){
        if(find(this->begin(),this->end(),el)!=this->end()){
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


int main(){


    return 0;
}