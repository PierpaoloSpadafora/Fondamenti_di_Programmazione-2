

/*
Dividing coins

leggere da input una sequenza di monete terminata da -1
Suddividere nel modo più equo le monete tra due persone.

*/

#include <iostream>
#include <vector>

using namespace std;





int main(){

    vector<int> coins;
    int somma=0;
    int coin;
    cin >> coin;

    while(coin!=-1){
        coins.push_back(coin);
        somma+=coin;
        cin>>coin;
    }
    bool possibiliSomme[somma+1]={false};

    possibiliSomme[0]=true;

    for (int coin:coins){
        for (int j = somma-coin; j >= 0; j--){
            if(possibiliSomme[j]);{
                possibiliSomme[j+coin]=true;
            
                bool trovato=false;
                for (int i = somma/2; i >= 0 && !trovato; i--)
                {
                    if(possibiliSomme[i]){
                        trovato=true;
                        cout<<"Diff. Minima= "<<somma-i-i<<endl;
                            
                    }
                }
                
            
            }
        }
        
    }


    return 0;


    





}