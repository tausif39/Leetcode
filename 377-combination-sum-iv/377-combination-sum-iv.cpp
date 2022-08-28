class Solution {
public:
int dp[1001];
int solve(vector<int> &nums ,int tar)
{
if(tar==0)return 1;
if(tar<0) return 0;
if(dp[tar]!=-1)return dp[tar];
int ans=0;
for(int i=0;i<nums.size();++i)
{

        ans+=solve(nums,tar-nums[i]);
     }
    
    // dp[tar]=ans;
    return dp[tar]=ans;
 
}
int combinationSum4(vector<int>& nums, int target) {
    memset(dp,-1,sizeof(dp));
    return solve(nums,target);
}
};