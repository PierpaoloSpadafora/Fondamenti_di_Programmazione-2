

#include <iostream>
using namespace std;

class Carriera{
private:
public:

	int numAppelli;
	bool* esiti = new bool[30];
	string* nomiEsami = new string[30];


	Carriera(){
		numAppelli=0;
		bool* esiti = new bool[numAppelli];
		string* nomiEsami = new string[numAppelli];
	}
	Carriera(const Carriera& c){
		numAppelli=c.numAppelli;
		esiti=c.esiti;
		nomiEsami=c.nomiEsami;
	}
	~Carriera(){
		delete[] esiti;
		delete[] nomiEsami;
	}

	Carriera operator=(const Carriera& c){
		numAppelli=c.numAppelli;
		esiti = new bool[numAppelli];
		nomiEsami = new string[numAppelli];
		for (int i = 0; i < numAppelli; i++)
		{
			esiti[i]=c.esiti[i];
			nomiEsami[i]=c.nomiEsami[i];
		}
		
		return *this;
	}


    void aggiungiTentativo(string nome, bool esito){
        numAppelli++;
        
        if(dim<=numAppelli){
            dim += 50;
            bool* replace_esiti = new bool[dim];
            string* replace_nomiEsami = new string[dim];

            for(int i=0; i<numAppelli-1; i++) replace_esiti[i] = esiti[i];
            for(int i=0; i<numAppelli-1; i++) replace_nomiEsami[i] = nomiEsami[i];

            delete[] esiti;
            delete[] nomiEsami;

            esiti = replace_esiti;
            nomiEsami = replace_nomiEsami;
        }
    
        nomiEsami[numAppelli] = nome;
        esiti[numAppelli] = esito;
    }
    
    void rimuoviUltimoAppello(){
        numAppelli--;
    }
    
    bool studenteDiligente(){
        int pos = 0, neg = 0;
        for(int i=0; i<numAppelli;i++){
            if(esiti[0]) pos++;
            else neg++;
        }
        if(pos > neg) return true;
        else return false;
    }

    void stampaElencoAppelli(){
		
		cout<<"\n Numero appelli totali:"<<numAppelli<<"\n"<<endl;
		for (int i = 0; i < numAppelli; i++)
		{
			cout<<"Nome esame: "<<nomiEsami[i]<<endl;
			if(esiti[i]==1){
				cout<<"Esito: True"<<endl;
			}
			else{
				cout<<"Esito: False"<<endl;
			}
			cout<<endl;
		}
	}
};





int main(){

	Carriera c;

	c.aggiungiTentativo("Fisica", true);
	c.aggiungiTentativo("Analisi", false);
	c.aggiungiTentativo("Fondamenti", true);
	c.aggiungiTentativo("Discreta", false);
	c.aggiungiTentativo("Analisi", true);

	c.stampaElencoAppelli();


	c.rimuoviUltimoAppello();
	c.rimuoviUltimoAppello();

	c.stampaElencoAppelli();

	if(c.studenteDiligente()){

		cout<<"Lo studente e' diligente"<<endl;
	}
	else{
		cout<<"Lo studente NON e' diligente"<<endl;
	}


	cout<<endl;
	
}