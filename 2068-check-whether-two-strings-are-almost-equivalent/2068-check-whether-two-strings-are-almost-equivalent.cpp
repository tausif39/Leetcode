// Time: O(N)
// Space: O(1)
class Solution {
public:
    bool checkAlmostEquivalent(string s, string t) {
        int cnt[26] = {0};
        for (char c : s) cnt[c - 'a']++;
        for (char c : t) cnt[c - 'a']--;
        for (int i = 0; i < 26; ++i) {
            if (abs(cnt[i]) > 3) return false;
        }
        return true;
    }
};