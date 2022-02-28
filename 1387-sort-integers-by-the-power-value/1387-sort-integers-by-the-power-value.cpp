class Solution {
public:
    // bool cmp(pair<int, int> a, pair<int, int> b)
    // {
    //     return a>b;
    // }
    
      
    int getKth(int lo, int hi, int k) 
    {
        vector<int> v;
        int cnt=lo;
        for(int i =lo ; i <=hi;i++)
        {
            v.push_back(cnt);
            cnt++;
            
        }
        
       
        
        vector<int> p;
        
        vector<pair<int, int>> a;
        
        
        for(int i=0;i<v.size();i++)
        {
            int digit=v[i];
            int c=0;
            while(digit!=1)
            {
                if(digit%2==0)
                {
                    digit=digit/2;
                    c++;
                }
                
                else 
                {
                    digit= 3* digit + 1;
                    c++;
                }
                
            }
            
            p.push_back(c);
            
        }
        
        
        for(int i=0;i<v.size();i++)
        {
            // make_pair(p[i],v[i]);
            
             a.push_back({p[i],v[i]});
        }
        
        sort(a.begin(),a.end());
        // sort(a.begin(),a.end(),cmp);
        
//         for(int i=0;i<a.size();i++)
//         {
//             for(int j=i+1;j<a.size();j++)
//             {
//                 if(cmp(a[i],a[j]))
//                 {
//                     swap(a[i],a[j]);
//                 }

//             }
            
//         }
        
        
//         int ans;
//         int ok=0;
//         for(int i=0;i<=k;i++)
//         {
//             if(i==k)
//             {
//                 ans=a[i].second;
//             }
                
//         }
        
        
        
        return a[k-1].second;
        
    }
};