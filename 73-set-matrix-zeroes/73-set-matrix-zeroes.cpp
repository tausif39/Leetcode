class Solution {
public:
    
    
    
    void zerohero(vector<vector<int>>& matrix,vector<pair<int,int> > v)
    {
        for(auto pr : v)
        {
            
            for(int i=0;i<matrix.size();i++)
            {
                for(int j=0;j<matrix[i].size();j++)
                {
                    if(i==pr.first || j==pr.second)
                    {
                        matrix[i][j]=0;
                    }

                }

            }
            
        }
        
    }
    
    
    void setZeroes(vector<vector<int>>& matrix) 
    {
        vector<pair<int,int> > v;
        
        for(int i=0;i<matrix.size();i++)
        {
            
            for(int j=0;j<matrix[i].size();j++)
            {
                
                if(matrix[i][j]==0)
                {
                    v.push_back({i,j});
                }
                
                
            }
            
            
            
        }
        
        
        zerohero(matrix,v);
        
        
        
        
        
    }
};