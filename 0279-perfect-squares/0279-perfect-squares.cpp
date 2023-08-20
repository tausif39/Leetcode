class Solution {
public:
    int numSquares(int n) 
    {
        vector<int> memo(n + 1, -1);
        return helper(1, n,memo);
    }

    int helper(int i, int tar,vector<int>& memo) {
        if (tar == 0) return 0;

        if (tar < (i * i)) return 1e8;

         if (memo[tar] != -1) return memo[tar];
        
        int a = helper(i + 1, tar,memo);

        int b = 1e9;

        if ((i * i) <= tar) {
            b = 1 + helper(i, tar - (i * i),memo);
        }

        return memo[tar]=min(a, b);
    }
};