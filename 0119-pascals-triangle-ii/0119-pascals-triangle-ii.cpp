class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        int numRows = rowIndex+1;
        
        vector<vector<int>> ans(numRows);
        
        for(int i=0;i<numRows;i++)
        {
            ans[i]=vector<int> (i+1,1);
                
            for(int j=1;j<i;j++)    
            {
                ans[i][j]= ans[i-1][j-1] + ans[i-1][j];
            }
                
            
        }
        
        return ans[rowIndex];
        
    }
};