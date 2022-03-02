class Solution {
public:
    
    int helper(vector<int>& nums, int sum, int n)
    {
        int dp[n+1][sum+1];
        
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= sum; j++)
            {
                if(i == 0)
                    dp[i][j] = 0;
                if(j == 0)
                    dp[i][j] = 1;
            }
        }
        
        //dp[0][0] = 1;
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j <= sum; j++)
            {
                if(nums[i - 1] <= j)
                 dp[i][j] = dp[i - 1][j - nums[i - 1]] + dp[i - 1][j];
                else
                  dp[i][j] = dp[i - 1][j];
            }
        }
        
        return dp[n][sum];  
    }
    
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        target=abs(target);
        int sum=0;
        
        for(int i=0;i<nums.size();i++)sum+=nums[i];
        
        int s1=(target + sum)/2;
        
        if((sum + target) % 2 != 0)return 0;
		// if(abs(s1)>target)return 0;
        if(sum<target)return 0;
        int n=nums.size();
       return helper(nums,s1,n);
        
        
    }
};

 // If we start the j loop with j=1, then we will ignore the case when there is a zero in the array. For example, to make a subset with sum 0 - either we make an empty subset(this case can be taken care of by filling the 0th column with 1s) OR we make a subset with 0s present in the array. When we start the loop with j=0, we will also be checking for the latter case i.e. Zero is present in the array. Even in the question you mentioned "Count of subsets with sum equal to X", this thing is valid. The code given on GFG does not work for an array containing zeroes. Try dry running with an array that contains 0s with that code