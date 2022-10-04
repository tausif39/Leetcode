class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) 
    {
        
        
        int j=0;
        
        int num=0;
        
        int nice_len=0;
        
        for(int i=0;i<nums.size();i++)
        {
            
            while((num&nums[i])!=0 )
            {
                num^=nums[j++];
        
            }
    
            num|=nums[i];
            
            nice_len=max(nice_len, i-j+1);
            
        }
        
        
        return nice_len;
        
    }
};