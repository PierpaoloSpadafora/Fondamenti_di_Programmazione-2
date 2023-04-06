#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

unordered_map<string,string> mymap;

mymap["Bakery"]="Barbara";

string name=mymap["Bakery"];


string name2=mymap["Terracina"]; 
//  se "Terracina" non è presente restituisce un nome vuoto, 
//  ma crea nell'hash map un record con "Terracina" e nome vuoto;

