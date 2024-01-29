class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) 
    {
        
        
        sort(nums.begin(),nums.end());
        
        long long ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            
            int lwr=lower-nums[i];
            int upr=upper-nums[i];
            
            ans+= upper_bound(nums.begin()+i+1,nums.end(),upr) - lower_bound(nums.begin()+i+1,nums.end(),lwr);
            
            
        }
        return ans;
        
        
        
    }
};