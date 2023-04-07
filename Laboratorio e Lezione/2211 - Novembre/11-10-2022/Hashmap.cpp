

/*
La traccia in breve: 
devi memorizzare dei veicoli(auto, moto, barche, navicelle spaziali, etc.) e dei proprietari. 
Ogni proprietario può avere più di un veicolo. 
Dalla targa del veicolo devo trovare il proprietario dall'id del proprietario (o cf) devi trovare i veicoli che ha.
*/


#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;


string random_CF()
{
    char lettere[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q',
    'R','S','T','U','V','W','X',
    'Y','Z'};
    char numeri[10] = {'1','2','3','4','5','6','7','8','9','0'};
    string CodiceFiscale = "";

    for (int i=0; i<6; i++) 
    CodiceFiscale+= lettere[rand() % 26];

    for (int i=0; i<2; i++) 
    CodiceFiscale+= numeri[rand() % 10];

    for (int i=0; i<1; i++) 
    CodiceFiscale+= + lettere[rand() % 26];

    for (int i=0; i<2; i++) 
    CodiceFiscale+= + numeri[rand() % 10];

    for (int i=0; i<1; i++) 
    CodiceFiscale+= + lettere[rand() % 26];

    for (int i=0; i<3; i++) 
    CodiceFiscale+= + numeri[rand() % 10];

    for (int i=0; i<1; i++) 
    CodiceFiscale+= + lettere[rand() % 26];

    return CodiceFiscale;
}
string random_targa()
{
    char lettere[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q',
    'R','S','T','U','V','W','X',
    'Y','Z'};
    char numeri[10] = {'1','2','3','4','5','6','7','8','9','0'};
    string Targa = "";

    for (int i=0; i<2; i++) 
    Targa=Targa + lettere[rand() % 26];

    for (int i=0; i<3; i++) 
    Targa=Targa + numeri[rand() % 10];

    for (int i=0; i<3; i++) 
    Targa=Targa + lettere[rand() % 26];

    return Targa;
}


vector<string> TrovaVeicoliPosseduti(unordered_map<string,vector<string>>& mapproprietari, string _cf){
    return mapproprietari[_cf]; 
}
string TrovaProprietario(unordered_map<string,string>& mapveicoli, string _targa){
    return mapveicoli[_targa]; 
}


void inserisci(unordered_map<string,vector<string>>& mapproprietari,unordered_map<string,string>& mapveicoli, string _cf, string _targa){

    mapproprietari[_cf].push_back(_targa);
    mapveicoli[_targa]=_cf;
    
    return;
}


void StampaVeicoliDiUnProprietario(string cf, unordered_map<string,vector<string>>& mapproprietari){

    vector<string> vec = TrovaVeicoliPosseduti(mapproprietari, cf);
    for (int j = 0; j < vec.size(); j++)
    {
        cout<<"Veicolo n."<<j<<" di \""<<cf<<"\": "<<vec[j]<<endl;
    }

    return;
}
void StampaVeicoliTuttiIProprietari(vector<string>& vecproprietari, unordered_map<string,vector<string>>& mapproprietari){
    vector<string> vec;

    for (int i = 0; i < vecproprietari.size(); i++)
    {
        cout<<endl;
        StampaVeicoliDiUnProprietario(vecproprietari[i], mapproprietari);
    }
    return;
}


void StampaProprietarioVeicolo(string targa, unordered_map<string,string>& mapveicoli){

    string CF = TrovaProprietario(mapveicoli, targa);
    cout<<"Il proprietario del veicolo targato \""<<targa<<"\" e': "<<CF<<endl;
    return;
}
void StampaProprietariDiTuttiIVeicoli(vector<string>& vecveicoli, unordered_map<string,string>& mapveicoli){
    vector<string> vec;

    for (int i = 0; i < vecveicoli.size(); i++)
    {
        StampaProprietarioVeicolo(vecveicoli[i], mapveicoli);
    }
    return;
}


int main(){

    unordered_map<string,vector<string>> mapproprietari;
    unordered_map<string,string> mapveicoli;


    // solo per output di esempio
    vector<string> vecproprietari;
    vector<string> vecveicoli;
    // solo per output di esempio


    string CF, targa;
    CF=random_CF();
    
    // Crea un elenco casuale di auto e proprietari
    // 18 auto totali possedute da 6 proprietari diversi (3 ciascuna)
    for (int i = 0; i < 18; i++)
    {
        if(i%3==0){
            CF=random_CF();
            vecproprietari.push_back(CF); // solo per output di esempio
        }
        targa=random_targa();
        vecveicoli.push_back(targa); // solo per output di esempio

        inserisci(mapproprietari, mapveicoli, CF, targa);
    }

    StampaVeicoliTuttiIProprietari(vecproprietari, mapproprietari);

    cout<<"\n*********************\n";

    StampaProprietariDiTuttiIVeicoli(vecveicoli, mapveicoli);

    
    return 0;
}
