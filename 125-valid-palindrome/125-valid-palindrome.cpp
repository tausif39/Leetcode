class Solution {
public:
    bool isPalindrome(string s) 
    {
        if(s.size()==1) return true;
        string p;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0'&& s[i]<='9')
            {
                p.push_back(s[i]);
            }   
        }
         for(int i=0;i<p.size();i++)
         {
             if(p[i]>='A' && p[i]<='Z')
             {
                 p[i]+=32;
             }
         }
        
        
        string r=p;                                        
        reverse(r.begin(),r.end());
        // for(int i=0;i<p.size();i++)
        // {
        //     if(r[i]!=p[i])
        //     return false;
        // }  
        
        return r==p;
        
    }
};