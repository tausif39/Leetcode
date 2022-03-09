class Solution {
public:
    
    int help(vector<vector<int>> &dp, string &s1, string &s2,int m, int n)
    {
        if(m==0 || n==0)
        {
            return 0;
        }
        
        if(dp[m][n]!=-1)return dp[m][n];
        
        if(s1[m-1]==s2[n-1])
        {
          return dp[m][n]=  1+ help(dp,s1,s2,m-1,n-1);
        }
        
        else return dp[m][n]=max(help(dp,s1,s2,m-1,n),help(dp,s1,s2,m,n-1));
        
        // return dp[n][m];
        
        
    }
    
    int lcs(string &word1, string &word2) 
    {
        vector<vector<int>> dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        int m=word1.size();
        int n=word2.size();
        return help(dp,word1,word2,m,n);
        
    }
    
    int minDistance(string word1, string word2) 
    {
        return word1.size()+word2.size() - 2*lcs(word1,word2);
        
    }
};