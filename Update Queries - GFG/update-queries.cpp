//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        void put(vector<int>& v,int val,bool positive){

            int k= positive ? 1 : -1;

            for(int i=0;i<32;i++){

                if(val>>i & 1 ) v[i]+=k;

            }

        }

        vector<int> updateQuery(int n,int q,vector<vector<int>> &u){

            // code here

            vector<int> ans(n,0);

            vector<vector<int>> vec(n,vector<int> (32,0));

            for(auto v : u){

                put(vec[v[0]-1],v[2],1);

                if(v[1]!=n) put(vec[v[1]],v[2],0);

            }

            vector<int> curr(32,0);

            for(int i=0;i<n;i++){

                int tans=0;

                for(int j=0;j<32;j++) {

                    curr[j]+=vec[i][j];

                    if(curr[j]>0) tans+= (1<<j);

                }

                ans[i]=tans;

            }

            return ans;

        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector <vector <int>> u(q,vector <int>(3));
        for(int i=0;i<q;i++)
            cin>>u[i][0]>>u[i][1]>>u[i][2];
        Solution a;
        vector <int> ans=a.updateQuery(n,q,u);//<<endl;
        for(auto j:ans)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends