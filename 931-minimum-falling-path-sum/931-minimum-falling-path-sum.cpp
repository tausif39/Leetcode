class Solution {
public:
    int solution(int rows, int cols, vector<vector<int>>&matrix, vector<vector<int>>&dp){
        if(cols<0 || cols>=matrix.size()){
            return 1e9;
        }
        if(rows==0){
            return matrix[rows][cols];
        }
        if(dp[rows][cols] != -1){
            return dp[rows][cols];
        }
        int up = matrix[rows][cols] + solution(rows-1,cols,matrix,dp);
        int left = matrix[rows][cols] + solution(rows-1,cols-1,matrix,dp);
        int right = matrix[rows][cols] + solution(rows-1,cols+1,matrix,dp);
        
        return dp[rows][cols] = min(up, min(left,right));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        int result=1e9;
        for(int itr=0;itr<cols;itr++){
            vector<vector<int>> dp(rows, vector<int>(cols,-1));
            int temp=solution(rows-1,itr,matrix,dp);
            result = min(result,temp);
        }
        
        return result;
    }
};