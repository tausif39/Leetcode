class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int mini =INT_MAX;
        
        
        for(int i=0;i<nums.size();i++)
        {
            int sum=nums[i];
            
            if(sum>=target)
            {
                mini=1;
            }
            
            for(int j=i+1;j<nums.size();j++)
            {
                sum+=nums[j];
                
                if(sum>=target)
                {
                    mini=min(mini,j-i+1);
                    break;
                }
                
            }

        }
        
        if(mini==INT_MAX)return 0;
        
        return mini;
        
    }
};