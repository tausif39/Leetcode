class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        
        unordered_map<int,int> mp;
        
        for(int i: arr)mp[i]++;
        
        // vector<pair<int,int>> vp;
        
        
        priority_queue<pair<int,int>> pq;
        
        int n=arr.size()/2;
        
        // for(int )
        
        for(auto it: mp)
        {
            // vp.push_back(it.second,it.first);
            
            pq.push({it.second,it.first});
            
            
        }
        
        int size=0;
        
        int cnt=0;
        
        
        while(size<n)
        {
            
            size+=pq.top().first;
            cnt++;
            pq.pop();
        }
        
        
        return cnt;
        
        
    }
};