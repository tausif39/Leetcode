class Solution {
public:
    
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i, int j,int &okay,vector<vector<int>>& vis)
    {
         int m=grid1.size();
         int n=grid1[0].size();
        
        if(i<0 || i>=m || j>=n || j<0 || grid2[i][j]!=1 || vis[i][j]==1)return;
        
        if(grid1[i][j]==0)okay=0;
        
        vis[i][j]=1;
        
        dfs(grid1, grid2,i+1,j,okay,vis);
        dfs(grid1, grid2,i,j+1,okay,vis);
        dfs(grid1, grid2,i-1,j,okay,vis);
        dfs(grid1, grid2,i,j-1,okay,vis);
          
    }
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2)
    {
        int m=grid1.size();
        int n=grid1[0].size();
        
        vector<vector<int>> vis(m,vector<int>(n,0));
  
        int ans=0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]==0 and grid2[i][j]==1)
                {
                   int okay=1;

                    dfs(grid1,grid2,i,j,okay,vis);

                    ans+=okay;
                    
                }
                
            }
        }
        
        return ans;
    }
};