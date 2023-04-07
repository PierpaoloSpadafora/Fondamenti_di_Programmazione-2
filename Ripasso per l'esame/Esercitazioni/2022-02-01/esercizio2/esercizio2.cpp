#include <iostream>
#include <vector>
#include <utility>

using namespace std;



class GestoreValori{
public:
	vector<pair<int,char>> coppie;
	void inserisciCoppia(int a, char b){
		coppie.push_back(make_pair(a,b));
        return ;
	}
	int numCoppie(){
		return coppie.size();
	}
	virtual int getRisultato(){
		return -1;
	}
};

class GestoreValoriA: public GestoreValori{
public:

	int getRisultato(){
		int somma=0;
		for(int i=0; i<numCoppie(); i++){
			if(coppie[i].second=='a'){
				somma+=coppie[i].first;
			}
		}
		return somma;
	}

};

class GestoreValoriB: public GestoreValori{
public:
	int getRisultato(){
		int somma=0;
		int counter=0;
		for(int i=0; i<coppie.size(); i++){
			if(coppie[i].second=='b'){
				somma+=coppie[i].first;
				counter++;
			}
		}
		return somma/counter;
	}
};

int main(){


    GestoreValoriA gva;

    gva.inserisciCoppia(10,'a');    
    gva.inserisciCoppia(10,'b');    
    gva.inserisciCoppia(10,'a');    
    gva.inserisciCoppia(10,'b');
    gva.inserisciCoppia(10,'a');

	GestoreValoriB gvb;

    gvb.inserisciCoppia(10,'a');    
    gvb.inserisciCoppia(10,'b');    
    gvb.inserisciCoppia(10,'a');    
    gvb.inserisciCoppia(20,'b');
    gvb.inserisciCoppia(10,'a');


    cout<<gva.getRisultato()<<endl;

    cout<<gvb.getRisultato()<<endl;



    return 0;
}