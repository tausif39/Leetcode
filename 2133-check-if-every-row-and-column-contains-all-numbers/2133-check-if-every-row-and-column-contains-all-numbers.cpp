class Solution {
public:
    
    bool check(vector<vector<int>>& matrix)
    {
        vector<vector<int>> tp(matrix.size(),vector<int>((matrix.size())));
        for(int i=0;i<matrix.size();i++)
        {
           
            // sort(matrix[i].begin(),matrix[i].end());
            
            for(int j=0;j<matrix.size();j++)
            {
                tp[j][i]=matrix[i][j];
            }
            
        }
        
        for(int i=0;i<matrix.size();i++)
        {
             sort(tp[i].begin(),tp[i].end());
            
            for(int j=0;j<matrix.size();j++)
            {
                if(tp[i][j]!=j+1)return false;
                
            }
            
            
        }
        
        return true;
    }
    
    
    bool checkValid(vector<vector<int>>& matrix) 
    {
        if(check(matrix)==false) return false;
        
        for(int i=0;i<matrix.size();i++)
        {
            sort(matrix[i].begin(),matrix[i].end());
            
            for(int j=0;j<matrix.size();j++)
            {
                if(matrix[i][j]!=j+1)return false;
                
                

            }
            
        }
        
        return true;
        
        
    }
        
        
    
};