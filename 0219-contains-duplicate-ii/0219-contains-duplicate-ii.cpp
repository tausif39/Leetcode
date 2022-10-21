class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,vector<int>> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        
        for(auto it : mp)
        {
            if(it.second.size()==1)continue;
            // int diff;
            
            for(int i=0;i<it.second.size()-1;i++)
            {
                int diff=it.second[i+1]-it.second[i];
                if(diff<=k)return true;
            }
        }
        
        return false;
        
        
    }
};