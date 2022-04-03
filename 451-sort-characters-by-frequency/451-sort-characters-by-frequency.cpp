class Solution {
public:
    
    static bool cmp(pair<char, int> a,pair<char, int> b)
    {
        
//         if(a.second<b.second)return false;
        
//         return true;
        
        return a.second>b.second;    //jis order mein chhahiye issi order mein
        
        
    }
    
    string frequencySort(string s) 
    {
        unordered_map<char,int> mp;
      
        
        for(int i=0;i<s.size();i++)
        {
           
            mp[s[i]]++;
        }
        
        vector<pair<char, int>> vp(mp.begin(),mp.end());
        
        sort(vp.begin(),vp.end(),cmp);
        
        

        
        string ans;
        
        for(auto it: vp)
        {
            while(it.second--)
                  {
                      ans.push_back(it.first);
                  }
            
        }
        
        return ans;
        
        
    }
};