class Solution {
public:
    
    long long maxArrayValue(vector<int>& nums) 
    {
        
        long long ans=nums[0];
        
        long long sum=nums[0];
        
        for(int i=0;i<nums.size()-1;i++)
        {
            
            
            if(sum <= nums[i + 1])
            {
                sum+=nums[i+1];
                
                ans=max(sum,ans);  
            }
            else 
            {
                // nums
                sum=nums[i+1];
            }
         
        }
        
        sum=nums[nums.size()-1];
        
        for(int i=nums.size()-1;i>0;i--)
        {
            
            
            if(sum >= nums[i - 1])
            {
                sum+=nums[i-1];
                
                ans=max(sum,ans);  
            }
            else 
            {
                // nums
                sum=nums[i-1];
            }
         
        }
        
        return ans;
        
        
    }
};  