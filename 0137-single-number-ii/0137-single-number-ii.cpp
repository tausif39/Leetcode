class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        
        int ans=0;
        
        for(int i=0 ; i<32 ; i++)
        {
            int cnt_odd=0 , cnt_even=0;
        
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]&(1<<i))cnt_odd++;
                else cnt_even++;
            }
            
            if(cnt_odd%3)
            {
                ans |= (1<<i);
            }
            
            
        }
        
        return ans;
        
        
    }
};