class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for (int i = 0, j = 0, len = nums.size(), n; i < len; i++, j++) {
            n = nums[i];
            if (j == 10) j -= 10;
            if (n < 10 && n == j) return i;
        }
        return -1;
    }
};