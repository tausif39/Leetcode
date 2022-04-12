class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) 
    {
        int n=board.size();
        
        vector<vector<int>> tempBoard = board; 

        
        for(int i=0;i<board.size();i++)
        {
            
            for(int j=0;j<board[i].size();j++)
            {
                int cnt=0;
                
                if((j-1)>=0)
                {
                   if(board[i][j-1]==1)cnt++;
                    
                   
                }
                
                if((j+1)<board[i].size())
                {
                   if(board[i][j+1]==1)cnt++;
                    
                   
                }
                
                
                if((i-1)>=0)
                {
                   if(board[i-1][j]==1)cnt++;
                    
                   
                }
                
                 if((i+1)<board.size())
                 {
                   if(board[i+1][j]==1)cnt++;
                    
                 }
                
                
                if((i+1)<board.size() and (j+1)<board[i].size())
                 {
                   if(board[i+1][j+1]==1)cnt++;
                    
                 }
                
                
                if((i-1)>=0 and (j-1)>=0)
                 {
                   if(board[i-1][j-1]==1)cnt++;
                    
                 }
                
                
                if((i+1)<board.size() and (j-1)>=0)
                 {
                   if(board[i+1][j-1]==1)cnt++;
                    
                 }
                
                if((i-1)>=0 and (j+1)<board[i].size())
                 {
                   if(board[i-1][j+1]==1)cnt++;
                    
                 }
                
                
                
                
                
            if(tempBoard[i][j] == 0) 
            {
                    if(cnt == 3) 
                    {
                        tempBoard[i][j] = 1;
                    }
                } else 
            {
                    if(cnt < 2 || cnt > 3) 
                    {
                        tempBoard[i][j] = 0;
                    }
            }
            
            }
            
            // if()
            
            
        }   
        
        
        
        
         board  =tempBoard;
        

       
        
    }
};