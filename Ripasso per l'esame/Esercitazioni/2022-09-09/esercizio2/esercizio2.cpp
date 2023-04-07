



#include <iostream>
#include <string>
#include <list>
#include <unordered_map>


using namespace std;


class Partita{
private:
	string squadraCasa, squadraOspite;
	int goalCasa, goalOspite;

public:
	
	Partita(){
		squadraCasa="";
		squadraOspite="";
		goalCasa=0;	
		goalOspite=0;
	}
	Partita(string _sc, string _so, int _gc, int _go){
		squadraCasa=_sc;
		squadraOspite=_so;
		goalCasa=_gc;	
		goalOspite=_go;
	}
	

	void setSquadraCasa(string sc){
		squadraCasa=sc;
	}
	void setSquadraOspite(string so){
		squadraOspite=so;
	}
	void setGoalCasa(int gc){
		goalCasa=gc;
	}
	void setGoalOspite(int go){
		goalOspite=go;
	}

	string getSquadraCasa(){
		return squadraCasa;
	}
	string getSquadraOspite(){
		return squadraOspite;
	}
	int getGoalCasa(){
		return goalCasa;
	}
	int getGoalOspite(){
		return goalOspite;
	}

};

class GestorePartite{
private:
	list<Partita*> partite;
public:

	GestorePartite(const GestorePartite& ges){
		this->partite=ges.partite;
	}	

	void aggiungiPartita(string sc, string so, int gc, int go){
		Partita nuovaPartita(sc,so,gc,go);
		partite.push_back(&nuovaPartita);
	}

	string getSquadraPiuForte() const{
		string forte="";
		int goal=0;
		unordered_map<string,int> umap;

		for(auto it=partite.begin(); it!=partite.end();it++){
			if( (*it)->getGoalCasa()>(*it)->getGoalOspite() ){
				umap[(*it)->getSquadraCasa()]+=1;
			}
			else if ((*it)->getGoalOspite()>(*it)->getGoalCasa())
			{
				umap[(*it)->getSquadraOspite()]+=1;
			}
		}
		
		for(auto it=umap.begin(); it!=umap.end();it++){
			if( (*it).second>goal ){
				forte=(*it).first;
			}
		}		
	
		return forte;
	}

	double mediaGoal() const{
		int somma=0,c=0;
		for(auto it=partite.begin(); it!=partite.end();it++){
			somma+= (*it)->getGoalCasa()+(*it)->getGoalOspite();
			c++;
		}
		return somma/c;
	}
	




};









