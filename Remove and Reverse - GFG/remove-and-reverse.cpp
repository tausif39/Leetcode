//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
         vector<int>v;
        for(int i=0;i<26;i++)
        v.push_back(0);
        int side=0;
        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'a']++;
        }
   
        map<int,int>m1;
        int i=0,j=s.size()-1;
        
        while(i<j)
        {
             if(side==0)
             {
                 
                 if(v[s[i]-'a']>1)
                 {
                       
                      m1[i]=1;
                      v[s[i]-'a']--;
                      side=1;
                      
                 }
                
                i++;
             }
            else
            {
                
                 if(v[s[j]-'a']>1)
                 {
                     
                     m1[j]=1;
                       v[s[j]-'a']--;
                      side=0;
                 }
                
                j--;
                
            }
        
            
        }
        
        
        
        string st="";
        int k=0;
        while(k<s.size())
        {
            if(m1[k]!=1)
            {
               st=st+s[k];
            }
            k++;
        }
        
        //cout<<st<<endl;
        
        if(side==0 || st.size()<=1)
        {
            return st;
        }
        else
        {
          reverse(st.begin(),st.end());
          return st;
        }
             
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends