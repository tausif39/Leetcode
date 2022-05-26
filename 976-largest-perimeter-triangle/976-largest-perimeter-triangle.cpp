class Solution {
public:
    int largestPerimeter(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end(),greater<int>());
        
        int i=0;
        
        bool flag=true;
        
        while(i<nums.size())
        {
            if(i+2>=nums.size())break;
            
//             if(nums[i]+nums[i+1]<nums[i+2])flag=false;
//             if(nums[i]+nums[i+2]<nums[i+1])flag=false;
            
//             if(nums[i+2]+nums[i+1]<nums[i])flag=false;
            
            
            if(nums[i]+nums[i+1]>nums[i+2])
            {
                if(nums[i]+nums[i+2]>nums[i+1])
                {
                    if(nums[i+2]+nums[i+1]>nums[i])
                    {
                        
                        return nums[i+2]+nums[i+1]+nums[i];
                        
                    }
                    
                }
            }
            
            i+=1;
            
        }
        
        // if(flag==false)
        // {
        //     return -1;
        // }
        return 0;
        
    }
};