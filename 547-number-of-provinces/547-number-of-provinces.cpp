class Solution {
public:
    
    
    int cnt=0;
    
    
    void dfs(int node,vector <int>  adj[], vector<int > &vis)
    {
            vis[node]=1;
        
        for(auto child: adj[node])
        {
            if(vis[child]==0)
            {
                
                // cnt++;
                dfs(child,adj,vis);
            }
        }
        
        
    }
    
    
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n= isConnected.size();
        
        vector<int > adj[n];
        
        vector<int > vis(n+1,0);
        
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected[0].size();j++)
            {
                if(isConnected[i][j]==1)
                {
                    // cnt++;
                    adj[i].push_back(j);
                    adj[j].push_back(i);

                }

            }
            
        }
        
        
//         for(int i=0;i<isConnected.size();i++)
//         {
//             for(int j=0;j<isConnected[0].size();j++)
//             {
                
//                     if(vis[i]==0)
//                     {
//                     cnt++;
                    
                        
//                     }

                

//             }
            
//         }
        
//         for(auto it : adj[0])
//         {
//             if(vis[it]==0)
//             {
                
//             }
//         }
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,adj,vis);
                cnt++;
            }
            
        }
        
            
        
        
        return cnt;
        
        
    }
};