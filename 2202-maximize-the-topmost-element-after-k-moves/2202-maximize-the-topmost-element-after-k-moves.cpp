class Solution {
public:
    int maximumTop(vector<int>& nums, int k) 
    {
        int n=nums.size();
        
        if(k%2!=0 and n==1)return -1;
        
        int maxii=0;
        
        int i=0;
        
        for( i=0;i<n;i++)
        {
            if(k==0)break;
            
            if(k>1)
            {
                maxii=max(maxii,nums[i]);
            }
            
            k--;
            
        }
        
        if(i<n)
        {
            maxii=max(maxii,nums[i]);
            
        }
        
        
        return maxii;
        
        
        
        
        
    }
};