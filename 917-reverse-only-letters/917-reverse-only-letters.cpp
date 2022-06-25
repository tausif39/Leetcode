class Solution {
public:
    string reverseOnlyLetters(string s) 
    {
        string ans=s;
        
        reverse(s.begin(),s.end());
        
        int i=0;
        int j=0;
        
        while(i<s.size() and j<s.size())
        {
            if((ans[i]<'a' || ans[i]>'z') and (ans[i]<'A' || ans[i]>'Z'))
            {
                i++;
            }
            else if((s[j]<'a' || s[j]>'z') and (s[j]<'A' || s[j]>'Z'))
            {
                j++;
            }
            else 
            {
                ans[i++]=s[j++];
            }
            
        }
        
        return ans;
        
    }
};