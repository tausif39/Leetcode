class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        
        int n=matrix.size();
        
        int m=matrix[0].size();
        
        int cnt=0;
            
        for(int j=0;j<m;j++)
        {
            vector<int> v;
            int k=0,l=j;
            // int element=matrix[0][j];
            
            while(k<n and l>=0)
            {
                // if(matrix[k][l]!=element)break;
                v.push_back(matrix[k][l]);
                
                k++;l--;
            }
            
            if(cnt==0)
            {
                reverse(v.begin(),v.end());
                for(int i:v)ans.push_back(i);
                cnt=1;
            }
            else 
            {
                for(int i:v)ans.push_back(i);
                cnt=0;
            }
            
        }
        
        // int cnt1=0;
        
        for(int i=1;i<n;i++)
        {
             vector<int> v;
            int k=i,l=m-1;
            // int element=matrix[0][j];
            
            while(k<n and l>=0)
            {
                // [k][l]!=element)break;
                v.push_back(matrix[k][l]);
                
                k++;l--;
            }
            
            if(cnt==0)
            {
                reverse(v.begin(),v.end());
                // if(matrix());
                for(int i:v)ans.push_back(i);
                cnt=1;
            }
            else 
            {
                for(int i:v)ans.push_back(i);
                cnt=0;
            }
            
        }
        
        
            
            return ans;
        
    }
};