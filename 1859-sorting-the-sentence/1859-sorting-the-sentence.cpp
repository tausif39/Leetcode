class Solution {
public:
    
    // static bool cmp()
    
    
    string sortSentence(string s) 
    {
        stringstream ss(s);
        string temp;
        
        vector<string> v;
        
        while(ss>>temp)
        {
            reverse(temp.begin(),temp.end());
            v.push_back(temp);
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++)
        {
            reverse(v[i].begin(),v[i].end());
            string ok=v[i];
            ok.pop_back();
            v[i]=ok;
        }
        
        string ans;
        
        
        for(auto i:v)
        {
            ans+=i;
            ans+=' ';
        }
        
        ans.pop_back();
        
        return ans;
        
        
        
    }
};