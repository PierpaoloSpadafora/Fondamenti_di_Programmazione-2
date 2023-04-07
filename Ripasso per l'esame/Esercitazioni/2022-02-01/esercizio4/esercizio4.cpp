

bool solve(Solution& sol, int i ){
    if(i>=sol.g.n()){
        return sol.is_valid();
    }
    if(sol.can_add(i)){
        sol.add_node(i);
        if(solve(sol, i++)){
            return true;
        }
        sol.remove(i)
    }
    if(solve(sol, i+1)){
        return true;
    }
    return false
}

struct Solution{
    vector<bool> current_nodes;
    int size;
    const Grafo& g;
    int k1, k2;

    Solution(const Grafo& _g, int _k1, int _k2):
    current_nodes(g.n(), false),
    g(_g),
    k1(_k1),
    k2(_k2){}

    void add_node(int i){
        assert(not current_node[i]);
        current_nodes[i]=true;
        size++;
    }

    void remove_node(int i){
        asserd(current_nodes[i]);
        current_nodes[i]=false;
        size--;
    }

    bool can_add(int i){
        if(size>=k2){
            return false;
        }
        assert(!current_nodes[i]);
        for (int j = 0; j < g.n(); j++)
        {
            if(g(i,j) && current_nodes(j)){
                return false;
            }
            if(g(j,i) && current_nodes(j)){
                return false;
            }
        }
        
    }

    bool is_valid(){
        if(size<k1){
            return false;
        }
        if(size>k2){
            return false;
        }
        for (int i = 0; i < g.n(); i++)
        {
            for (int j = 0; j < g.n(); j++)
            {
                if(g(i,j) && current_nodes[j] && current_nodes[i]){
                    return false;
                }
            }
        }
        return
    }

}













