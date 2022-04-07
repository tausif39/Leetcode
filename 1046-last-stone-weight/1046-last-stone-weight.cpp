class Solution {
public:
    int lastStoneWeight(vector<int>& nums) 
    {
        
        
        while(nums.size()>1)
        {
            sort(nums.begin(),nums.end());
            
            int n=nums.size();
            
            if(nums[n-1]==nums[n-2])
            {
                nums.pop_back();nums.pop_back();
            }
            
            else if(nums[n-1]!=nums[n-2])
            {
                swap(nums[n-1],nums[n-2]);
                
                nums[n-2]=nums[n-2]-nums[n-1];
                
                nums.pop_back();
            }
            
            
            
        }
        
        if(nums.size()==1)return nums[0];
        
        return 0;
        
        
    }
};