class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        if(nums.size()<2)return 0;
        
        sort(nums.begin(),nums.end());
        
        int maxii=INT_MIN;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            maxii=max(maxii,abs(nums[i]-nums[i+1]));
            
        }
        
        return maxii;
        
        
        
    }
};