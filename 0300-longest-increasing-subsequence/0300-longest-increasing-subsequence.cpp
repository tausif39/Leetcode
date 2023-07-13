class Solution {
public:
      
    int help(vector<int>& nums, vector<vector<int>> &dp,int indx , int prev)
    {
        
        if(indx==nums.size())
        {
            return 0;
        }
        
        
        if(dp[indx][prev+1]!=-1)
        {
            return dp[indx][prev+1];
        }
        
        int take=0;
        
        if(prev==-1 || nums[prev]<nums[indx])
        {
            take= 1+ help(nums,dp,indx+1,indx);
        }
        
        int not_take= 0+ help(nums,dp,indx+1,prev);
        

        
       return  dp[indx][prev+1]=max(take, not_take);
        
    }
    
    
    int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        
         vector<vector<int>> dp (n+1,vector<int>(n+2,-1));
          
        return help(nums,dp, 0 ,-1);             
        
    }
};