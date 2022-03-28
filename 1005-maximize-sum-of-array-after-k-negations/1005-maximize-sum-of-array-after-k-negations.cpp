class Solution {
public:
    int find_sum(vector<int>&v, int k){
        priority_queue<int,vector<int>,greater<int>>q;       // Mean Heap
        for(int i=0; i<v.size(); i++)
            q.push(v[i]);
        while(k){                        // Negate k times ( min element will always be on top )
            int res = -q.top();
            q.pop();
            q.push(res);
            k--;
        }
        int sum = 0;
        while(!q.empty()){
            sum += q.top();
            q.pop();
        }
        return sum;
    }
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum = find_sum(nums,k);
        return sum;
    }
};