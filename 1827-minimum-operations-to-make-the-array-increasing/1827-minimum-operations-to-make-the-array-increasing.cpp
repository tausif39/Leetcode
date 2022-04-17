class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
       
        int cnt=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])continue;
            
            else 
            {
                int diff= nums[i-1]-nums[i] +1;
                cnt+=diff;
                
                nums[i]+=diff;
                
            }
            
            
        }
        
            return cnt;
    }
};