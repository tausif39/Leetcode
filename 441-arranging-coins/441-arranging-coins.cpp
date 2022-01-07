class Solution {
public:
    int arrangeCoins(int n) 
    {
        
//       // vector<vector<int>> v;
        
        // int x;
//         int long long maxii=1;
//         for(int long long i=1;i<n;i++)
//         {
//             if( (i*(i+1))/2<= n)
//              {
//                  maxii=max(i,maxii);
//              }
            
//         }
        
//         return maxii;
        
        long int count=0;
        int ans=0;
        int k=1;
        while(count<=n)
        {
            count+=k;
            if(count<=n)
            ans++;
            k++;
            
        }
        
        return ans;
        
    }
};