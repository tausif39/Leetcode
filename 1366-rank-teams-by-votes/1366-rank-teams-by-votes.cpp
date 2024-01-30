class Solution {
public:
    
    string rankTeams(vector<string>& votes) 
    {
        
        vector<vector<int>> v(26, vector<int>(votes[0].size(), 0));
        
        
        for (int i = 0; i < votes.size(); i++) 
        {
            
            for (int j = 0; j < votes[i].size(); j++)
            {
                v[votes[i][j] - 'A'][j]--;
            }
        }
        
        
        
        for (int i = 0; i < v.size(); i++) 
        {
            v[i].push_back(i);
        }
        
        
        sort(begin(v), end(v));
        
        
        string ans;
        
        
        for (int i = 0; i < votes[0].size(); i++) 
        {
            
            ans.push_back(v[i].back() + 'A');
            
        }
        
        return ans;
    }
};