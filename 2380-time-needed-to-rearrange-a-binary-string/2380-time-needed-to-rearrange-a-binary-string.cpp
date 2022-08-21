class Solution {
public:
    
    bool checkin(string s)
    {
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0' and s[i+1]=='1')return true;
            
        }
        
        return false;
    }
    
    int secondsToRemoveOccurrences(string s) 
    {
        
        int cnt=0;
        
        while(checkin(s))
        {
            
            
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]=='0' and s[i+1]=='1')
                {
                    s[i]='1';s[i+1]='0';i++;
                }

            }
            
            cnt++;
            
            
        }
        
        return cnt;
        
        
        
        
        
    }
};