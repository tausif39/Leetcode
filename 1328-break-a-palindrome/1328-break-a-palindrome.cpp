class Solution {
public:
    string breakPalindrome(string s)
    {
       
        int n=s.size();
        
        map<char, int> mp;
        
        for(char it:s)mp[it]++;
        
        int cnt;
        
        if(n==1)return "";
        
        for(auto it:mp)
        {
            it.second=cnt;break;
        }
        
        if(cnt==n)
        {
            
          
           if(s[0]=='a') 
           {
               s[n-1]='b';
           }
            else s[0]='a';
        }
        
        // if(mp.size()==1 || mp.size()==2)return "";
        
        
        
        
        bool flag=true;
        
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!='a')
            {
                s[i]='a';
                flag=false;
                break;
            }
        }
        
        if(flag)
        {
            s[n-1]='b';
        }
        
        
        return s;
    }
};