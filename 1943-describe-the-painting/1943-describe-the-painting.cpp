class Solution {
public:
    
    vector<vector<long long>> splitPainting(vector<vector<int>>& seg) 
    {
         
        sort(seg.begin(),seg.end());
          
        map<long long,long long> mp;
      
        vector<vector<long long>> ans;
        
        for(auto it:seg)
        {
            int sum=it[2];
            mp[it[0]]+=sum;
            mp[it[1]]-=sum;     
    
        }
        
        
       long long int j=0,k=0;
        
        for(auto x:mp)
        {
            long long int prev=j;
            j+=x.second;
            if(prev>0)
                ans.push_back({k,x.first,prev});
            
            k=x.first;
        }        
        
        return ans;
 
    }
};