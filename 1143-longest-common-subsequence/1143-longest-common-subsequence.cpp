class Solution {
public:
    
  //  memoziate it //
   // 
    
    int helper(string & x ,string &y , int n ,int m , vector<vector<int>> &t)
    {
        if(m==0 || n==0)return 0;
       
        
        if(t[n][m]!=-1)return t[n][m];
        
        if(x[n-1]==y[m-1])
        {
            return t[n][m]= 1 + helper(x,y,n-1,m-1,t);
        }
        
        
        else
        {
            return t[n][m]= max(helper(x,y,n-1,m,t), helper(x,y,n,m-1,t));
        }
            
        return t[n][m];
    }
    
    int longestCommonSubsequence(string text1, string text2) 
    {
        
     vector<vector<int>> t(text1.size()+1,vector<int> (text2.size()+1,-1));
        
        
    // memset(t, -1, sizeof(t));
        
        
        
       return helper(text1, text2,text1.size(),text2.size(), t );
        
       
    }
};