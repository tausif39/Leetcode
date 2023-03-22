class Solution {
public:
    
    long long getDescentPeriods(vector<int>& nums) 
    {
        
        long long cnt=0;
        
        int left=0;
        
        for(int i=0;i<nums.size();i++)
        {
        
            
            if(i!=0 and nums[i]!=nums[i-1]-1)
            {
                left=i;
                
            }
            
            cnt+=i-left+1;

        }
        
        return cnt;
        
    }
};