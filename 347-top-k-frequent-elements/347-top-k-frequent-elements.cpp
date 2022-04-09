class Solution {
public:
    
    static bool cmp(pair<int,int> a ,pair<int,int> b)
    {
        
        return a.second>b.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
      vector<int> ans;
        
      unordered_map<int , int> mp;
      for(int i=0;i<nums.size();i++)
      {
          mp[nums[i]]++;
      }
        
       
        vector<pair<int,int>> vp(mp.begin(),mp.end());
        
        
        
        sort(vp.begin(),vp.end(),cmp);
        
        
        
        for(auto & it : vp)
        {
            k--;
            
            ans.push_back(it.first);
            
            if(k==0)break;
            
        }
        
        
        
        return ans;
        
        
    }
};