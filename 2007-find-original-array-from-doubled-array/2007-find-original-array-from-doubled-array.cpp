class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) 
    {
        
        int n=changed.size();
        
        
        if(n%2)return {};
        
        sort(changed.begin(),changed.end());
        
        map<int , int >mp;
        
        vector<int> ans;
  
        int cnt=0;
        
        // int j=0;
        
       for(int i=0;i<n;i++) 
       {
           mp[changed[i]]++;
           
           if(ans.size()==n/2)break;
           
           if(changed[i]%2==0 and mp[changed[i]/2]>0 and mp[changed[i]]>0)
           {
               // cout<<changed[i]<<" ";
               
               mp[changed[i]]--;
               
               mp[changed[i]/2]--;
               
               ans.push_back(changed[i]/2);
           }
           
       }
        
        for(int i=0;i<n;i++)
        {
            if(mp[changed[i]]!=0)return {};
        }
        
        // cout<<changed[2]/2;
        
        return ans;
            
            
        
    }
};


//            if(j==n/2)break;
           
//            if(changed[i]%2==0)
//            {
//                cnt++;
//                ans[j++]=changed[i]/2;
//            }
           