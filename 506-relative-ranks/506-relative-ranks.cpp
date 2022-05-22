class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        vector<int > v(score.begin(),score.end());
        sort(v.begin(),v.end(),greater<int>());
        
        unordered_map<int,string> mp;
        
        
        
        for(int i=0;i<v.size();i++)
        {
            if(i==0)
            {
                mp[v[i]]="Gold Medal";
            }
            
            else if(i==1)
            {
                mp[v[i]]="Silver Medal";
            }
            
            else if(i==2)
            {
                mp[v[i]]="Bronze Medal";
            }
            
            else
            {
                string a=to_string(i+1);
                mp[v[i]]=a;
            }
        }
        
        vector<string> ans;
        
        for(int i=0;i<score.size();i++)
        {
            ans.push_back(mp[score[i]]);
        }
        
        return ans;
        
        
    }
};