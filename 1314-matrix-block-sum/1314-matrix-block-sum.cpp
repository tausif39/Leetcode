class Solution {
public:
    
    #define ll int long long
    
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) 
    {   
            int m=mat.size();
            int n1=mat[0].size();

          vector<vector<int>> ans(m,vector<int>(n1,0));
   
          int size=mat.size();
        
            for(int i=0;i<mat.size();i++)
            {
                
                for(int j=0;j<mat[0].size();j++)
                {
                    ll sum=0;
                  
                    int sizeok=mat[0].size();
                    
                    int start=max(0,i-k);
                    
                    int end = min(size-1,i+k);
                    
                    int start1=max(0,j-k);
                    
                    int end1= min(sizeok-1,j+k);
                    
                    for(int a=start;a<=end;a++)
                    {
                        for(int b=start1;b<=end1;b++)
                        {
                            
                            sum+=mat[a][b];

                        }
                        

                    }
                            
                    ans[i][j]=sum;
                    
                    
                }

            



            }
            
            
            return ans;
        
    }
};