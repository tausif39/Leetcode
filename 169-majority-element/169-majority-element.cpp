class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map <int , int > mp;
        
        for(auto num : nums ) ++mp[num];
        
        int maxii=0;
        for(auto num : mp)
        {
            maxii= max(maxii,num.second);
            
        }
        
        for(auto num : mp)
        {
            if(num.second==maxii)return num.first;
                
        }
        
                
        
            
            return -1;
    }
};