//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    int noOfFolds(int a, int b, int m, int n){
        int folds = 0;
        while(a > m){
            a /= 2;
            folds++;
        };
        while(b > n){
            b /= 2;
            folds++;
        }
        return folds;
    }
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        return min(noOfFolds(A, B, C, D), noOfFolds(B, A, C, D));
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends