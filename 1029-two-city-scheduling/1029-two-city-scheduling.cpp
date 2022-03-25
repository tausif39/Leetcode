class Solution {
public:
    static bool comp(const pair<int,pair<int,int>> &p1, const pair<int,pair<int,int>> &p2)
    {
        return p1.first < p2.first;
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        int res = 0;
        
        vector<pair<int,pair<int,int>>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({costs[i][0] - costs[i][1],make_pair(costs[i][0], costs[i][1])});
        }
        
        sort(v.begin(), v.end(), comp);
        
        for(int i=0;i<n/2;i++)
            res += v[i].second.first;
        
        for(int i=n/2;i<n;i++)
            res += v[i].second.second; 
        
        return res;
    }
};