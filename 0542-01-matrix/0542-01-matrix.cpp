class Solution {
public:

    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
          
        int m=mat.size();
        int n=mat[0].size();
        
        
        vector<vector<int>> vis(m,vector<int>(n,0));
        
        vector<vector<int>> ans(m,vector<int>(n,0));
        
        
        queue<pair<pair<int,int> ,int>> s;
        
        
        ///put all the zero into queue
        
        
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                      s.push({{i,j},0});
                      vis[i][j]=1;
                        
                }
            }
            
        }
         
        
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        
        // cout<<row;
        
        
        
        while(!s.empty())
        {
            
            int row=s.front().first.first;
            int col=s.front().first.second;
            
            int cnt=s.front().second;
            
            ans[row][col]=cnt;
            
            s.pop();
            
            int cr,cc;
            
            for(int i=0;i<4;i++)
            {
                cr=row+dx[i];
                cc=col+dy[i];
                
                if(cr<m and cr>=0 and cc<n and cc>=0 and vis[cr][cc]==0)
                {
                    s.push({{cr,cc},cnt+1});
                    
                    vis[cr][cc]=1;
                }
                
                
            }
            
        }
        
        return ans;
    }
};