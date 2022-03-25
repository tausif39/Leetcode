class Solution {
public:
    string modifyString(string s) 
    {
        if(s.size()==1)return "a";
        
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                if(i==0)
                {
                    if(s[i+1]!='a')
                    {
                        s[i]='a';
                    }
                    
                    else 
                    {
                        s[i]='b';
                        
                    }
                }
                
                else if(i==s.size()-1)
                {
                    if(s[i-1]!='a')
                    {
                        s[i]='a';
                    }
                    
                    else 
                    {
                        s[i]='b';
                        
                    }
                }
                
                else
                {
                    if(s[i-1]!='b' and s[i+1]!='b')
                    {
                        s[i]='b';
                    }
                    
                   else if(s[i-1]!='c' and s[i+1]!='c')
                    {
                        s[i]='c';
                    }
                    
                  else  if(s[i-1]!='a' and s[i+1]!='a')
                    {
                        s[i]='a';
                    }
                  else  if(s[i-1]!='d' and s[i+1]!='d')
                    {
                        s[i]='d';
                    }
                    
                    
                    
                    
                    
                    
                }
                
                
                
            }
            
        }
        
        
        
        
        return s;
        
    }
};