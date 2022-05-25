class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& arr) 
    {
        if(arr.size()==1)return {arr[0]};
        
        unordered_map< int,int> mp;
        
        for(int i: arr)mp[i]++;
        
        priority_queue <pair<int,int>> pq;
        
        
        for(auto it: mp)
        {
            pq.push({it.second,it.first});     
        }
        
        vector<int> ans;
        
        while(!pq.empty() )
        {
            pair<int, int> A=pq.top();
            pq.pop();
            
            ans.push_back(A.second);
            
            
            if(!pq.empty())
            {
                pair<int, int> B=pq.top();
                pq.pop();
                
                ans.push_back(B.second);
                
                if(B.first>1)
                {
                    pq.push({B.first-1,B.second});
                }
                
                
            }
            
                 if(A.first>1)
                 {
                    pq.push({A.first-1,A.second});
                 }
            
           
            
            
        }
        
        return ans;
        
        
        
        
        
    }
};