class Solution {
public:
    
    long long zeroFilledSubarray(vector<int>& nums)
    {
        
        long long n=nums.size();
        
        long long total=(n*(n+1))/2;
        
        int left=0;
        
        long long cnt=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                left=i+1;
                continue;
            }
            
            cnt+=i-left+1;
            
            
        }
        
        // cout<<total;
        
        return cnt;
    }
};