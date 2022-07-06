class Solution {
public:
    int fib(int n) 
    {
        int * dp = new int [32]; // Declare an array to store
    // Fibonacci numbers.
    // 1 extra to handle
    // case, n = 0
    // int dp[n + 2];
        
        dp[0]=0;
        dp[1]=1;
//         for(int i=0;i<=n;i++)
//         {
//             dp[i]=0;
//         }
        
//         if(dp[n]!=0)
//         {
//             return dp[n];
//         }
        
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+ dp[i-2];
        }
        
        
        return dp[n];
        
    }
};