class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        
        int ans=INT_MAX;
        
        int len=0, sum=0;
        
        int j=0;
        
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            len++;
            
            while(j<=i and sum>=target)
            {
                ans=min(ans,i-j+1);
                sum-=nums[j];
                len--;
                j++;
                
            }     
        }
        
        // if(ans=_)
        
        
        return (ans==INT_MAX)?0: ans;
  
        
    }
};