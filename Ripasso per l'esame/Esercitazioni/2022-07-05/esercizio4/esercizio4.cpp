

#include <vector>
#include <string>

using namespace std;

bool esercizio4(vector<string>& S, vector<vector<string>>& L, int q){
    return true;
}

bool Cond2(vector<vector<string>>& L, vector<string>& P){
    bool flag=true;
    for (int i = 0; i < L.size(); i++)
    {
        for (int j = 0; j < L[i].size(); j++)
        {
            if( find(P.begin(),P.end(),L[i][j])==P.end() ){
                flag=false;
            }
        }        
    }
    return flag;    
}

bool GeneraP(int q, vector<string>& S){
    int count=0;
    vector<string> P, usate;
    do
    {
        /* code */
    } while (/* condition */);
    
}