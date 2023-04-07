//File: vector.h

#include <iostream>
#include <assert.h>
template <class R>
class Vector{
    R* vec;
    int sz, cap; //size e capacity
public:
    //costruttore di base
    Vector();
    //costruttore di copia 
    Vector(const Vector<R>&);
    //distruttore
    ~Vector();
    //getters di size e capacity
    int size() const;
    int capacity() const;
    R operator[](int ) const;
    R& operator[](int );
    Vector& operator = (const Vector <R>&);
    void push_back(const R&)
    const R& back() const;
    void pop_back();
    void reserve(int size);
    void resize(int size);
}

template <class R>
Vector<R>::Vector(){
    sz=0;
    cap=1;
    vec = new R[cap];
}

template <class R>
Vector<R>::~Vector(){
    delete[]vec;
}

template<class R>
R& Vector<R>::operator[](int i){
    assert(i>=0&&i<sz);
    return vec[i];
}

template<class R>
void Vector<R>::push_back(const R& e){
    if (sz==cap)
    {
        reserve(sz*2);
        vec[sz]=e;
        sz++;
    }
}

template<class R>
void Vector<R>::reserve(int size){
    if (size>cap)
    {
        cap=size;
        r*tmp=new R[cap];
        for (int i = 0; i < sz; i++)
        {
            tmp[i]=vec[i];
        }
        delete[]vec;
        vec=tmp;
    }
}



template <class R>
void Vector<R>::resize(int size){
    reserve(size);
    sz=size;
}

