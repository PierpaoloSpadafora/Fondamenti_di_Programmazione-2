

/*
Progettare una classe GestoreValori che sia in grado di gestire una sequenza di coppie (int-char). In 
particolare, la classe GestoreValori deve implementare almeno i seguenti metodi:
1. inserisciCoppia(int a, char b) che salvi il nuovo intero a e il nuovo char b; si noti che in generale ad 
uno stesso carattere possono essere associati più interi
2. numCoppie() che restituisca il numero di coppie (int-char) attualmente presenti;
3. getRisultato() che restituisca -1.
Implementare, successivamente, altre due classi: GestoreValoriA e GestoreValoriB. In particolare, le due 
classi devono estendere opportunamente GestoreValori e reimplementare, facendo uso del polimorfismo, 
il metodo getRisultato().
In particolare:
1. Il metodo getRisultato() in GestoreValoriA deve restituire la somma di tutti gli interi inseriti 
accoppiati al carattere ‘a’. Se non è presente alcun valore associato al carattere ‘a’, restituire 0.
2. Il metodo getRisultato() in GestoreValoriB deve calcolare la media (intera) degli interi inseriti 
accoppiati al carattere ‘b’. Se non è presente alcun valore associato al carattere ‘b’, restituire 0.
La scelta delle classi, dei campi e dei metodi da utlizzare ed implementare, oltre a quelli richiesti dalla 
traccia, è libera. Verrà valutata, oltre che la correttezza del programma, anche la capacità di progettazione 
e l’efficienza/chiarezza della soluzione
*/




using namespace std;

class GestoreValori{
protected:
    unordered_map<int,char> data;
public:
    void inserisciCoppia(int _a, char _b){
        data[_a]=_b
    }
    int numCoppie() const{
        return (data.size());
    }
    virtual int getRisultato() const{
        return -1;
    }
};


class GestoreValoriA: public GestoreValori{

public:

    // può essere anche omesso
    void inserisciCoppia(int _a, char _b){
        GestoreValori::inserisciCoppia(_a, _b);
    }

    int getRisultato(){
        int s=0;
        for(auto i=data.begin(); i!=data.end(); i++){
            auto p=*i;
            if(p.second=="a"){
                s+=p.first;
            }
        }
        return s;
    }
};


class GestoreValoriB: public GestoreValori{

public:
    // può essere anche omesso
    void inserisciCoppia(int _a, char _b){
        GestoreValori::inserisciCoppia(_a, _b);
    }
       int getRisultato(){
        int s=0;
        for(auto i=data.begin(); i!=data.end(); i++){
            auto p=*i;
            if(p.second=="b"){
                s+=p.first;
            }
        }
        return s;
    }
};


int main(){



    return 0;
}