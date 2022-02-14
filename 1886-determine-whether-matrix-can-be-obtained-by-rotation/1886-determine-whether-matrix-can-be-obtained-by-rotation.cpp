class Solution {
public:
    bool equalmatrix(vector<vector<int>>& mat, vector<vector<int>>& target)
    {
        return mat==target;
    }
    
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) 
    {
        
        if(equalmatrix(mat,target)==true)return true;
        
        int cnt=1;
        while(cnt!=4)
        {
            for(int i=0;i<mat.size();i++)
            {
                for(int j=i+1;j<mat.size();j++)
                {
                    swap(mat[i][j],mat[j][i]);
                }
                
            }
            for(int i=0;i<mat.size();i++)
            {
                reverse(mat[i].begin(),mat[i].end());
            }
            
            if(equalmatrix(mat,target)==true)return true;
            
            cnt+=1;
            
        }
        
        return false;
        
    }
};