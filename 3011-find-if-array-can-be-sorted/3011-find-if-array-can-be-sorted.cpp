class Solution {
public:
    bool canSortArray(vector<int>& nums) {

        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            for(int j = 1; j < n; j++){
               if(nums[j] < nums[j-1]){
                   int s1 = __builtin_popcount(nums[j]);
                   int s2 = __builtin_popcount(nums[j-1]);
                   if(s1 != s2) return false;
                   swap(nums[j],nums[j-1]);
               } 
            }
        }

        return is_sorted(nums.begin(),nums.end());
    }
};