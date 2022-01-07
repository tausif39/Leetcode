class Solution {
public:
    
    int maximum(vector<int>& nums)
    {
        int maxi=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(maxi<nums[i])
            {
                maxi=nums[i];
            }
            
            
            
        }
        return maxi;
    }
    
    int minimum(vector<int>& nums)
    {
        int mini=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(mini>nums[i])
            {
                mini=nums[i];
            }
            
            
            
        }
        return mini;
    }
    int GCD(int a,int b)
    {
        int ans;
        if(a==0)return b;
            
        
        return GCD(b%a,a);
    }
        
    
    int findGCD(vector<int>& nums) 
    {
        int b=maximum(nums);
        int a=minimum(nums);
        
       
   int hcf=GCD(a,b);
        return hcf;
            
            
            
            
    }
};