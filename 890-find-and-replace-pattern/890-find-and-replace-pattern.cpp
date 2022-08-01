class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        unordered_map<int,int > mp;
        
        
        vector<string> ans;

        vector<int> patt;
        
        int cnt=1;
        
        for(int i=0;i<pattern.size();i++)
        {
            if(mp.count(pattern[i])==0)
            {
                
                mp[pattern[i]]=cnt;
                cnt++;
                patt.push_back(mp[pattern[i]]);
            }
            
            else patt.push_back(mp[pattern[i]]);
            
        }
        
        
        // for(auto it : patt)cout<<it;
        
        for(int i=0;i<words.size();i++)
        {
            cnt=1;
            unordered_map<int, int > mp1;
            
            vector<int> pattern1;
            
            for(int j=0;j<words[0].size();j++)
            {
                if(mp1.count(words[i][j])==0)
                {
                    mp1[words[i][j]]=cnt;
                    cnt++;
                    pattern1.push_back(mp1[words[i][j]]);
                }

                else pattern1.push_back(mp1[words[i][j]]);
                
            }
            
            for(auto it : pattern1)cout<<it;
                
                cout<<endl;
            
            if(patt==pattern1)
            {
                ans.push_back(words[i]);
            }
            
        }
        
        return ans;
        
        
        
        
    }
};