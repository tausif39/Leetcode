class Solution {
public:
    
    int MOD=1e9 + 7;
    
    
    int paths(vector<vector<int>>& grid, int k , int sum , int i  , int j , vector<vector<vector<int>>> & dp) 
    {
        int n=grid.size();
        
        int m=grid[0].size();
        
        if(i>=n || j>=m || i<0 || j<0)return 0;
        
        if(i==n-1 and j==m-1)
        {
            sum+=grid[i][j];
            if(sum%k==0)
            {
                  return 1;
            }
            
                return 0;
        }
        
        
        if(dp[i][j][sum%k]!=-1)return dp[i][j][sum%k];  //at a single  point  two sum can be possible
        
        
        
        
        
        long right=paths(grid,k,sum+grid[i][j] ,i+1,j , dp);
        
        
        long down= paths(grid,k,sum+grid[i][j] ,i,j+1 , dp);
        
        
        
        return dp[i][j][sum%k] = (right%MOD + down%MOD)%MOD;
        
        
    }
    
    
    int numberOfPaths(vector<vector<int>>& grid, int k) 
    {
        int r=grid.size();
        int c=grid[0].size();
   
        vector<vector<vector<int>>> dp(r ,vector<vector<int>>(c,vector<int>(51,-1)));
   
        
        
        return paths(grid, k, 0 , 0 , 0 , dp);
        
    }
};