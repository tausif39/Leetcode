class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int i=0;    // Start Index
        int n=nums.size();
        int ans=0; // Maximum length of any subarray
        while(i<n){
            // Check if element is even and <=threshold
            if(nums[i]%2==0 && nums[i]<=threshold){
                // Start count by 1 as nums[i] is also in subarray
                // prev_rem store remainder of last element
                int c=1,prev_rem=0;                 
                i++;
                // Run the loop while element is <= threshold
                // And remainder is not same as previous
                while(i<n && nums[i]%2!=prev_rem && nums[i]<=threshold){ 
                    prev_rem=nums[i]%2;
                    c++; // Increase the count
                    i++;
                }
                ans=max(ans,c); // Update the answer
            }else{
                // If odd element then increase the index
                i++;
            }
        }
        return ans;
    }
};
