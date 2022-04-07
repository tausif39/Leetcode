class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        
     int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        mini+=k;
        maxi-=k;
        return max(0,maxi-mini); //we want a positive value, it it's -ve it should return 0
    }     
};