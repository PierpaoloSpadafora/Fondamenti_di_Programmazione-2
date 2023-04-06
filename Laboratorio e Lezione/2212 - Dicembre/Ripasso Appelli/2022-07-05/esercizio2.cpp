

/*#include <iostream>
#include <string>

using namespace std;




class Carriera{
private:
	int numAppelli;
	bool *esiti=new bool[numAppelli];
	string *nomiEsami=new string[numAppelli];
public:
	Carriera(){
		numAppelli = 0;
	}
    Carriera(Carriera& carr){
        numAppelli=carr.numAppelli;
        esiti=carr.esiti;
        nomiEsami=carr.nomiEsami;
    }
    ~Carriera(){
        delete [] esiti;
        delete [] nomiEsami;
    }
    void aggiungiTentativo(string nome, bool esito){

    }
    void stampa(){
        cout<<this->numAppelli<<"\n\n"<<this->esiti<<"\n\n"<< this->nomiEsami<<endl;
    }
	
};


int main(){

    Carriera a=Carriera();

    a.stampa();


    return 0;
}*/



#include <iostream>
#include <vector>
#include <utility>




using namespace std;



class AutoF1 {
	int numero_pilota;
	string nome_pilota;
	string squadra;

public:
	AutoF1(int numero, const string& nome, const string& squadra_) :
		numero_pilota(numero), nome_pilota(nome), squadra(squadra_) {}

	AutoF1(const AutoF1& a) :
		numero_pilota(a.numero_pilota), nome_pilota(a.nome_pilota), squadra(a.squadra) {}

	int getNumeroPilota() const { return numero_pilota; }
	string getNomePilota()  const { return nome_pilota; }
	string getSquadra() const { return squadra; }
};

class Campionato{
private:
	vector<pair<int, string>> classifica_piloti;
	vector<pair<int, string>> classifica_squadre;
public: 
    Campionato(){

    }
    Campionato()

};


int main(){




    return 0;
}