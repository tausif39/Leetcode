//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int n, int k, vector<long long> v) {
        if(n<k)

        {

            return v[n-1];

        }

        

        long long sum=accumulate(v.begin(),v.end(),0);

        for(int i=k;i<=n;i++)

        {

            v.push_back(sum);

            sum+=sum;

            sum-=v[i-k];

        }

        

        return v[n-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends