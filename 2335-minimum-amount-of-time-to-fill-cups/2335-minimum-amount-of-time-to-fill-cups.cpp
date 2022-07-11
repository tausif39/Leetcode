class Solution {
public:
    int fillCups(vector<int>& a) {
    int res = 0;
    for (; max({a[0], a[1], a[2]}) > 0; ++res) {
        sort(begin(a), end(a));
        --a[2];
        --a[1];
    }
    return res;
}
};