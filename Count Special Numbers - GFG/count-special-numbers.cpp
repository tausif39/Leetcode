//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
         unordered_map<int,int>m;
         unordered_map<int ,int>vis;
        int a=INT_MIN;
        for(int i=0;i<n;i++){
            a=max(arr[i],a);
            m[arr[i]]++;
        }
        if(m[1]==1) return n-1;
        else if(m[1]>1) return n;
        else{
        int ans=0;
        for(int i=0;i<n;i++){
           if(m[arr[i]]==1){
               for(int j=2;j*j<=arr[i];j++){
                 if((arr[i]%j==0 and m[j]>0) or (arr[i]%(arr[i]/j))==0 and m[arr[i]/j]>0 ){
                    ans++;
                    break;
                }
            }
            }else if(m[arr[i]]>1 and vis[arr[i]]==0){
                ans+=m[arr[i]];
                vis[arr[i]]++;
            }
        }
        return ans;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends