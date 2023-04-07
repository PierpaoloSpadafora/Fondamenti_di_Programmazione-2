#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <unordered_map>
using namespace std;

int menu(){
    cout << "\n\n====================== MENU ======================"<<endl;
    cout << "\n1 - Inserisci un Tweet" << endl;
    cout << "2 - Stampi la frequenza di ogni hashtag presente nei tweet" << endl;
    cout << "3 - Cerca un hashtag" << endl;
    cout << "4 - Stampa l'elenco dei tweet" << endl;
    cout << "5 - Termina l'esecuzione\n" << endl;
    int x;
    cin >> x;
    return x;
}

//hashmap.second.first = frequenza
//hashmap.second.second = lista dei tweet in cui compare - indice del vettore listaTweet.
void CoreFunction(vector<string> &listaTweet, unordered_map<string,pair<int,list<int>>> &hashmap){

    string sub1,tag;
    for (int i = 0; i < listaTweet.size(); i++)
    {    
        int pos1=0,pos2=0;
        string tweet=listaTweet[i]+" ";
        
        //cout<<"\n--------INIZIO TWEET!-----"<<endl;
        while(pos1<tweet.size()){            
                pos1=tweet.find('#');
                if(pos1!=-1){
                    if(tweet[pos1+1]!='#' && tweet[pos1+1]!=' '){ 
                        sub1=tweet.substr(pos1+1);
                        pos2=sub1.find(' ');
                        tag=sub1.substr(0,pos2);
                        tag='#'+tag;
                        tweet=sub1.substr(pos2);                        
                        hashmap[tag].first+=1;
                        hashmap[tag].second.push_back(i);
                    }
                    else{
                        tweet=tweet.substr(pos1+2);
                    }
                }
            }
        //cout<<"\n--------TWEET FINITO!-----\n"<<endl;

    }    
}

void CercaHashtag(vector<string> &listaTweet, unordered_map<string,pair<int,list<int>>> &hashmap, string hashtag){
    
    list<int> h=hashmap[hashtag].second;
    h.sort();
    h.unique();
    cout<<endl;
    if(h.empty()){
        cout<< "Nessun Tweet possiede questo hashtag"<<endl;
    }
    else{
        int i=0;
        for(auto elem:h){
            i++;
            cout<<i<<": "<<listaTweet[elem]<<endl;
            
        }
    }
}

void elencoTweet(vector<string> &listaTweet){
    cout<<"\nElenco dei tweet:\n"<<endl;
    for (int i = 0; i < listaTweet.size(); i++)
    {
        cout<<"Tweet numero "<<i+1<<": "<<listaTweet[i]<<endl;
    }
    cout<<endl;
}

void FrequenzaHashtag(unordered_map<string,pair<int,list<int>>> &hashmap){
    cout<<endl;
    for(auto elem : hashmap){
        cout<<"\" "<<elem.first<<" \"\tcompare "<<elem.second.first<<" volte."<<endl;
    }
}

void InputPerTest(vector<string> &listaTweet){
    string a="Lorem ipsum #dolor sit amet";
    string b="consectetur #adipiscing elit"; 
    string c="sed do eiusmod tempor #dolor ut #labore et dolore magna aliqua"; 

    string d="Ut enim ad minim #dolor ";    // Giusto:      spazio alla fine.
//  string d="Ut enim ad minim #dolor";        Sbagliato:   nessuno spazio alla fine.              

    string e="quis #nostrud exercitation ullamco #labore #nisi ut aliquip"; 
    listaTweet.push_back(a);
    listaTweet.push_back(b);
    listaTweet.push_back(c);
    listaTweet.push_back(d);
    listaTweet.push_back(e);
    cout<<endl;
}

string NuovoTweet(){
    cout<<"\nPubblica un tweet: "<<endl;
    string s;
    cin.ignore();
    getline(cin,s);
    return s;
}

int main(){
    vector<string> listaTweet;
    int scelta=-1;

    //Decommentare per avere dei Tweet su cui testare
    //InputPerTest(listaTweet);
    
    while(scelta!=5){
        unordered_map<string,pair<int,list<int>>>  hashmap;
        CoreFunction(listaTweet, hashmap);
        scelta=menu();
        switch(scelta){
            case 1:{
                listaTweet.push_back(NuovoTweet());
            }
            break;

            case 2:{
                FrequenzaHashtag(hashmap);
            }
            break;

            case 3:{    
                string hashtag;
                cin>>hashtag;
                CercaHashtag(listaTweet, hashmap, hashtag);
            }
            break;

            case 4:{
                elencoTweet(listaTweet);
            }
            break;

            case 5:{
                cout<<"\nChiusura del programma.\n\n"<<endl;
            }
            break;

            default:{
                cout<<"\nScelta non valida\n"<<endl;
            }
            break;
        }
    }
	return 0;
}
