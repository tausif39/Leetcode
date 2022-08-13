class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        
        map<long long, long long> mp;
        
        for(int i = 0; i < nums1.size(); i++){
            mp[abs(nums1[i]-nums2[i])]++;
        }
        
        long long totalOperations = k1+k2;
        
        for(auto it = mp.rbegin(); it != mp.rend() and totalOperations > 0; it++){
            if(mp[it->first] < 0) continue;
            long long _min = min(it->second, totalOperations);
            mp[it->first] -= _min;
            mp[it->first-1] += _min;
            totalOperations -= _min;
        }
        
        long long ans = 0;
        
        for(auto it: mp) {
            if(it.first < 0 or it.second == 0) continue;
            ans += it.first*it.first*it.second;
        }
        
        return ans;
    }
};