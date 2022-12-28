class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int ans = 0;
        // profit margin, difficulty
        priority_queue<pair<int,int>> q;
        sort(worker.begin(), worker.end());
        // add profit margin and difficulty to heap
        for (int i = 0; i < profit.size(); ++i)
            q.push({profit[i], difficulty[i]});
        // iterate from the back, since highest ability worker at end after sorting
        for (int i = worker.size() - 1; i > -1; --i){
            while (!q.empty() && q.top().second > worker[i]) q.pop();
            if (q.empty()) break;
            ans += q.top().first;
        }
        return ans;
    }
};