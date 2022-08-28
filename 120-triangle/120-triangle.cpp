class Solution {
public:
    
    int n;
    
    int paths(int i, int j,vector<vector<int>>& v , vector<vector<int>> &dp)
    {
        if(i==n-1)
        {
            return v[i][j];
        }
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        int down=v[i][j]+ paths(i+1,j,v,dp);
        int diagonal=v[i][j]+paths(i+1,j+1,v,dp);
        
        return dp[i][j]=min(down,diagonal);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        vector<vector<int>> dp=triangle;
        
        n=triangle.size();
        
        for(auto &it:dp)
        {
            for(auto &indx:it)
            {
                indx=-1;
            }
        }
        
        return paths(0,0,triangle,dp);
        
        
    }
};