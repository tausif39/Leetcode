class Solution {
public:
    
    int maximumJumps(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector<int>dp(n,-1);
        dp[0]=0;
        
        for(int i=1;i<n;i++)
        {
            
            for(int j=0;j<i;j++)
            {
                if(abs(nums[i]-nums[j])<=target  and dp[j]!=-1)
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            
        }
        
        return dp[n-1]<0?-1:dp[n-1];
    }
};


//         
        // int ans=func(nums,tar:
//     int func(vector<int>&nums,int target,int i)
//     {
//         if(i==nums.size()-1)return 0;

//         if(dp[i]!=-1)return dp[i];
//         int a=INT_MIN;
//         for(int j=i+1;j<nums.size();j++)
//         {
            
//         }
//         return dp[i]=a;
//     }