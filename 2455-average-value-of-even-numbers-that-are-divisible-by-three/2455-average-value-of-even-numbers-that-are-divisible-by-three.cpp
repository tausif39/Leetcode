class Solution {
public:
    
    int averageValue(vector<int>& nums) 
    {
         int average=0;
        
         int sum=0;
        
         int n=0;
        
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]%2==0 and nums[i]%3==0)
            {
                sum+=nums[i];
                n++;
            }
            
        }

        
        if(n==0)return 0;
        
        average=(sum/n);
        
        int ans=round(average);
        
        return ans;
        
    }
};