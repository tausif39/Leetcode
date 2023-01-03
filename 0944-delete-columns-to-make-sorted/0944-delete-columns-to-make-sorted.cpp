class Solution {
public:
    int minDeletionSize(vector<string>& strs) 
    {
        int cnt=0;
        
        int i=0;
        
        while(i<strs[0].size())
        {
            
            char prev=strs[0][i];
            
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]>=prev)
                {
                    prev=strs[j][i];
                    
                }
                else
                {
                    cnt++;
                    break;
                }
                
                
            }
            
            i++;
        }
        
        return cnt;
        
    }
};