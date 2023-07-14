class Solution {
public:
    
        
    int longestArithSeqLength(vector<int>& nums)
    {
        vector< vector<int>> dp(nums.size(),vector<int>(1002,0));
        
        int ans=0;  
        
        for(int i=1;i<nums.size();i++)
        {
            
            for(int j=0;j<i;j++)
            {
                
                int cd=nums[i]-nums[j] + 501;
                
                dp[i][cd]= dp[j][cd]>0? dp[j][cd]+1:2;
                ans=max(ans,dp[i][cd]);
            }
            
        }
        
        return ans;
        
    }
};