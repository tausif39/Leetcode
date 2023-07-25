class Solution {
public:
    
    int findPeakElement(vector<int>& nums)
    {
        
        int low=0, high=nums.size()-1;
        
        if(nums.size()==1)return 0;
        
        if(nums[low]>nums[low+1])return low;
        if(nums[high]>nums[high-1])return high;
        
        
        while(low<=high)
        {
            int mid= (high-low)/2 +low;
            
            // edge 
            // last index
            
            
            if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1])
            {
                return mid;
            }
        
            else if(nums[mid]<nums[mid+1] and nums[mid]>nums[mid-1])
            {
                low=mid;
            }
            else
            {
                high=mid;
            }
            
            
            
        }
        
        
        
        return -1;
        
        
    }
};