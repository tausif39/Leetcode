class Solution {
public:
    
    
    int kadane(vector<int> nums)
    {
        
        int sum=0;
        
        int ans=0;
        
        for(auto it:nums)
        {
            sum+=it;
            
            ans=max(ans,sum);
            
            if(sum<0)sum=0;
            
        }
        
        return ans;
        
    }
    
    
    int maxAbsoluteSum(vector<int>& nums) 
    {
        int pos=kadane(nums);
        
        int neg;
        
        
        for(auto &it:nums)it=-it;
        
        
        neg=kadane(nums);
        
        return max(neg,pos);
        
        
        
        
    }
};