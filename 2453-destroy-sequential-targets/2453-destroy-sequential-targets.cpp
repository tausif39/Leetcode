class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        int n=nums.size();
        int k=space;map<int,int> p;
        for(auto i : nums)
        p[i%k]++;
        sort(nums.begin(),nums.end());
        int l=0,id;
        for(auto i : nums)
        {
            if(l<p[i%k])
            {
                l=p[i%k];
                id=i;
            }
        }
        return id;
    }
};