class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) 
    {
        
        multiset<int> mp;
        
        int i=0,j=0;
        
        int ans=0;     
        
        while(j<nums.size())
        {
            mp.insert(nums[j]);
            
            while(*mp.rbegin() -*mp.begin()>limit)
            {  
                mp.erase(mp.find(nums[i]));
                
                // cout<<1;
                
                i++;
                
            }
              
            ans=max(ans,j-i+1);
            
            j++;
            
        }
        
        return ans;
        
    }
};