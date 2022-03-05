class Solution {
public:
    int maxProductDifference(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        
        
        
        int a=nums[0]*nums[1];
        int b=nums[nums.size()-1]*nums[nums.size()-2];
  
        
        return abs(b-a);
        
    }
};