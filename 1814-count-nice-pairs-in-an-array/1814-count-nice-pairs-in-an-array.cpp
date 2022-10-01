class Solution {
public:
    
    int rev(int num)
    {
        string s=to_string(num);
        
        reverse(s.begin(),s.end());
        
        num= stoi(s);   
        
        return num;
        
    }
    
    int MOD=1e9+7;
    
    
    int countNicePairs(vector<int>& nums) 
    {
        
        vector<int> num_rev;
        
        
        for(int i=0;i<nums.size();i++)
        {
            int digit=rev(nums[i]);
       
            num_rev.push_back(digit);
        }
        
        map<int , int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]-num_rev[i]]++;
            
        }
        
        long long ans=0;
        
        
        for(auto it : mp)
        {
            ans+=((long long)it.second*((long long)it.second-1)/2);

            ans=ans%MOD;        
            
        }
        
        return ans%MOD;
        
        
    }
};