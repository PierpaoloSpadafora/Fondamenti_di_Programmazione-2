



#include <iostream>
#include <list>
#include <stack>
#include <algorithm>
#include <iostream>

#include "Grafo.h"


using namespace std;



int f(Grafo& g, int nodo){

	int raggiunto=0;
	list<int> daVisitare;
	vector<int> usati;
	daVisitare.push_back(nodo);

	while(!daVisitare.empty()){
		for (int i = 0; i < g.n(); i++)
		{
			if(  g(i,daVisitare.front()) ){
				if(  find(usati.begin(),usati.end(),i) == usati.end() ){
					raggiunto++;
					daVisitare.push_back(i);
				}
			}
		}
		usati.push_back( daVisitare.front() );
		daVisitare.pop_front();
	}

	return (g.n()-raggiunto-1);

}

int esercizio3(Grafo& g){
	int NodoMenoRaggiunto=0, vl=0;
	for (int i = 0; i < g.n(); i++)
	{
		if(f(g,i)>vl){
			NodoMenoRaggiunto=i;
			vl=f(g,i);
		}
	}
	return NodoMenoRaggiunto;
}




int main(){

	Grafo g(5);

	g(0,1,true);
	g(0,4,true);
	g(3,1,true);
	g(1,4,true);
	g(2,3,true);

	cout<<esercizio3(g)<<endl;

	for (int i = 0; i < g.n(); i++)
	{
		cout<<"Il nodo "<<i<<" non e' raggiunto da "<<f(g,i)<<" nodi"<<endl;
	}
	
	


	return 0;
};









