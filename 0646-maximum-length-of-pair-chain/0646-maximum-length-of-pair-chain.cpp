class Solution {
public:
    
   static bool cmp(pair<int , int> &a ,  pair<int , int> &b )
    {
        return a.second<b.second;
    }
    
    
    
    int findLongestChain(vector<vector<int>>& pairs)
    {
        
        // sort(pairs.begin(),pairs.end());
        
        vector<pair<int,int>> vp;
        
        for(auto it:pairs)
        {
            int a=it[0];
            int b=it[1];
            
            vp.push_back({a,b});
            
           // cout<<a<<" "<<b<<endl;
        }
        
        
        sort(vp.begin(),vp.end(),cmp);
        
        int cnt=1;

        int mini=vp[0].second;
        
        // for(auto it:vp)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        
        
        for(int i=1;i<vp.size();i++)
        {
            
            if(vp[i].first>mini)
            {
                mini=vp[i].second;
                cnt++;
                
            }
            
            // else mini=min(mini,b.second);
        }
        
        
        return cnt;
        
    }
};