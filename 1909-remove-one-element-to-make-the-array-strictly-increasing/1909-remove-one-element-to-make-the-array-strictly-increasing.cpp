class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) 
    {
        bool flag=true;
        
        
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(flag)
            {
                if(i>0)
                {
                    if(nums[i]<nums[i+1])continue;
                    
                    else if(nums[i]>=nums[i+1])
                    {
                        if(nums[i-1]<nums[i+1])
                        {
                            flag=false;
                        }
                        
                        else if(i+1==nums.size()-1)
                        {
                            
                            return true;
                        }
                        else if(nums[i]<nums[i+2])
                        {
                            i++;
                            flag=false;
                            
                        }
                        else if(nums[i]>=nums[i+2])
                        {
                            return false;
                            
                        }
                    }

                }
                else
                {
                    
                    if(nums[i]>=nums[i+1])
                    {
                        flag=false;
                    }
                    
                }
                
            }
            else
            {
                cout<<i<<" ";
                if(nums[i]>=nums[i+1])return false;
                
            }
            
        }
        
        
        
        return true;
        
        
    }
};