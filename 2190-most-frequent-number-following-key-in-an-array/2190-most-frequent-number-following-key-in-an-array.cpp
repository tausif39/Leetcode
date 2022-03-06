class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key)
                 mp[nums[i+1]]++;
        }
        int ans=-1;
        for(auto it:mp)
        {
           ans=max(ans,it.second);
            
        }
        
        for(auto it:mp)
        {
            if(ans==it.second)
                return it.first;
        }
        return -1;
    }
};