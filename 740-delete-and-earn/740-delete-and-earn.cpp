class Solution {
public:
    const int MAX = 10001;
    
    int getMaxPoint(vector<int>& cnt, vector<int>& dp, int idx) {
        if(idx >= MAX) return 0;
        if(dp[idx] == -1) {
            dp[idx] = max(idx * cnt[idx] + getMaxPoint(cnt, dp, idx + 2), getMaxPoint(cnt, dp, idx + 1));
        }
        return dp[idx];
    }
    int deleteAndEarn(vector<int>& nums) {
        vector<int> cnt(10001, 0), dp(10001);
        for(int i = 0; i < 10001; ++i) dp[i] = -1;
        for(int i = 0; i < nums.size(); ++i) cnt[nums[i]]++;
        return getMaxPoint(cnt, dp, 1);
    }
};