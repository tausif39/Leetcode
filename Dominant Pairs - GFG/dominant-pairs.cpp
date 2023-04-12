//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int binary_lower(vector<int>&arr,int l,int h,int target){
        int ans=-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(target>=5*arr[m]){
                ans=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return ans;
    }
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        int mid=n/2;
        int ans=0;
        sort(arr.begin()+mid,arr.end(),greater<int>());
        for(int i=0;i<mid;i++){
            int target=arr[i];
            int index=binary_lower(arr,mid,n-1,target);
            if(index!=-1){
                ans+=(n-index);
            }
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends