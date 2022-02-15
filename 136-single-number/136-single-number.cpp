class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        // int num=0;
        for(int i=1;i<nums.size();i++)
        {
            nums[0]^=nums[i];
        }
        return nums[0];
        
    }
};