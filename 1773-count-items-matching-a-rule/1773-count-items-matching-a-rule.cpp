class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
    {
        int n=items.size();
        
        int cnt=0;
        
        
        for(int i=0;i<n;i++)
        {
                if(ruleKey=="type" and ruleValue==items[i][0])
                {
                    cnt++;
                }
                
                else if(ruleKey=="color" and ruleValue==items[i][1])
                {
                    cnt++;
                }
                
                else if(ruleKey== "name" and ruleValue==items[i][2])
                {
                    cnt++;
                }
            
        }
        
        return cnt;
        
    }
};