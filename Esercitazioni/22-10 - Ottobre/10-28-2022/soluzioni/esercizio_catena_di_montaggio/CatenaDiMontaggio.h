#ifndef CATENA_DI_MONTAGGIO_H
#define CATENA_DI_MONTAGGIO_H

#include "List.h"

template <class T>
class CatenaDiMontaggio {

    public:
        void aggiungi(T elemento);
        void rimuovi();
        const T& prossimo() const;
        unsigned int size() const;
        
    private:
        List<T> l;
};

template <class T>
void CatenaDiMontaggio<T>::aggiungi(T elemento) {
    l.push_back(elemento);
}

template <class T>
void CatenaDiMontaggio<T>::rimuovi() {
    l.pop_front();
}

template <class T>
const T& CatenaDiMontaggio<T>::prossimo() const {
    return l.front();
}

template <class T>
unsigned int CatenaDiMontaggio<T>::size() const {
    return l.size();
}

#endif