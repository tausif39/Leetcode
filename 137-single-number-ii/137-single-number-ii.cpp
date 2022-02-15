class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        
        int value=nums[0]+1;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])value=nums[i];
            
           else if(nums[i]!=nums[i+1] and nums[i]!=value)return nums[i];
        }
        
        
        
        return nums[nums.size()-1];
        
    }
};