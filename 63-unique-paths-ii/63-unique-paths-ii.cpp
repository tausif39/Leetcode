class Solution {
public:
    
    int paths(int m, int n, int i, int j , vector<vector<int>> &dp , vector<vector<int>>& grid)
    {
        
  
        if(i==(m -1) and j==(n-1))
        {
            if(grid[i][j]==1)return 0;
            
            return 1;
        }
        
        if(i>=m || j>=n)    return 0;
        
        if(grid[i][j]==1 )return 0;
        
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        // int down, right;
        
        int down =paths(m,n,i+1,j, dp, grid);  // down
        int right =paths(m,n,i,j+1, dp, grid);  //right
        return  dp[i][j]=down + right;
         
        
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& grid) 
    {
        
        
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n, -1));
        
        if(grid[m-1][n-1]==1)return 0;
        
        return paths(m,n,0,0 ,dp,grid);
        
        
        
    }
};