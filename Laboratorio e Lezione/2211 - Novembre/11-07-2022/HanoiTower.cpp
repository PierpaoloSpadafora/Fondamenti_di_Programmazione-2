#include <stack>
#include <iostream>

using namespace std;

void StampaStack(stack<int>&s){
    //caso base
    if(s.empty()){
        cout<<"|"<<endl;
        return;
    }
    //caso ricorsivo
    int x=s.top();
    s.pop();
    StampaStack(s);
    cout<<x<<" ";
    s.push(x);
}

void TowerOfHanoi(int n, stack<int>&from_rod, stack<int>&to_rod, stack<int>&aux_rod, char f, char t, char a){

    if(n==1){
        to_rod.push(from_rod.top());
        from_rod.pop();
        print_rod_in_order(from_rod, to_rod, aux_rod, f, t, a);        
    }
    TowerOfHanoi(n-1, from_rod, aux_rod, to_rod, f, a, t);
    to_rod.push(from_rod.top());
    from_rod.pop();
    print_rod_in_order(from_rod, to_rod, aux_rod, f, t, a);   
    TowerOfHanoi(n-1, aux_rod, to_rod, from_rod, a, t, f);

    return;
}

void print_rod_in_order(stack<int> from_rod, stack<int> to_rod, stack<int> aux_rod, char f, char t, char a){
    
    cout<<"A";
    if(f=='A'){
        StampaStack(from_rod);
    }
    else if (t=='A'){
        StampaStack(to_rod);
    }
    else if (a=='A'){
        StampaStack(aux_rod);
    }
    cout<<endl;

    cout<<"B";
    if(f=='B'){
        StampaStack(from_rod);
    }
    else if (t=='B'){
        StampaStack(to_rod);
    }
    else if (a=='B'){
        StampaStack(aux_rod);
    }
    cout<<endl;

    cout<<"C";
    if(f=='C'){
        StampaStack(from_rod);
    }
    else if (t=='C'){
        StampaStack(to_rod);
    }
    else if (a=='C'){
        StampaStack(aux_rod);
    }
    cout<<endl;
    
    
}

int main(){

    stack<int> s, d, a; //stack - destination - aux
    int n;
    cin>>n;
    for (int i = n; i >=1 ; i--)
    {
        s.push(i);
    }

    cout<<"Lo stato iniziale e': "<<endl;
    cout<<"A "; StampaStack(s); cout<<endl;
    cout<<"B "; StampaStack(a); cout<<endl;
    cout<<"C "; StampaStack(d); cout<<endl;

    TowerOfHanoi(n, s, d, a, 'A','C','B');

    return 0;
}