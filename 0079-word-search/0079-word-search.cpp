class Solution {
public:
    
    int n,m;

    bool dfs(vector<vector<char>>& grid, string word, int i, int j ,int indx)
    {
        
        n=grid.size();
        m=grid[0].size();
        
        if(indx==word.size())
        {
           return true;
        }
        
        if(i<0 || j<0 || i>=n || j>=m || word[indx]!=grid[i][j])
        {
            return false;
        }
   
        
        grid[i][j]='#';
            
        
    bool right= dfs(grid, word,i,j+1,indx+1);
        
      bool left=  dfs(grid, word,i+1,j,indx+1);
        
    bool up=  dfs(grid, word,i-1,j,indx+1);
        
    bool down=  dfs(grid, word,i,j-1,indx+1);
        
        grid[i][j]=word[indx];
        
        
        return  right || left || up || down;
        
    }
    
    bool exist(vector<vector<char>>& board, string word)
    {
        
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                
                if(board[i][j]==word[0] )
                {
   
                    if(dfs(board,word,i,j ,0))
                    {
                        return true;
 
                    }
                       
                }

            }
            
        }
        
        
        return false;

    }
};