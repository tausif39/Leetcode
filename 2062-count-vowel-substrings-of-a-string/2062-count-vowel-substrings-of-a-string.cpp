class Solution {
public:
    
    bool vowels1(char ab)
    {
        if(ab=='a' || ab=='e' || ab=='i' || ab=='o' || ab=='u' )return true;
        return false;
    }
    
    
    bool vowelss(string s)
    {
        int a1=0,e1=0,i1=0,o1=0,u1=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(!vowels1(s[i]))return false;;
            if(s[i]=='a')a1++;
            else if(s[i]=='e')e1++;
            else if(s[i]=='i')i1++;
            else if(s[i]=='o')o1++;
            else if(s[i]=='u')u1++;
        }
        
        if(a1==0 || e1==0 || i1==0 || o1==0 || u1==0)return false;
        
        return true;
    }
    
    int countVowelSubstrings(string word) 
    {
        int cnt=0;
        
        for(int i=0;i<word.size();i++)
        {
            if(!vowels1(word[i]))continue;
            string s;
            
            for(int j=i;j<word.size();j++)
            {
                
                s+=word[j];
                if(vowelss(s))cnt++;
            }
            
        }
        
        return cnt;
    }
};


// for(int k=i;k<word.size();k++)
// {

// }