class Solution {
// Palindrome check function
    bool isPal(string s, int l, int r)
    {
        while(l < r)
        {
            if(s[l] != s[r])
                return false;
            
            l++;
            r--;
        }
        
        return true;
    }
public:
    bool validPalindrome(string s) {
        int st = 0, en = s.length()-1;
        
        // we're going to check first and last
        // character in pairs
        while(st < en)
        {
            // if there's mismatch, we're going to 
            // ignore one character 
            if(s[st] != s[en])
            {
                // we have two options
                // 1. we can ignore first character. 
                // 2. we can ignore second character.
                // ignoring one character, if the rest 
                // is a palindrom, it's our answer
                return isPal(s, st+1, en) || isPal(s, st, en-1);
            }
            st++;
            en--;
        }
        return 1;
    }
};