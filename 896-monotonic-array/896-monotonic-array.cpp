class Solution {
public:
    
    bool monodec(vector<int>& nums)
    {
        for(int i=1;i<nums.size()-1;i++)
            {
                if(nums[i]<nums[i+1])
                {
                    return false;
                }
                
            }
        
        return true;
        
    }
    
    bool monoinc(vector<int>& nums)
    {
        for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    return false;
                }
                
            }
        return true;
    }
    
    bool isMonotonic(vector<int>& nums)
    {
        if(nums.size()==1) return true;
        
        if(nums[0]>nums[1])
        {
            
            
           if( monodec(nums)==false)return false;
            
        }
        
        if(nums[0]<nums[1])
        {
            
            if( monoinc(nums)==false)return false;
            
        }
        
        if(nums[0]==nums[1])
        {
            
            
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]==nums[i+1])continue;
                
                if(nums[i]>nums[i+1])
                {
                    for(;i<nums.size()-1;i++)
                    {
                        if(nums[i]<nums[i+1])
                        {
                            return false;
                        }
                        
                    }
                    
                    break;
                    
                }
                
             if(nums[i]<nums[i+1])
             {
                 for(;i<nums.size()-1;i++)
                    {
                        if(nums[i]>nums[i+1])
                        {
                            return false;
                        }
                        
                    }
                    
                    break;
                 
             }
                 
            }
        }
        
        return true;
        
    }
};