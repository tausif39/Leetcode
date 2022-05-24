class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int i=0;
        int j=nums.size()-1;
        
        if(nums[i]<nums[j])return nums[i];;
        
        int mid;
        while(i<=j)
        {
            mid=(i+j)/2;
            
            if(i==j)return nums[mid];
            
            if(nums[mid]>nums[j])
            {
                i=mid+1;
            }
            else
            {
                j=mid;
            }
            
            
        }
        
        
        return nums[j];
        
        
    }
};