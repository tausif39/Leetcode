class Solution {
public:
    int minimizeArrayValue(vector<int>& v)
    {
        int n=v.size();
        
        vector<int long long> pref(n);

        pref[0] = v[0];
        int long long ans = pref[0];

        for (int i = 1; i < n; i++)
        {
          pref[i] = pref[i - 1] + v[i];

          if (pref[i] % (i + 1))
          {
              
            ans = max(pref[i] / (i + 1) + 1, ans);
          }
          else
            ans = max(pref[i] / (i + 1), ans);
        }

    return ans;
        
    }
};