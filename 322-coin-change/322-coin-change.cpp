class Solution {
public:
    
    int help(vector<int>& coins, int amount,int indx,vector<vector<int>> &dp) 
    {
        if(amount==0)return 0;
        
        if(indx>=coins.size() || amount<0 )
        {
            
         return INT_MAX-1;
            
            
            
        }
        
        if(dp[indx][amount]!=-1)return dp[indx][amount];
        
        int a,b;
        
       dp[indx][amount]= a=1+help(coins,amount-coins[indx],indx,dp);
        
        
      dp[indx][amount]= b=help(coins,amount,indx+1,dp);
           
        
            
        return dp[indx][amount]= min(a,b);
        
    }
    
    
    int coinChange(vector<int>& coins, int amount) 
    {
        // sort(coins.begin(),coins.end(),greater<int>());
        
        vector<vector<int>> dp(13,vector<int>(10001,-1));
        
        
        
        if(help(coins,amount,0,dp)==INT_MAX-1)return -1;
        
        
        
        return help(coins,amount,0,dp);
        
    }
};