class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        
        
        int prd=0;
        
        
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
               if(i==j)
               {
                   continue;
               }
               else
               {
                   prd=max((nums[i]-1)*(nums[j]-1),prd) ;
               }
                
                
            }   
         
        }
        return prd;
    }
};