class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
       if(nums.size()==1) return 0;
        
        
            int  f_maxx=INT_MIN;
            int indx=0;
            int s_maxx=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>f_maxx)
            {
                s_maxx=f_maxx;
                f_maxx=nums[i];
                indx=i;
                
            }
            
            if(nums[i]<f_maxx and s_maxx<nums[i])
            {
                s_maxx=nums[i];
            }
            
            
            
        }
        
        if((f_maxx/2)>=s_maxx)
        {
            return indx;
        }
        
        return -1;
    }
};