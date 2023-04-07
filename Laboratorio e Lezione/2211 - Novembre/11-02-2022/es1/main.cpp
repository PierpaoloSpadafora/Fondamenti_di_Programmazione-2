#include <iostream>
#include <unistd.h>
#include <queue> // std::queue
using namespace std;

#include "Cliente.h"

string getOrario(int minuti);
void stampa(queue<Cliente> coda);

int main()
{

	queue<Cliente> coda;
		
	char scelta; 
	unsigned tempo_trascorso = 0;
	unsigned tempo_attesa = 0;
	unsigned incasso_attuale = 0;

	
	do{
		cout << endl << "Benvenuti dal parrucchiere! Orario di apertura: 8:00." << endl << endl;
		cout << "Inserisci 1 per inserire un nuovo cliente in fila;" << endl;
		cout << "Inserisci 2 per eseguire il trattamento del prossimo cliente;" << endl;
		cout << "Inserisci 3 per chiedere il prossimo orario disponibile per un trattamento;" << endl;
		cout << "Inserisci 4 per stampare tutti i clienti in fila;" << endl;
		cout << "Inserisci 5 per stampare l'orario attuale;" << endl;
		cout << "Inserisci 6 per stampare l'incasso attuale;" << endl;

		cout << "Inserisci 0 per uscire." << endl;
		cout << endl << "Valore inserito: "; cin >> scelta;

		switch (scelta){
			case '1':
			{
				Cliente c; cin >> c;
				coda.push(c);
				tempo_attesa += c.getDurataTrattamento();

				cout << endl << "----------> Cliente inserito" << endl << endl;
				break;
			}
			case '2':
			{
				if(coda.size() > 0)
				{

					Cliente c = coda.front();
					
					cout << endl << "----------> E' stato servito il cliente: " << endl << c;
					
					tempo_trascorso += c.getDurataTrattamento();
					tempo_attesa -= c.getDurataTrattamento();
					incasso_attuale += c.getPrezzo();

					coda.pop();
				}
				else cout << endl << "---------> Non ci sono clienti da servire." << endl;

				break;
			}
			case '3':
			{
				cout << endl << "----------> Orario attuale: " << getOrario(8 * 60 + tempo_trascorso) << endl;
				cout << "----------> Attesa: " << getOrario(tempo_attesa) << endl;
				cout << "----------> Prossimo orario disponibile: " << getOrario(8 * 60 + tempo_trascorso + tempo_attesa) << endl;
				break;			
			}
			case '4':
			{
				if(coda.size() > 0)
				{
					cout << endl << "----------> In fila ci sono i seguenti clienti: " << endl << endl;
					stampa(coda);
				}
				else
					cout << endl << "----------> Non ci sono clienti in fila." << endl << endl;

				break;
			}
			case '5':
			{
				cout << endl << "----------> Orario attuale: " << getOrario(8 * 60 + tempo_trascorso) << endl;
				break;
			}
			case '6':
			{
				cout << endl << "----------> Incasso attuale: " << incasso_attuale << " euro" << endl;
			}
			default:
				break;
		}

		sleep(1);

	}while(scelta != '0');

	return 0;
}

void stampa(queue<Cliente> coda)
{
	while (!coda.empty()){
		cout << coda.front() << endl;
		coda.pop();
	}
}

string getOrario(int minuti){

	string orario = "";
	orario += to_string(minuti / 60);//to_string c++11
	orario += ":";

	if (minuti % 60 < 10)
		orario += "0";

	orario += to_string(minuti % 60); //to_string c++11

	return orario;
}