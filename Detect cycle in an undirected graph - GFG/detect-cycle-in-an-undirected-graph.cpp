// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    // int  N=1e5;
    
    
    bool dfs(int ver,vector<int> adj[],int par,bool vis[])
    {
        vis[ver]=true;
        
        
        bool cycle=false;
        
        for(int child : adj[ver])
        {
            if(vis[child] and child==par )continue;
            
            if(vis[child])return true;
            
            
            
            cycle |= dfs(child,adj,ver,vis);
            
        }
        
        return cycle;
        
    }
    
    
    bool isCycle(int V, vector<int> adj[]) 
    {
        
        bool vis[V+11];
        
        for(int i=0;i<=V;i++)
        {
            vis[i]=false;
        }
        
        for(int i=0;i<V;i++)
        {
            if(vis[i])continue;
            if(dfs(i,adj, -1,vis))
            {
                return true;
            }
        }
        
        return false;
        
        
        
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends