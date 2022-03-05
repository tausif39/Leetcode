class Solution {
public:
    int maxProductDifference(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        
        int maxdiff=INT_MIN;
        
        int a=nums[0]*nums[1];
        int b=nums[nums.size()-1]*nums[nums.size()-2];
        
        // /int c==abs(b-a);
        
        return abs(b-a);
        
    }
};