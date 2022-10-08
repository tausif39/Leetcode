class Solution {
public:
    
    
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int res=nums[0]+nums[1]+nums[2];
    
    int sum=0;
    for(int i=0;i<n-2;i++)
    {
        int l=i+1,r=n-1;
        while(l<r)
        {
            int sum=nums[i]+nums[l]+nums[r];
            if(sum==target)
                return sum;
            else if(sum<target)
                l++;
            else if(sum>target)
                r--;
            
            if(abs(target-sum)<abs(target-res))
                res=sum;
        }
    }
    
    
     return res;
    
}
};