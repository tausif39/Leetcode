class Solution {
public:
    int smallestEqual(vector<int>& nums) 
    {
        for(int i=0;i<nums.size();i++)
        {
            if(i%10==nums[i] and nums[i]<10)
            {
                return i;
                
            }
                
        }
        
        
        return -1;
  
    }
};