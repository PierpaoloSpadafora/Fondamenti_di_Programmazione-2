

#include <iostream>
#include <vector>

using namespace std;


void set_partition(const vector<int> &multiset, vector<bool> &partition, int i, vector<vector<bool>> &solutions){

    if(i>= multiset.size()){
        int s=0;
        for (int i = 0; i < multiset.size(); i++)
        {
            if(partition[i]){
                s+=multiset[i];
            }
            else{
                s-= multiset[i];
            }
        }
        if(s==0){
            solutions.push_back(partition);
        }
        return;
    }
    partition[i]=true;
    set_partition(multiset, partition, i+1, solutions);
    partition[i]=false;
    set_partition(multiset, partition, i+1, solutions);

}

vector<vector<bool>> set_partition(const vector<int> &multiset){
    vector<vector<bool>> solutions;
    vector<bool> partition(multiset.size());
    set_partition(multiset,partition, 0, solutions);
    return solutions;
}

int main(){

    vector<int> xs {0,5,8,13,15,11};

    vector<vector<bool>> solutions= set_partition(xs);

    for (auto s:solutions)
    {
        int sum=0;
        for (int i = 0; i < s.size(); i++)
        {
            cout<<s[i];
            if(s[i]){
                sum+=xs[i];
            }
            else{
                sum-=xs[i];
            }
        }
    }
    return 0;
}

