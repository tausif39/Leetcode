class Solution {
public:
    int maxAscendingSum(vector<int>& nums) 
    {
        
        
        
        int i=1;
        
        int j=0;
        
        int current_sum=nums[0],sum=nums[0];
        
        
        
        while(i<nums.size())
        {
            current_sum+=nums[i];
            
            if(nums[i]<=nums[i-1])
            {
                j=i;
                current_sum=nums[i];
            }
            
            sum=max(sum,current_sum);
            
            i++;
            
        }
        
        return sum;
        
    }
};