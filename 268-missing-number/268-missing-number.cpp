class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
       int missing;
    sort(nums.begin(), nums.end());
    for (int range =0; range <= nums.size(); range++)
    {
        if (nums[nums.size()-1] == nums.size()  && nums[0] == 0)
        {
            if (range !=nums[range] )

            {
                return range;
                
            }
        }
        else if (nums.front() == 0 && nums.back() != nums.size())
        {
            return nums.size();
        }
        else if (nums.front() != 0 && nums.size() == nums.back())
        {
            return 0;
        }
    }
    return -1;
        
        
    }
        
        
    
};