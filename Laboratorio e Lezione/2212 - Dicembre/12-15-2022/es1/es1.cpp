

#include <iostream>
#include <string>
using namespace std;


class Prodotto{
private:
    string id;
    float prezzo;
public:
    Prodotto(string _id, float _prezzo): id(_id), prezzo(_prezzo){}

    friend ostream& operator<<(ostream& o, const Prodotto& p){
        return p.stampa(o);    
    }
    
    virtual void stampaPrezzoScontato() const{
        cout<<prezzo<<endl;
    }
    
    float getPrezzo() const{
        return prezzo;
    }
    string getId() const{
        return id;
    }
    
    virtual ~Prodotto(){
        
    }

protected:
    virtual ostream& stampa(ostream& out){
        out<<"Prodotto"<<id<<", "<<prezzo;
        return out;
    }
    
};

class Libro: public Prodotto{
private:
    string titolo;
    string autore;
public:
    Libro(string _id, float _prezzo, string _titolo, string _autore): 
    Prodotto(_id, _prezzo),
    titolo(_titolo),
    autore(_autore){}

    void StampaPrezzoScontato() const{
        cout<<(getPrezzo()-getPrezzo()*0,3);
    }

};

class Computer: public Prodotto{
private:
    string modello;
public:
    Computer(string _id, float _prezzo, string _modello): 
    Prodotto(_id, _prezzo), 
    modello(_modello){}
    void StampaPrezzoScontato(){
         cout<<(getPrezzo()-getPrezzo()*0,05)<<endl;
    }
protected:
    ostream& stampa(ostream& out)const{
        out<<"Computer: "<<getId<<", "<<"Prezzo: "<<getPrezzo()<<"Modello: "<<modello<<endl;                          
        return out;
    }
};



int main(){

    Prodotto* p1 = new Libro("Id1", 10.0, "I promessi Sposi", "Manzoni");
    Prodotto* p2 = new Computer("Id3", 700.0, "HP AX8P3");

    p1->StampaPrezzoScontato(); // Stampa attesa: 7.0    (10-30% sconto)
    p2->StampaPrezzoScontato(); // Stampa attesa: 665.0  (700-5% sconto)
    cout<<*p1<<endl; // Stampa attesa: Libro: ID1, 10.0, I promessi Sposi, Manzoni
    cout<<*p2<<endl; // Stampa attesa: Prodotto Id3, 700

    delete p1;
    delete p2;
    return;

    return 0;
}