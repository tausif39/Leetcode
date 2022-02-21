class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int > v;
        
        unordered_map <int , int > mp;
        
        for(auto num : nums ) ++mp[num];
        
        // 
        
        int frequency =nums.size()/3;
        
        for(auto num : mp)
        {
           if(num.second>frequency)
           {
               v.push_back(num.first);
           }
            
        }
        
//         for(auto num : mp)
//         {
//             if(num.second==maxii)return num.first;
                
//         }
        
                
        
            
            return v;
        
        
    }
};