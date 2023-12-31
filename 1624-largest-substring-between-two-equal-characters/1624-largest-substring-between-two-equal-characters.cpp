class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int count = -1;
        int n = s.size() ;
        for(int i= 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(s[i] == s[j])
                {
                    count = max(count, j-i-1);
                }
            }
        }
        return count ;
    }
};