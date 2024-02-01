class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> ans, v;
        unordered_map<int, int> mp;
        for(int i=0; i < intervals.size(); i++) {
            v.push_back(intervals[i][0]);
            mp[intervals[i][0]] = i;
        }
        sort(v.begin(), v.end());
        for(auto x: intervals) {
            int lb = lower_bound(v.begin(), v.end(), x[1]) - v.begin();
            if(lb == intervals.size()) {
                ans.push_back(-1);
            }
            else {
                ans.push_back(mp[v[lb]]);
            }
        }
        return ans;
    }
};