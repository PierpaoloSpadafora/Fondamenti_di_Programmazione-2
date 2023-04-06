// DEFINIRE UNA CLASSE INSIEME (in termini di insieme matematico)
// CON I CLASSICI OPERATORI SUGLI INSIEMI: add, remove, isIn, unione, intersezione, differenza

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

#ifndef INSIEME_H
#define INSIEME_H


template <class T>
class insieme{
    vector<T> s;
public:
    insieme(){};
    insieme(const insieme<T>& set):s(set.s){}
    bool empty() const;
    bool add(const T& e);
    bool remove(const T& e);
    bool isIn(const T& e);

    insieme<T>& unionTo (const insieme<T> &set);
    insieme<T>& intersectTo (const insieme<T> &set);
    insieme<T>& differenceWith (const insieme<T> &set);


    template<class U>
    friend ostream& operator<< (ostream& o,const insieme<U>&);
};

template<class T>
bool insieme<T>::empty() const {
    return s.size()==0;
}

template<class T>
bool insieme<T>::add(const T &e) {
    if (find(s.begin(), s.end(), e) != s.end())
        return false;
    s.push_back(e);
    return true;
}

template<class T>
ostream& operator<< (ostream &o, const insieme<T> &set) {
    for (int i=0; i<set.s.size(); i++) {o<<set.s[i]<<" ";}
    o<<endl;
    return o;
}

template<class T>
bool insieme<T>::remove(const T &e) {
    auto it=find(s.begin(), s.end(),e);
    if (it != s.end()) //l'ho trovato
    {
        s.erase(it);
        return true;
    }
    return false;
}

template<class T>
bool insieme<T>::isIn(const T &e) {
    return find(s.begin(), s.end(), e) != s.end();
}

template<class T>
insieme<T> &insieme<T>::unionTo(const insieme<T> &set) {
    insieme<T> *temp=new insieme<T>(set);
    for (int i=0; i<s.size();i++) temp->add(s[i]);
    return *temp;
}

template<class T>
insieme<T> &insieme<T>::intersectTo(const insieme<T> &set) {
    insieme<T> *temp=new insieme<T>();

    for (int i=0; i<s.size();i++){
        if (find(set.s.begin(),set.s.end(),s[i])!=set.s.end()) temp->add(s[i]);
    }
    return *temp;
}

template<class T>
insieme<T> &insieme<T>::differenceWith(const insieme<T> &set) {
    insieme<T> *temp=new insieme<T>();
    for (int i=0; i<s.size();i++){
        if (find(set.s.begin(),set.s.end(),s[i])==set.s.end()) temp->add(s[i]);
    }
    return *temp;
}


#endif

int main() {

    insieme<int> set, set2;
//    if (set.empty()) {cout<<"vuoto"<<endl;}


    set.add(1);
    set.add(2);
    set.add(3);
    cout<<set;
    if (set.remove(1)) cout<<"rimosso 1\n";
    if (!set.remove(1)) cout<<"1 non c'e' piu'\n";
    if (set.isIn(2)) cout<<"trovato 2\n";
    set2.add(3); set2.add(4);
    insieme<int> set3= set.unionTo(set2);
    cout<<"union of "<<set<<" and "<<set2<<" is "<<set3;
    set=set3.intersectTo(set2);
    cout<<"intersection of "<<set2<<" and "<<set3<<" is "<<set;
    cout<<"elements in "<<set3<<" and not in "<<set2<<" are "<<set3.differenceWith(set2);

}
