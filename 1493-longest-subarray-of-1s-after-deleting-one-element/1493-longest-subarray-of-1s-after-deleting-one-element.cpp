class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        
        int cnt0=0;
        
        int len=0;
        int maxlen=0;
        
        int j=0;
        
        bool flag=false;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                cnt0++;
                if(cnt0==2)j++;
                else j=i;
            }
            
            if(cnt0==0 || cnt0==1)
            {
                
                    len++;
                
                    maxlen=max(maxlen,len-1);
                    maxlen=max(maxlen,i-j);
                
                
                if(cnt0==1)flag=true;
                
            }
            else 
            {
                
                len=0;
                cnt0=0;
            }
            
        }
        
        if(!flag)return nums.size()-1;
        
        return maxlen;
        
    }
};