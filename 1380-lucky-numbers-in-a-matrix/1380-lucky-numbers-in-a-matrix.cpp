class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    {
        vector<int > row;
        vector<int > col;
        
        for(int i=0;i<matrix.size();i++)
        {
            int min=matrix[i][0];
            
            for(int j=0;j<matrix[i].size();j++)
            {
                if(min>matrix[i][j])
                {
                    min=matrix[i][j];
                }
                
            }
            row.push_back(min);
        }
        
        for(int i=0;i<matrix[0].size();i++)
        {
            int max=matrix[0][i];
            
            for(int j=1;j<matrix.size();j++)
            {
                if(max<matrix[j][i])
                {
                    max=matrix[j][i];
                }
                
            }
            col.push_back(max);
        }
        
        
        // sort(row.begin(),row.end());
        // sort(col.begin(),col.end());
        
        vector<int> ans;
        
        // int size()= min(row.size(),col.size());
        
        
        
            for(int i=0;i<row.size();i++)
            {
                for(int j=0;j<col.size();j++)
                {
                    if(row[i]==col[j])
                    {
                        ans.push_back(row[i]);
                    }
                    
                }

            }
        
        return ans;
        
    }
};