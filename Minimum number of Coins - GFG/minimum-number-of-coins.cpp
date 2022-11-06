//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int>ans;
        int notes[10] = {2000,500,200,100,50,20,10,5,2,1};
          int noteFreq[10] = { 0 };
        
    for(int i = 0; i<10; i++){
        if(N >= notes[i]){
            noteFreq[i] = N / notes[i];
            N = N % notes[i];
        }
    }
    for(int i = 0; i<10; i++){
            while(noteFreq[i]--){
                ans.push_back(notes[i]);
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
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends