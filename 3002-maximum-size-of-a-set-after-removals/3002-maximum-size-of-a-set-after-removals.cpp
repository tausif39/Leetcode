class Solution {
public:
    
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2)
    {
        
        set<int> n1,n2,common;
        
        
        for(auto it:nums1)
        {
            n1.insert(it);
            common.insert(it);
        }
        
        for(auto it:nums2)
        {
            n2.insert(it);
            common.insert(it);
        }
            
        
        int n=nums1.size();
        
        int first=n1.size();
        int second=n2.size();
        int c=common.size();
       
                
        int ans= min(min(n/2,first) + min(n/2,second),c);

// int ans = min(min(n/2, (int)s1.size()) + min(n/2, (int)s2.size()),(int) s.size());
        
        return ans;
    }
};

// class Solution {
// public:
//     int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
//         set<int> s1, s2, s;
//         int n = nums1.size();
//         for (int x : nums1) {
//             s1.insert(x);
//             s.insert(x);
//         }
//         for (int x : nums2) {
//             s2.insert(x);
//             s.insert(x);
//         }
//         int ans = min(min(n/2, (int)s1.size()) + min(n/2, (int)s2.size()),(int) s.size());
         
//         return ans;
//     }
// };