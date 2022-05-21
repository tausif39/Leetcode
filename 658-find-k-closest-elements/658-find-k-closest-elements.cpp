class Solution {
public:
    
    static bool cmp(pair<int,int> a , pair<int,int> b)
    {
        if(a.second==b.second)return a.first<b.first;
        
        return a.second<b.second;
    }
    
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector<pair<int,int>> vp;
        
        for(int i=0;i<arr.size();i++)
        {
            int diff=abs(arr[i]-x);
            vp.push_back({arr[i],diff});
        }
        
        
        sort(vp.begin(),vp.end(),cmp);
        
        vector<int> ans;
        
        
        for(auto it: vp)
        {
            ans.push_back(it.first);
            k--;
            if(!k)break;
        }
        
        sort(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};