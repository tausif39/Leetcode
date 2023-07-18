class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k)
    {
        
        sort(nums.begin(),nums.end());
        
        
        map<int, int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]-k]++;
            mp[nums[i]+k+1]--;
        }
        
        int ans=0,sum=0;
        
        for(auto it:mp)
        {
            
            sum+=it.second;
            ans=max(sum,ans);
            
        }
        
        return ans;       
        
        
    }
};