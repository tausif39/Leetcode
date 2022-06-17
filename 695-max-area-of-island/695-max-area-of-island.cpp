class Solution {
public:
    
      void dfs(int i,int j, vector<vector<int>>& grid, int &cnt)
      { 
        int n=grid.size();
        int m=grid[0].size();
        
        if(i<0 || j<0)return ;
        if(i>=n || j>=m)return ;
        
        if(grid[i][j]!=1)return;
        
        if(grid[i][j]==1)cnt++;
        grid[i][j]=0;
        dfs(i+1,j,grid,cnt);
        dfs(i-1,j,grid,cnt);
        dfs(i,j-1,grid,cnt);
        dfs(i,j+1,grid,cnt);
        
     }
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& nums) 
    {
        int area_max=0;
        
         for(int i=0;i<nums.size();i++)
         {
            for(int j=0;j<nums[0].size();j++)
            {
                if(nums[i][j]==1)
                {
                   int cnt=0;

                   dfs(i,j,nums,cnt);
                    
                    area_max=max(area_max,cnt);
                    
                }
                
                
            }
            
        }
        
        return area_max;
        
    }
};