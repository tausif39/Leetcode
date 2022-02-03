class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int maxdiff = -1;
        int value=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            value=min(value,nums[i]);
            
            if(nums[i]>value)
            {
                maxdiff=max(maxdiff,nums[i]-value);
                
            }
            
        }
        
        return maxdiff;
        
    }
};