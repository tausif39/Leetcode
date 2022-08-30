class Solution {
public:
    int reductionOperations(vector<int>& nums) 
    {
        map<long long , long long> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        int ans=0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=nums.size()-1;i>0;i--)
        {
            
            if(nums[i]!=nums[i-1])
            {
                ans+=nums.size()-i;
            }
            
            mp[nums[i-1]]+=(long long)nums[i];
            
            
        }
        
        return ans;
        
        
        
    }
};