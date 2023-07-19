class Solution {
public:
    
    long long continuousSubarrays(vector<int>& nums) 
    {
        
        multiset<int> mp;
        
        int j=0,i=0;
        
        long long ans=0;
        
        while(j<nums.size())
        {
            
            mp.insert(nums[j]);
            
            while((*mp.rbegin()-*mp.begin())>2)
            {
                
                mp.erase(mp.find(nums[i]));
                i++;
                
            }    
            
            ans+=j-i+1;
            
            
            j++;

        }
        
        
        return ans;
        

    }
};