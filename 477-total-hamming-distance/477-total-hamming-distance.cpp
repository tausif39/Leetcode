// taking one bit of all the numbers at once
    
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) 
    {
        int ans=0, n=nums.size();
        // if(n<=1) return 0;
        for(int i=0; i<32; i++)
        {
            int one=0, zero=0;
            for(int j=0; j<n; j++)
            {
                if(nums[j]==0) 
                {
                    zero++; 
                    continue;
                }
                int t=nums[j]%2;
                (t==1)? one++: zero++;
                nums[j] /= 2;                                 
            }
            ans += one*zero;
        }
        return ans;
    }
};