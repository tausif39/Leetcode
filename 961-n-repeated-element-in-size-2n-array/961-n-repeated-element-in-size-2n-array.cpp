class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        unordered_map<int , int > mp;
        
        for(auto f: nums)
        {
            ++mp[f];
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]>1)
            {
                return nums[i];
            }
            
            
        }
        
        return 0;
        
        
    }
};