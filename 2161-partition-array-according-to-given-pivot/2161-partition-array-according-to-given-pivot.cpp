class Solution {
public:
    
    
    
//     static bool cmp(pair<int,int> a ,pair<int,int> b)
//     {
//         if(a.first<a.second &&  b.first>b.second)
//             return a<b;
//          else if(a.first>a.second &&  b.first>b.second)
//          {
//              // return false;
//          }
        
//         else if(a.first<a.second &&  b.first<b.second)
//          {
//              // return false;
//          }
        
//         else
//         return a>b;
            
//             return true;
        
//     }
    
    
    
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        
        vector<int> small,big;
        
        int cnt=0;
        
        for(int f: nums)
        {
            if(f<pivot)small.push_back(f);
            else if(f>pivot) big.push_back(f);
            else cnt++;
           
            
        }
        
        while(cnt--)
        {
            small.push_back(pivot);
        }
        
        
        // small=small+big;
        
        for(int v: big)
        {
            small.push_back(v);
        }
        
        
        
        return small;
        
        
        
        
//         vector<pair<int,int>> vp;
        
        
//         for(int f: nums)
//         {
//             vp.push_back({f,pivot});
//         }
        
        
//         sort(vp.begin(),vp.end());
        
//         vector<int>  ans;
        
//         for(auto v:vp)
//         {
//             ans.push_back(v.first);
//         }
        
        
//         for(int i=0;i<)
       
        
//         return ans;
        
    }
};