class Solution {
public:
    
 
    long long countBadPairs(vector<int>& nums) 
    {
        map<long long ,long long> mp;
        
        for(int i=0;i<nums.size();i++)++mp[nums[i]-i];
  
        long long good_pairs=0 ,bad_pairs=0 , total_pairs=0;
        
        
        for(auto it : mp)
        {
            long long good=it.second;
            
            good_pairs+=(long long )((good*(good+1))/2);
            
        }
  
        long long n=nums.size();
        
        total_pairs+=(long long)((n*(n+1))/2);
        
        bad_pairs=total_pairs - good_pairs;
        
        return bad_pairs;

        
        
    }
};