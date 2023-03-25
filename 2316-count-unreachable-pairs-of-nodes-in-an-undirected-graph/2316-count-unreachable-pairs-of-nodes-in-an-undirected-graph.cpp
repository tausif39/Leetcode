class DSU{
    
    vector<int>parent;
    
    vector<int>size;
	
   public: 
    DSU(int n)
    {
        
        parent.resize(n+1,0);
        size.resize(n+1,1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    
    int findParent(int k){
        if(parent[k]==k) return k;
        return parent[k]=findParent(parent[k]);
    }
    void union_set(int a,int b){
        int nx=findParent(a);
        int ny=findParent(b);
        if(nx!=ny){
            if(size[nx]<size[ny]){
                swap(nx,ny);
            }
            
            parent[ny]=nx;
            
            size[nx]+=size[ny];
            
        }
    }
};
class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        DSU d(n);
        unordered_map<int,int>mp;
        for (auto &e : edges) {
            d.union_set(e[0], e[1]);
        }
        
        for(int i=0;i<n;i++){
            int p=d.findParent(i);
            mp[p]++;
        }
        long count = long(n) * (n - 1) / 2;
        for (auto [a, b] : mp) {
            cout << a << " " << b << endl;
            count -= (long long)b*(b-1)/2;

        }
        return count;
    }
};
