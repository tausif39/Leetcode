class Solution {
public:
    
    int longestSubarray(vector<int>& nums) 
    {
        
        int maxii=1,maxii_len=1;
        
        for(int i=0;i<nums.size();i++)
        {
            
            int len=0;
                
            int num=nums[i];
              if(i<nums.size() and maxii<nums[i])
             {
                maxii=nums[i];
                maxii_len=1;
             }
            
            
            
            while(i<nums.size()-1 and num>=nums[i+1])
            {
                
                // if(maxii_len==22)cout<<nums[i]<<" ";
                num&=nums[i+1];
                
                len++;
                
                if(maxii<num)
                {
                    maxii=num;
                    maxii_len=len+1;
                    
                }
                else if(maxii==num)
                {
                     maxii_len=max(maxii_len,len+1);
                }
                
               i++;
            }
            
             if(i<nums.size() and maxii<nums[i])
             {
                maxii=nums[i];
                maxii_len=1;
             }
            
            
            
        }
        
        return maxii_len;
        
        
    }
};