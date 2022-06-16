class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {
        int total_sum=0;
        
        for(int i:nums)total_sum+=i;
        
        
        
        
        
        
        int sum=total_sum - x;
        
        
        int leng=INT_MIN;
        
        int j=0;
        
        int current_sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            current_sum+=nums[i];
            
            while(current_sum>sum and j<=i)
            {
                current_sum-=nums[j];
                
                
                j++;
            }
            
            if(current_sum==sum)
            {
                leng=max(leng,i-j+1);
            }
            
            
        }
        
        
        if(leng==INT_MIN)return -1;
        
        return nums.size()-leng;
        
        
    }
};