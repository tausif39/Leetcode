class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        map<float,int> mp;
        int max = 0;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            int x1 = points[i][0];
            int y1 = points[i][1];
            for(int j=i+1;j<n;j++)
            {
                int x2 = points[j][0];
                int y2 = points[j][1];
                int diff1 = y2 - y1;
                int diff2 = x2 - x1;
                if(diff2 == 0)
                {
                    mp[INT_MAX]++;
                }
                else
                {
                    float slope = float(diff1)/diff2;
                    mp[slope]++;
                }
            }

            for(auto &it:mp)
            {
                if(it.second > max)
                {
                    max = it.second;
                }
            }

            if(max > ans)
                ans = max;

            mp.clear();

        }

        return ans + 1 ;

    }
};