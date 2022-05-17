class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) 
    {
        vector<int> ans;
        
        vector<int> freq(1001,0);
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)freq[nums[i][j]]++;
        
        }
        
        
        int n=nums.size() ;
        
        for(int i=0;i<1001;i++)
        {
            if(freq[i]==n)ans.push_back(i);
        }
        
        return ans;
        
        
        
        
    
      
        
        
    }
};