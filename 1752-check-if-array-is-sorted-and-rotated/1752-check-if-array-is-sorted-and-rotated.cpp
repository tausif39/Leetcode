class Solution {
public:
    bool check(vector<int>& nums) 
    {
        vector<int> v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        
        int rotl=1;
        int cnt =0;
        int n=nums.size();
        while(cnt<n)
        {
            rotate(v.begin(), v.begin()+rotl, v.end());
            
            if(v==nums)return true;
            
            cnt++;
            
            
            
        }
        
        
        return false;
        
    }
};