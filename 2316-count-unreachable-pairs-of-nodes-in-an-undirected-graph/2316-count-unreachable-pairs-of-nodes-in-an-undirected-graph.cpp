class DisjointSet {

private:
    int parent[100000];
    
    void makePar(int nodes) {
        for(int i = 0; i < nodes; i++)
            this->parent[i] = i;
    }
public:
    
    DisjointSet() {
        makePar(100000);
    }
    
    DisjointSet(int nodes) {
        makePar(nodes);
    }
    
    int findPar(int n) {
        if(parent[n] == n)
            return n;
        return parent[n] = findPar(parent[n]);
    }
    
    void makeUnion(int u, int v) {
        u = findPar(u);
        v = findPar(v);
        
        if(u < v)
            parent[v] = u;
        else
            parent[u] = v;
    }
    
    
};

class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        DisjointSet dsu(n);
        
        for(vector<int> &edge: edges)
            dsu.makeUnion(edge.front(), edge.back());
        
        unordered_map<int,int> componentNodes;
        for(int i = 0; i < n; i++)
            componentNodes[dsu.findPar(i)]++;
        
        unsigned long long unreachableNodes = 0LL;
        
        for(pair<const int, int> &component: componentNodes)
            unreachableNodes += (long long)component.second * ((long long)n - (long long)component.second);

        
        return unreachableNodes >> 1LL;
    }
};