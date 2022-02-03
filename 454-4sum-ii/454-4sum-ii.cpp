class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) 
    {
        unordered_map<int , int> mp;
        
        for(int i=0;i<nums1.size();i++)
        {
            
            for(int j=0;j<nums2.size();j++)
            {
                int sum1_2 = nums1[i]+nums2[j];
                ++mp[sum1_2];
                
                
            }
        }
        
        
        int cnt=0;
        
        for(int i=0;i<nums3.size();i++)
        {
            
            for(int j=0;j<nums4.size();j++)
            {
                int sum3_4 = -(nums3[i]+nums4[j]);
                
                cnt+=mp[sum3_4];
                
            }
        }
        
        
        
//         for(auto f : mp)
//         {
//             if(f.second%2==0)cnt+=f.second/2;
                
//         }
        
        return cnt;
        
    }
};