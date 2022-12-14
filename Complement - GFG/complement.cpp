//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n)
    {
         // code here

        int left = 0;

        int right = 0;

        int maxL = 0;

        int maxR = 0;

        int maxCount = 0;

        int zeroCount = 0, oneCount = 0;

        while(right < n and str[right] != '0') right++;

        

        left = right;

        if(right == n) return {-1};

        

        while(right < n){

            if(str[right] == '0') zeroCount++;

            else oneCount++;

            

            while(left <= right and zeroCount - oneCount < 0){

                if(str[left] == '0') zeroCount--;

                else oneCount--;

                

                left++;

            }

            

            

            if(maxCount < (zeroCount - oneCount)){

                maxL = left;

                maxR = right;

                maxCount = (zeroCount - oneCount);

            }else  if(maxCount == (zeroCount - oneCount) and (right - left) <= (maxL - maxR)){

                string first = str.substr(maxL, (maxR - maxL) + 1);

                string second = str.substr(left, (right - left) + 1);

                

                if(lexicographical_compare(second.begin(), second.end(), first.begin(), first.end())){

                    maxL = left;

                    maxR = right;

                }

            }

            

            right++;

        }

        return {maxL + 1, maxR + 1};
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends