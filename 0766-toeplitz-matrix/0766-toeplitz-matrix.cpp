class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        
        int n=matrix.size();
        
        int m=matrix[0].size();
        


        
        for(int j=0;j<m;j++)
        {
            int k=0,l=j;
            int element=matrix[0][j];
            while(k<n and l<m)
            {
                if(matrix[k][l]!=element)return false;
                
                k++;l++;
            }
            
        }
        
        
        for(int i=0;i<n;i++)
        {
            int k=i,l=0;
            int element=matrix[i][0];
            while(k<n and l<m)
            {
                if(matrix[k][l]!=element)return false;
                
                k++;l++;
            }
            
        }
       
            
            
            
        return true;
        
        
        
        
    }
};