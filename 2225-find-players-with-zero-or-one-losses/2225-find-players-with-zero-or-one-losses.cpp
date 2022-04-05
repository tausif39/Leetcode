class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        vector<int> winner,loser;
        
        
        // vector<vector<int>> ans;
        
        
        for(int i=0;i<matches.size();i++)
        {
            winner.push_back(matches[i][0]);
            loser.push_back(matches[i][1]);
            
        }
        
                map<int ,int> mw,ml;
        
        for(auto l: loser)ml[l]++;

        
        for(auto w: winner)mw[w]++;
        
        
        vector <int> v1,v2;
        
        for(auto it : mw)
        {
            if(ml[it.first]==0)v1.push_back(it.first);
                
        }
        
        
//         for(int i=0;i<matches.size();i++)
//         {
//             if(ml[matches[i][0]]==0)v1.push_back(matches[i][0]);
            
//         }
        
        
//         
        // ans.push_back(v1);
        
        
        for(auto it :ml)
        {
            if(it.second==1)
            {
                v2.push_back(it.first);
            }
        }
        
        // ans.push_back(v2);
        
        
        return {v1,v2};
        
    }
};