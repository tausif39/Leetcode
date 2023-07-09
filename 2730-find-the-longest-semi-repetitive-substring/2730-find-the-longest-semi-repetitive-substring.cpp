class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) 
    {
        
        int semi_indx = 0;
        
        char prev=s[0];
        
       
        
        
        int maxi_len=1;
        
        int left=0;
        
        
        bool flag=false;
        
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==prev)
            {
                if(!flag)
                {
                    flag=true;
                    semi_indx=i;
                    // len++;
                    
                }
                else
                {
                     // maxi_len= max(maxi_len, i-semi_indx+1);
                     left=semi_indx;
                     semi_indx=i;
                }
                
                
            }
            else
            {
                prev=s[i];
            }
            
            maxi_len=max(maxi_len, i-left+1);
            
        }
        
        return maxi_len;
        
        
        
        
        
    }
};