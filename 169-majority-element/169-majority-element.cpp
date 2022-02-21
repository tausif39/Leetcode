class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        
        int cnt =0;
        int candidate;
        
        for(int i=0;i<nums.size();i++)
        {
            if(cnt==0)candidate=nums[i];
            
            if(nums[i]==candidate)
            {
                cnt++;
            }
            
            else 
            {
                cnt--;
            }
            
        }
        
        
//         unordered_map <int , int > mp;
        
//         for(auto num : nums ) ++mp[num];
        
//         int maxii=0;
//         for(auto num : mp)
//         {
//             maxii= max(maxii,num.second);
            
//         }
        
//         for(auto num : mp)
//         {
//             if(num.second==maxii)return num.first;
                
//         }
        
                
        
            
            return candidate;
    }
};