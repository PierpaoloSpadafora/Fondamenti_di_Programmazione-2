
/*
PICCHI
Scrivere un programma che riceva una sequenza di dati relativi ai tassi 
di inquinamento registrati giorno per giorno in una certa località 
ed in un certo periodo di tempo e determini e stampi il numero dei picchi 
massimi dell’inquinamento. La sequenza è terminata da un numero negativo.  
I tassi di inquinamento sono interi tra 0 e 100. Un picco massimo di inquinamento 
è un massimo relativo nella sequenza, ossia un dato che è maggiore sia di quello 
ad esso precedente sia di quello ad esso seguente. Per ogni picco il programma 
deve visualizzare il valore del tasso di inquinamento ed il giorno in cui si verifica 
(i giorni vanno contati a partire da 1). Il programma deve altresì visualizzare 
il numero dei picchi rilevati ed il numero totale dei dati in input. 
Il primo e l’ultimo dato non vanno gestiti.
*/


#include <iostream>
using namespace std;

int main(){
    int giorno=0,prev=0,corr=0,succ=0,pc=0, input;
    bool a=true;
    
    while (a==true)
    {
        cin>>input;
        if(input>-1){
            if(giorno==0){
                prev=input;
                giorno++;
            }
            else{                
                if (giorno==1)
                {
                    corr=input;
                    giorno++;
                }
                else{
                    if(giorno>1){
                        succ=input;
                        if(corr>prev && corr>succ){
                            cout << corr <<" - "<< giorno<<endl;
                            pc++;
                        }                        
                        giorno++;
                        prev=corr;
                        corr=succ;
                    }
                }
            }
        }
        else{
            a=false;
        }
    }
    cout<< "Numero di picchi massimi rilevati: " << pc <<endl;
    cout<< "Numero totale dei dati: " << giorno << endl;
    return 0;       
}