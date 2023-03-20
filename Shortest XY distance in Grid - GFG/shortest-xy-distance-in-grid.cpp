//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
          vector<vector<int>> vis(N,vector<int>(M,0));
        queue<pair<int,pair<int,int>>> q;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(grid[i][j]=='X'){
                    q.push({0,{i,j}});
                    vis[i][j]=1;
                }
            }
        }
        
        
        int ans=INT_MAX;
        while(!q.empty()){
            int row=q.front().second.first;
            int col=q.front().second.second;
            int dist=q.front().first;
            q.pop();
            
            int drow[4]={-1,0,1,0};
            int dcol[4]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && nrow<N && ncol>=0 && ncol<M && !vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    if(grid[nrow][ncol]=='Y'){
                        ans=min(ans,dist+1);
                    }
                    q.push({dist+1,{nrow,ncol}});
                }
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
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends