class Solution {
public:
    int secondHighest(string s) 
    {
        int f_max=INT_MIN;
        int s_max=INT_MIN;
        int digit=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' and s[i]<='9')
            {
             digit= s[i]-'0';
                
                if(digit>f_max)
                {
                    s_max=f_max;
                    f_max=digit;
                    
                    
                }
                
                else if(digit<f_max and digit>s_max)
                {
                    s_max=digit;
                    
                }
                
                
            }
        }
        
        if(s_max==INT_MIN)
        {
            return -1;
            
        }
       
        
        return s_max;
        
    }
};