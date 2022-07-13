class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        unordered_map<int , int> mp;
        
        int n=arr.size();
        
        
        for(int it:arr)
        {
            mp[it]++;
            
            
        }
        
        
        int ans=0;
        
        int occurence=0;
        
        for(auto it:mp)
        {
            if(it.second>occurence)
            {
                occurence=it.second;
                ans=it.first;
            }
        }
        
        return ans;
        
        
        
    }
}; 