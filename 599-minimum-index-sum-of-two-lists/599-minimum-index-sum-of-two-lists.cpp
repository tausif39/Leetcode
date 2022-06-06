class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
    {
        unordered_map<string ,int > mp;
        
        for(int i=0;i<list1.size();i++)
        {
            mp[list1[i]]+=i+1;
        }
        
        
       
        vector<pair<string,int>> vp;
        
        int mini_indx=INT_MAX;
        
        for(int i=0;i<list2.size();i++)
        {
                
            if( mp[list2[i]]!=0)
            {
                mp[list2[i]]+=i+1;
                // cout<<mp[list2[i]];
                mini_indx=min(mini_indx,mp[list2[i]]);
                 vp.push_back({list2[i],mp[list2[i]]});
            }
        }
        
        // sort(vp.begin(),vp.end());
        
        vector<string> ans;
        
        
        
        
        
        for(auto it:vp)
        {
            // cout<<it.first<<it.second<<" " ;
            if(it.second==mini_indx)ans.push_back(it.first);
            
         }
        
        return  ans;
        
        
        
        
    }
};