class Solution {
public:

    vector<int>dp;

    int func(vector<int>&nums,int target,int i)
    {
        // if(i>=nums.size())return INT_MIN;
        if(i==nums.size()-1)return 0;

        if(dp[i]!=-1)return dp[i];
        int a=INT_MIN;
        for(int j=i+1;j<nums.size();j++)
        {
            if(abs(nums[i]-nums[j])<=target)
            {
                a=max(a,func(nums,target,j)+1);
            }
        }
        return dp[i]=a;
    }

    int maximumJumps(vector<int>& nums, int target) {
        dp.resize(nums.size()+1,-1);
        int ans=func(nums,target,0);
        return ans<0?-1:ans;
    }
};