class Solution {
public:
    
    long long maximumTripletValue(vector<int>& nums) 
    {
        
        
        int n=nums.size();
        
         vector<int> v(n);
        
        
        int maxii=INT_MIN;
        
        
        for(int i=n-1;i>=0;i--)
        {
            
            maxii=max(nums[i],maxii);
            
            v[i]=maxii;
            
        }
        
        
        long long ans=0;
        
        maxii=INT_MIN;
        
        for(int i=0;i<n-1;i++)
        {
            
            maxii=max(nums[i],maxii);
            
            if(maxii>nums[i])
            {
                
                long long curr=(long long)(maxii-nums[i])*v[i+1];
                
                if(curr>ans)
                {
                    ans=curr;
                }
                
            }
            
            
        }
        
        
        return ans;
        
    }
};