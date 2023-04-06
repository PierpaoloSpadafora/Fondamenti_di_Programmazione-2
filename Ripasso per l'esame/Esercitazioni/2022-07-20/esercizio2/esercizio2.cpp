
#include <vector>
#include <string>
#include <iostream>

using namespace std;


class Persona{
private:
	string nome,cognome;
public:
	Persona(){
		nome="";
		cognome="";
	}
	Persona(string _nome, string _cognome){
		nome=_nome;
		cognome=_cognome;
	}

	void setNome(string _nome){
		nome=_nome;
	}
	void setCognome(string _cognome){
		cognome=_cognome;
	}

	string getNome(){
		return nome;
	}
	string getCognome(){
		return cognome;
	}
	
	virtual int getStipendio() = 0;
};

class Studente: public Persona{
public:
	int getStipendio(){
		return 10;
	}
};

class Impiegato: public Persona{
public:
	int getStipendio(){
		return 100;
	}
};

class GestorePersone{
private:
	vector<Persona*> persone;
public:
	void aggiungiPersona(Persona* p){
		persone.push_back(p);
	}
	double getStipendioMedio(){
		double somma=0;
		double count=0;
		for(int i=0; i<persone.size(); i++){
			somma+=persone[i]->getStipendio();
			count++;
		}
		return somma/count;	
	}

};



























