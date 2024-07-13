class Solution {
public:
    int minOperations(vector<string>& logs)
    {
        
        int cnt=0;
        string b="./";
        string c="../";
        
        for(auto it: logs)
        {
            string a=it;
            
            if(a==b)
            {
                
            }
            else if(a==c)
            {
                if(cnt)cnt--;
            }
            else cnt++;
            
            
        }
        
        return cnt;
        
    }
};