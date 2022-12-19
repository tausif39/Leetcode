//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  void solve(unordered_map<int ,list<pair<int,int>>>adj, int n , int k ,vector<int>&dis){

        

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        

        pq.push({k,0});

        dis[k]=0;

        while(!pq.empty()){

            

            int x=pq.top().first;

            int y=pq.top().second;

            pq.pop();

            

            for(auto i:adj[x]){

                if(dis[i.first]>y+i.second){

                    dis[i.first]=y+i.second;

                    pq.push({i.first,y+i.second});

                }

            }

        }

    }

    int minimumCost(vector<vector<int>>& flights, int n, int k) {

        unordered_map<int ,list<pair<int,int>>>adj;

        for(int i=0;i<flights.size();i++){

            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});

        }

        

        vector<int>dis(n+1,INT_MAX);

        solve(adj,n,k,dis);

        int maxi=INT_MIN;

        for(int i=1;i<=n;i++){

            if(dis[i]==INT_MAX){

                return -1;

            }

            if(dis[i]>maxi){

                maxi=dis[i];

            }

        }

        return maxi;

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int size;
        cin >> size;
        vector<vector<int>> flights(size,vector<int>(3));
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flights[i]=temp;
        }

        Solution ob;
        cout << ob.minimumCost(flights, n, k) << "\n";
    }
}

// } Driver Code Ends