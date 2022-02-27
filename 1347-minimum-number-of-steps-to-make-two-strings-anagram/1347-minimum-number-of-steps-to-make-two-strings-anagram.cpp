class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> freq;
        int count = 0;
        for(auto it : s) freq[it]++;
        for(auto it : t) freq[it]--;
        for(auto it : freq) if(it.second < 0) count += it.second;
        return abs(count);
    }
};