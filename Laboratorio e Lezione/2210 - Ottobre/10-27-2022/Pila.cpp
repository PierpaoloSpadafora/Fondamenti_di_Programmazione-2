
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string expr;
    int len, pos;
    bool esci=false;
    stack<int> s; //    PILA
    getline(cin,expr);
    len=expr.size();
    for (int i = 0; i < len && !esci; i++)
    {
        if(expr[i]=='('){
            s.push(i);
        }
        else if (expr[i]==')')
        {
            if(s.empty()){
                esci=true;
            }
            else{
                pos=s.top();
                s.pop(i);
                cout<<"La parentesi aperta in pos: "<<pos<<"si chiude in pos: "<<i<<endl;
            }
        }
        if(esci==true)||(!s.empty()){
            cout<<"Espressione non ben parentesizzata"<<endl;
        }
        else{
            cout<<"Espressione ben parentesizzata"<<endl;
        }
        
    }
}