class Solution {
public:
    
    int maxWidthRamp(vector<int>& nums) 
    {
        
       stack<int> strict_monotonic_decreasing;
        int ans = 0;
        
        for(int i = 0; i< nums.size(); i++)
        {
            
            if(strict_monotonic_decreasing.empty() || nums[strict_monotonic_decreasing.top()] > nums[i])
            {
                
                strict_monotonic_decreasing.push(i);
            }
        }
        
        for(int j = nums.size()-1; j >=0; j--)
        {
            
            while(!strict_monotonic_decreasing.empty() && nums[strict_monotonic_decreasing.top()]<=nums[j])
            {
                
                ans = max(ans, j - strict_monotonic_decreasing.top());
                strict_monotonic_decreasing.pop();
            }
        }
        
        return ans;
    }
};