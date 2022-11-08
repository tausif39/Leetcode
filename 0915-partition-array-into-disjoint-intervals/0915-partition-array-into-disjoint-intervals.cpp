class Solution {
public:
    
    int partitionDisjoint(vector<int>& nums)
    {
        
        
        int n = nums.size();
        
        // store the minimum element from right side till index i
        
        vector<int> right_min(n, 0);
        
        // fill the right_min array
        
        right_min[n - 1] = nums[n - 1];
        
        for(int i = n - 2; i >= 0; i--)
        {
            right_min[i] = min(right_min[i + 1], nums[i]);
        }
        
        // store the maximum element from the left side till index i
        
        int left_max = nums[0];
        
        // count the size of left array
        
        int count = 1;
        
        for(int i = 1; i < n; i++)
        {
            if(left_max > right_min[i])
            {
                count++;
                
                left_max = max(left_max, nums[i]);
            }
            else
                break;
            
        }
        
        return count;
    }
};