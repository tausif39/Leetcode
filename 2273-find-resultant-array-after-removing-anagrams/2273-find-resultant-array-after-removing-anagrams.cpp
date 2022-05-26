class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) 
    {
        int n=words.size();
        
        vector<bool> vis(n,true);
        
        int i=n-1;
        while(i)
        {
            string a=words[i];
            string b=words[i-1];
            
            sort(a.begin(),a.end());sort(b.begin(),b.end());
            if(a==b)vis[i]=false;
            
            i--;
            
        }
        
        vector<string> ans;
        
        for(int i=0;i<words.size();i++)
        {
            if(vis[i])ans.push_back(words[i]);
        }
        
        return ans;
        
        
        
    }
};