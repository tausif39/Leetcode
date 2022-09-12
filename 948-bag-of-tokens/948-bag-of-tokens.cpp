class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) 
    {
        
        sort(tokens.begin(),tokens.end());
        
        int score=0;
        
        
        int n=tokens.size();
        int j=n-1;
        
        vector<bool> vis(n,false);
        
        for(int i=0;i<n;i++)
        {
            if(power<tokens[i] and i==0)
            {
                return 0;
            }
            
            if(power>=tokens[i])
            {
                if(vis[i]==false)
                {
                    vis[i]=true;
                    power-=tokens[i];

                    score++;
                    
                }
                
                
            }
            
            else if((j-i)>=1)
            {
                if(vis[i]==false)
                {
                    vis[j]=true;
                    // vis[i]=true;
                    power+=tokens[j];
                    
                    j--;
                    score-=1;
                   
                    if(power>=tokens[i])
                    {
                        vis[i]=true;
                        power-=tokens[i];

                        score++;
                    
                    }
                    
                    
                }
            }
            
            
            
        }
        
        return score;
        
        
    }
};