#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	// Documentazione completa della classe std::unordered_map
	// https://en.cppreference.com/w/cpp/container/unordered_map

	// Creare una unordered_map
	unordered_map<int, string> hashmap;

	// Aggiungere valori mediante operator[] 
	hashmap[3] = "tre"; 
	hashmap[2] = "due"; 

	// Aggiungere valori mediante unordered_map::insert 
	// (vedi dopo) per generare un pair utilizziamo un make_pair
	// make_pair è una funzione che restituisce un pair<K,V>
	hashmap.insert(make_pair(9, "nove")); 

	// Iterare su un'hashmap<K,V> utilizzando gli iteratori
	for (auto i = hashmap.begin(); i != hashmap.end(); ++i) {
		// una unordered_map contiene pair<K,V>
		pair<int, string> p = *i; 

		// pair.first, pair.second permette di accedere ai rispettivi campi
		cout << "Key: " << p.first << ", Value: " << p.second << endl; 
	}

	// Stampare la dimensione dell'hashmap
	cout << "L'hashmap contiene " << hashmap.size() << " elementi." << endl; 

	// NOTA BENE: Se volessimo utilizzare unordered_map con una classe 
	// definita da noi (non nella STL) sarebbe necessario:
	// * che la classe implementi operator==
	// * che sia definito una classe con overload di operator() che implementi
	// 	 il calcolo dell'hash per la classe
	// vedi documentazione per esempi 
	// https://en.cppreference.com/w/cpp/utility/hash
	return 0; 
}
