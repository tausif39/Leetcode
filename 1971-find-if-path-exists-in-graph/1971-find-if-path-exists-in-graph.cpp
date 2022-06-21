class Solution {
public:
    
    // bool flag=false;
    
     void dfs(int node,vector<int> adj[], vector<bool> &vis,int end,bool &flag)
     {
        vis[node]=1;
        
         
         
        for(auto child:adj[node])
        {
            if(vis[child]==false)
            {
                
                if(child==end)
                {
                    flag=true;
                }
                
                dfs(child,adj,vis,end,flag);
                
            }
        }
        
        
    }
    
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) 
    {
        if(edges.size()==0)return true;
        
        if(start==end)return true;
        
        vector<int> adj[n+1];
        
        vector<bool> vis(n,false);
        
        bool flag=false;
        
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        
        dfs(start,adj,vis,end,flag);
        
        return flag;
        
        
        
    }
};