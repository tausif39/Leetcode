class Solution {
public:
     
    void dfs(int i,int j, vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        if(i<0 || j<0)return ;
        if(i>=n || j>=m)return ;
        
        if(grid[i][j]!=0)return;
        
        grid[i][j]=1;
        
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
        
    }
    
      
    
    int closedIsland(vector<vector<int>>& grid) 
    {
        
         int cnt=0;
        
        
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(i*j==0 || i==grid.size()-1 || j==grid[0].size()-1)
                {
                    dfs(i,j,grid);
                    
                }
                
            }
            
        }
        
        
        
        for(int i=0;i<grid.size();i++)
        {
                for(int j=0;j<grid[0].size();j++)
                {
                    if(grid[i][j]==0)
                    {
                        dfs(i,j,grid);
                        cnt++;
                    }

                }
            
         }
        
        return cnt;
        
    }
};