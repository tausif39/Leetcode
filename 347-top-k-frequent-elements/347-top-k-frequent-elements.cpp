class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res; 
        unordered_map<int, int> m; 
        priority_queue<pair<int, int>> pq;  
        
        for (auto a : nums) m[a]++; 
        for (auto a : m) {
            pq.push({a.second, a.first}); 
        }
        
        for (int i = 0; i < k; ++i) {
            res.push_back(pq.top().second);
            pq.pop(); 
        }
        
        return res; 
    }
};