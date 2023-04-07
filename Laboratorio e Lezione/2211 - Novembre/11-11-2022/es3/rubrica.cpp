
#include <string>
#include <iostream>
#include <unordered_map>
#include "persona.cpp"
using namespace std;

int menu()
{
    cout << "\n1 - Inserire un nuovo contatto" << endl;
    cout << "2 - Cercare un contatto specificando nome e cognome della persona" << endl;
    cout << "3 - Eliminare un contatto specificando nome e cognome della persona" << endl;
    cout << "4 - Modificare il numero di un contatto" << endl;
    cout << "5 - Modificare nome e cognome di un contatto" << endl;
    cout << "6 - Stampare la rubrica telefonica" << endl;
    cout << "7 - Svuotare la rubrica telefonica" << endl;
    cout << "8 - Terminare l esecuzione del programma\n" << endl;
    int x;
    cin >> x;
    return x;
}

void AddContact(unordered_map<string, string> &r, Persona P, string NumeroDiTelefono)
{
    r.insert(make_pair(P.concatena(), NumeroDiTelefono));
}

string SearchContact(unordered_map<string, string> &r, Persona P)
{
    string numtel;
    numtel = r[P.concatena()];
    return numtel;
}

void stampa(unordered_map<string, string> &r)
{

    for (auto beg = r.begin(); beg != r.end(); beg++)
    {
        cout << beg->first << ": " << beg->second << endl;
    }
}

void InputPerTest(unordered_map<string, string> &rubrica){
    Persona p1("Pippo", "Baudo");
    Persona p2("Topolino", "Topolo");
    Persona p3("Pipolino", "Pipolo");
    Persona p4("SCILVIO", "BERLUSCHONI");

    string s1 = "3664587851";
    string s2 = "3984562587";
    string s3 = "3654125879";
    string s4 = "3258745896";

    AddContact(rubrica, p1, s1);        
    AddContact(rubrica, p2, s2);        
    AddContact(rubrica, p3, s3);        
    AddContact(rubrica, p4, s4);
}

int main()
{
    
    unordered_map<string, string> rubrica;
    int scelta=0;
    
    InputPerTest (rubrica);

    while(scelta!=8){
        int scelta = menu();
        switch (scelta)
        {
            case 1:{
                string nom, cognom,NumeroDiTelefono;
                cout<<"\nInserisci nome del nuovo contatto: "<<endl; cin>>nom;
                cout<<"\nInserisci cognome del nuovo contatto: "<<endl; cin>>cognom;
                Persona persona(nom,cognom);
                cout<<"\nInserisci Numero di Telefono del nuovo contatto: "<<endl; cin>>NumeroDiTelefono;
                AddContact(rubrica, persona, NumeroDiTelefono);
                //aggiunto
            }
            break;
            case 2:{
                string nom, cognom;            
                cout<<"\nInserisci nome del contatto da cercare: "<<endl; cin>>nom;
                cout<<"\nInserisci cognome del contatto da cercare: "<<endl; cin>>cognom;
                Persona persona(nom,cognom);
                cout <<"Il numero del contatto che stai cercando e': "<< SearchContact(rubrica, persona) << endl;
            }
            break;
            case 3:{
                string nom, cognom;            
                cout<<"\nInserisci nome del contatto da eliminare: "<<endl; cin>>nom;
                cout<<"\nInserisci cognome del contatto da eliminare: "<<endl; cin>>cognom;
                Persona persona(nom,cognom);
                rubrica.erase(persona.concatena());
                cout << "\nContatto Eliminato"<<endl;
            }
            break;
            case 4:{
                string nom, cognom,numtel;            
                cout<<"\nInserisci nome del contatto desiderato: "<<endl; cin>>nom;
                cout<<"\nInserisci cognome del contatto desiderato: "<<endl; cin>>cognom;
                Persona persona(nom,cognom);            
                cout<<"\nInserisci il nuovo numero di telefono: "<<endl; cin>>numtel;
                rubrica[persona.concatena()] = numtel;
                cout << "\nContatto Aggiornato"<<endl;
            }
            break;
            case 5:{
                string nom, cognom,numtel;            
                cout<<"\nInserisci nome del contatto da modificare: "<<endl; cin>>nom;
                cout<<"\nInserisci cognome del contatto da modificare: "<<endl; cin>>cognom;
                Persona persona(nom,cognom);
                numtel = rubrica[persona.concatena()];
                rubrica.erase(persona.concatena());
                cout<<"\nInserisci il nome aggiornato del contatto: "<<endl; cin>>nom;
                cout<<"\nInserisci il cognome aggiornato del contatto: "<<endl; cin>>cognom;
                persona.setNome(nom);
                persona.setCognome(cognom);
                AddContact(rubrica, persona, numtel);
                cout << "\nContatto Aggiornato"<<endl;
            }
            break;
            case 6:{                
                stampa(rubrica);
            }
            break;
            case 7:{            
                rubrica.clear();      
            }
            break;
            case 8:{
            }
            break;
            default:
            break;
        }
        
    }
    

    return 0;
}