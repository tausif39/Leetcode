class Solution {
public:
    long long go(long long l,long long r)
    {
        long long rsum=r*(r+1)/2;
        long long lsum=l*(l+1)/2;
        return rsum-lsum;
    }
    long long minimalKSum(vector<int>& nums, int k) {
        // First of all sort the arry then try to find many missing number between
        // two consecutive numbers, then we can pic those numbers
        // 1,2,5,6 ther is two missing number between 2 and 5 so pick them 
        // and add them to our ans and decrease k value by 2
       sort(nums.begin(),nums.end());
        long long bf=0,ans=0;
        for(int i=0;k&&i<nums.size();i++)
        {
            // checking how many numbers between nums[i] and nums[i-1];
            int x=nums[i]-bf-1;
            // if no element between then simply continue
            if(x<=0){bf=nums[i];continue;}
            // check that our k is less than or greater or equal and set x accordingly
            x=min(x,k);
            // subtruct x from k;
            k-=x;
            // add those sum value to our ans;
            ans+=go(bf,bf+x);
            // making before to bf
            bf=nums[i];
        }
        // If we cant pick all k in the input nums then we need to pic outside that vector
        // so simply pick reminder k and add them to our last elemnt .
        // so we will pick remaing k from max_num+1,max_num+2,.....max_num+k;
        if(k)ans+=go(bf,bf+k);
        return ans;
      
    }
};