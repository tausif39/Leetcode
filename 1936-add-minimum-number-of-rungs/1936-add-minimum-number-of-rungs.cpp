class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int prev = 0;
        int ans = 0;
        for(auto r: rungs){
            int gap = r-prev;
            ans += (gap-1)/dist;
            prev = r;
        }
        return ans;
    }
};