class Solution {
public:
    int addMinimum(string word) 
    {
        string t = "abc";
        int ans = 0;
        int i=0,j=0,n=word.length();
        
        while(i < n)
        {
            if(word[i] == t[j++]) i++;
            else ans++;  
            j %= 3;   
        }
        
        if(word[n-1] == 'a') return ans + 2;
        if(word[n-1] == 'b') return ans + 1;
        return ans;
        
    }
};