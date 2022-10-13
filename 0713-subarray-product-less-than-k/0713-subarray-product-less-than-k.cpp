class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        
        int start=0;
        
        long prd=1;
        
        int cnt=0;
        
        
        for(int i=0;i<nums.size();i++)
        {
            prd*=nums[i];
            
            while(prd>=k and start<nums.size())
            {
                
                prd/=nums[start++];
                
                
                
            }
            
           if(prd < k)
            cnt += i - start +1;
            
            
        }
        
        return cnt;
        
        
        
    }
};