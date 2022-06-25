class Solution {
public:
    bool checkPossibility(vector<int>& nums) 
    {
        
        bool flag=false;
        
        
        for(int i=1;i<nums.size()-1;i++)
        {

            
            if(!flag)
            {
                
                if(nums[i]<nums[i-1])
                {
                    if(nums[i-1]<=nums[i+1])
                    {
                        nums[i]=nums[i-1];  
                        flag=true;
                    }
                    else
                    {
                        nums[i-1]=nums[i];  
                        flag=true;
                    }
                }
                
                
            }
            
            else
            {
                if(nums[i]<nums[i-1])
                {
                     return false;

                }
                
                
            }
            
            
           
            
            
        }
        
        
        if(flag==false)
        {
            
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    nums[i+1]=nums[i];
                    flag=true;
                }

            }
            
        }
        
          
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]>nums[i+1])return false;
                
            }
        
        
        
        return true;
        
    }
};