class Solution {
public:
    
    void helper(string &s, string &t, int m ,int n, bool & ok)
    {
        if(n==t.size())
        {
            if(m==s.size())ok= true;
            else ok= false;
            return ;
        }
        
        if(m==s.size())
        {
            ok= true;
            return ;
        }
        
        if(s[m]==t[n])
        {
            helper(s,t,m+1,n+1,ok);
        }
        
        else
        {
            helper(s,t,m,n+1,ok);
        }
        
      
            
    }
    
    
    bool isSubsequence(string s, string t) 
    {
        
        bool ok;
         helper(s,t,0,0,ok);
        return ok;
        
    }
};