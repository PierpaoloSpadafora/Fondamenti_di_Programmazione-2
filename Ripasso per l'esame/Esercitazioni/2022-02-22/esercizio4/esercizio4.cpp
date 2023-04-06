



#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;


int check(vector<string>& A, vector<vector<string>>& C){
    unordered_map<string,int> map;

    for (int i = 0; i < A.size(); i++)
    {
        map[A[i]]=i;
    }

    for (int i = 0; i < C.size(); i++)
    {
        
        bool check=false;
        if( (map[C[i][0]]<map[C[i][1]] && map[C[i][1]]<map[C[i][2]]) || (map[C[i][2]]<map[C[i][1]] && map[C[i][1]]<map[C[i][0]]) )
        {
            check = true;
        }
        if(check == false)
        {
            return false;
        }
    }
    return true;    

}


bool esercizio4(vector<string>& A, vector<vector<string>>& C,int& n, int index){

    
    if(check(A,C)){
        
        return true;
    }
    if(index==A.size()){
        
        
        return false;
    }
    string el;
    for(int i =index; i<A.size(); i++){
        
            el=A[i];
            A[i]=A[index];
            A[index]=el;
            if (esercizio4(A, C, n,index+1)){
                for(auto x:A) cout << x << " ";
                cout << endl; return true;
            } 
            el=A[i];
            A[i]=A[index];
            A[index]=el;
        
        
    }
    return false;
   
}




int main(){

    vector<string> A={"a","b","c","d","e"};
    int n = A.size();
    vector<vector<string>> C{{"a","e","d"},{"b","c","d"},{"c","a","b"},{"d","e","c"}};
    bool flag=esercizio4(A, C, n, 0);
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}