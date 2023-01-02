class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones)
    {
        long long sum = 0;
        int maxi = 0;
        for(int i=0;i<milestones.size();i++){
          maxi = max(maxi,milestones[i]);
          sum += (long long)milestones[i];
        }
     if(maxi>sum-maxi) return 2*(sum-maxi)+1;
     return sum;
        
    }
};