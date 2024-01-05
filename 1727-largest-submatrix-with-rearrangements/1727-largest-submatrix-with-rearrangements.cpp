class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size(),ans=0;
        for(int i=1;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j])
                    a[i][j]+=a[i-1][j];

        for(int i=0;i<n;i++)
            sort(a[i].begin(), a[i].end(), greater<int>());

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                ans = max(ans, (j+1)*a[i][j]);
            
        return ans;
    }
};