class Solution {
public:
    
    
    bool vowels(char c)
    {
        return c=='a' || c=='e'  || c=='i'  || c=='o'  || c=='u' || c=='A' || c=='E'  || c=='I'  || c=='O'  || c=='U' ;
    }
    
    
    bool halvesAreAlike(string s)
    {
        int cnt_a=0, cnt_b=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(vowels(s[i]) and i<s.size()/2)cnt_a++;
            else if(vowels(s[i]) and i>=s.size()/2)cnt_b++;
        }
        
        return cnt_a==cnt_b;
        
    }
};