class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int L = 0;
        int R = 0;
        
        unordered_map<int, int> freqMap;
        int sum = 0;
        int ans = 0;
        while(R < n) {
            int right = nums[R];
            sum += nums[R];
            freqMap[nums[R]]++;R++;
            
            while(freqMap[right] > 1) 
            {
                 sum -= nums[L];
                     
            freqMap[nums[L]]--;L++;
            }
            
            
            ans = max(ans, sum);
        }
        return ans;
    }
};