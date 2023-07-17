class Solution {
public:
    
    
    int minimumIndex(vector<int>& nums) 
    {
        
        unordered_map<int, int> mp;
        
        for(auto it:nums)mp[it]++;
        
        int ans=0;
        int elem=-1;
        
        for(auto it:mp)
        {
            if(it.second>ans)
            {
                ans=it.second;
                elem=it.first;
            }
        }
        
        
        int cnt=0;
        
        // cout<<ans;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==elem)cnt++;
            
            if(cnt * 2 > (i+1))
            {
                
                if((ans-cnt)* 2 > (nums.size()-i-1))return i;
                
            }
            
            
        }
        
        return -1;
        
    }
};