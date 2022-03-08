class Solution {
public:
    
    int help(vector<int>& coins,int amount ,int indx, vector<vector<int>> &dp) 
    {
        if(amount==0)
        {
            return 1;
        }
        
        if(amount<0)return 0;
        
        if(indx==coins.size())
        {
            if(amount==0)return 1;
            else  return 0;
        }
        
        if(dp[indx][amount]!=-1)return dp[indx][amount];
        
         
        int a,b;
        dp[indx][amount]=  a=  help(coins,amount-coins[indx],indx,dp);
        
        
      dp[indx][amount]=  b= help(coins,amount,indx+1,dp);
        
        
        return dp[indx][amount]= a+b;
        
    }
    
    
    int change(int amount, vector<int>& coins) 
    {
        vector<vector<int>> dp(301,vector<int> (5001,-1));
        
        return help(coins,amount,0,dp);
        
    }
};