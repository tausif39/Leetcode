//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        int n = s.length();
        int mid = n/2;
        int matching_count = 0;
        int j = mid;
        
        int i = 0;
        
        if(n == 0 || n == 1)
            return n;
            
        
        while(i<mid) {
            
            if(s[i] == s[j]) {
                matching_count++;
                j++;
                
                
            }
            
            else {
                mid = mid - 1;
                j = mid;
                i = 0;
                matching_count = 0;
                continue;   // not to reach the i++ below
                
            }
            
            
            i++;
        }
        
        return n - matching_count + 1;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends