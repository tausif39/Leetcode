class Solution {
public:
    
    void dfs(vector<bool> &vis,int node, vector<int> adj[],long long &cnt, stack<int> &st) 
    {
        vis[node]=true;
        
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                dfs(vis,it,adj,cnt,st);
                
            }
            
        }
        
        cnt++;
        
        
    }
    
    
    long long countPairs(int n, vector<vector<int>>& graph) 
    {
        
        
        long long ok=(long long)n;
        
        long long total =(ok*(ok-1))/2;
        
        vector<int> adj[n+1];
        
        for(int i=0;i<graph.size();i++)
        {
            adj[graph[i][0]].push_back(graph[i][1]);
            adj[graph[i][1]].push_back(graph[i][0]);
            
        }
        
        long long res=0;
        
        vector<bool> vis(n+1,false);
        
        for(int i=0;i<n;i++)
        {
            long long cnt=0;
            stack<int> st;
            if(vis[i]==false)
            {
                dfs(vis,i,adj,cnt,st);
                
            }
            
            
            // cnt=st.size();
            if(cnt>1)
            {
                // cout<<cnt<<" ";
                int z=(cnt*(cnt-1))/2;
                res+=z;
                cout<<res<<" ";
                
            }
            
            
            
        }
        
        // cout<<res;
        
        return total-res;
        
        
        
        
    }
};