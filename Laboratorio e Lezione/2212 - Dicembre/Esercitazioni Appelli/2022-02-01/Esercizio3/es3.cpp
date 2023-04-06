
#include <queue>
using namespace std;


int least_reached_node(const Grafo& g){
    int num_nodes = g.n();
    vector<int> reched_by(num_nodes, 0);
    for(int soruce=0, source<num_nodes; source++){
        vector<bool> visited_nodes(num_nodes, false);
        visited_nodes[source]=true;
        stack<int> n2v;
        n2v.push(source);

        while(!n2v.empty()){
            int current_node=n2v.top();
            n2v.pop();
            reached_by[current_node]++
            for (int j = 0; j < num_nodes; j++)
            {
                if(g(current_node, j) && !visited_nodes[j]){
                    visited_nodes[j]=true;
                    n2v.push(j);
                }
            }  
        }
    }
    return min_element(reached_by.begin(), reached_by.end())-reached_by.begin();
}

int esercizio3(Grafo& g){
    int max=0;
    for (int i = 0; i < g.n(); i++)
    {
        if(f(i)>f(max)){
            max=i;
        }
    }
    return max;
}

//

    0   1   2   3   4
0       1           1
1           1       1
2               1
3       1               

