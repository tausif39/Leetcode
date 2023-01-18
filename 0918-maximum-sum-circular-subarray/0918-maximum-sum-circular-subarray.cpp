class Solution {
public:
    //  max subarray sum= total sum of array - sum of non contributing elements
//  so in this type of question we can change the sign of all elements and apply kadane's algo so that we can find max sum of non contributing elements
    
    int kadane(vector<int> &arr,int n)
    {
        
        int currsum=0;
        int mx=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            currsum+=arr[i];
            mx=max(mx,currsum);
            if (currsum<0){
                currsum=0;
            }
        }
    return mx;
}
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int wrapsum;
        int nonwrapsum;

    // non wrap sum can be found out by kadan's algo directly
        nonwrapsum=kadane(nums,n);

        int total=0;
        for (int i = 0; i < n; i++){
            total+=nums[i];
            nums[i]= -nums[i];
        }
        wrapsum=total+kadane(nums,n);  //+ because sum from kadane is of negetive number and -(-)=+
        if(wrapsum==0){
            return nonwrapsum;
        }  //kadane algorithm is weak when all the given number is negetive as it returns 0 value . so to overcome that we use if condition.
        return max(wrapsum,nonwrapsum);
    }
};