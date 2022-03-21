class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        // if(s.size()==1)return 1;
        
        
        bool flag=false;
        int cunt=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {flag=true;break;
            }
            cunt++;
        }
        
        if(!flag)
        {
            return cunt;
        }
            
        int i=s.size()-1;
        
        while(s[i]==' ')
        {
            i--;
        }
        
        int cnt=0;
        
         while(i>=0 and s[i]!=' ')
        {
            i--;
             cnt++;
        }
        
        return cnt;
        
        
        
    }
};