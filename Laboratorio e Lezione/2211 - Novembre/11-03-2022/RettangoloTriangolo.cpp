#include <iostream>
using namespace std;

class Poligono{
protected:
    int base,altezza;
public:
    void set_values(int a, int b){
        base=a;
        altezza=b;
    }

// aggiungendo "virtual" se c'è un estensione della classe che
// fa l'overloading della funzione Poligono.area() equivarrà a
// EstensioneDellaClasse.area()
virtual int area(){
    return 0;
}
};

class Rettangolo:public Poligono{
public:
    int area(){
        return base*altezza;
    }
};

class Triangolo: public Poligono{
public:
    int area(){
        return (base*altezza)/2;
    }
};

int main(){
    Rettangolo r;
    Triangolo t;
    Poligono *pp1=&r; 
    // Rettangolo è una specificazione di Poligono, un rettangolo
    // possiede una sua parte "poligono"
    Poligono *pp2=&t;
    pp1->set_values(4,5);
    pp2->set_values(4,5);   // set values appartiene a poligono
                            // area() no, quindi non è legale 
                            // scrivere ppi->area()
    cout<<r.area()<<endl; // 20
    cout<<t.area(); // 10
}