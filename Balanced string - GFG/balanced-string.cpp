//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int N)
    {
        string ans = "";

        string full = "abcdefghijklmnopqrstuvwxyz";

        int rem = N;

        if(N>26)

        {

            int d = N/26;

            rem = N%26;

            for(int i=0;i<d;i++)

            {

                ans+=full;

            }

        }

        if(N%2==0)

        {

            int n = rem/2;

            ans+= full.substr(0,n);

            ans+= full.substr((26-n),n);

            

        }

        else if(N%2!=0)

        {

            int sum = 0;

            int temp = N;

            while(temp!=0)

            {

                sum+=temp%10;

                temp = temp/10;

            }

            if(sum%2==0)

            {

                int n1 = (rem+1)/2;

                int n2 = (rem-1)/2;

                ans+= full.substr(0,n1);

                ans+= full.substr((26-n2),n2);

            }

            else if(sum%2!=0)

            {

                int n1 = (rem-1)/2;

                int n2 = (rem+1)/2;

                ans+= full.substr(0,n1);

                ans+= full.substr((26-n2),n2);

            }

            

        }

        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends