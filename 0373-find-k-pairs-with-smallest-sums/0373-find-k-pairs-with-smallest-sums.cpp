class Solution {
public:
    
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k)
    {
        
        priority_queue < pair<int, pair<int , int>>> heap;
        
        int n=nums1.size();
        int m=nums2.size();
        
        
        for(auto num1:nums1)
        {
            
            for(auto num2:nums2)
            {
                int sum=num1+num2;
                
                if(heap.size()<k)
                {
                    heap.push({sum,{num1,num2}});
                }
                
                else if(heap.size()==k)
                {
                    if(heap.top().first>sum)
                    {
                        heap.pop();
                        heap.push({sum,{num1,num2}});
                        
                    }
                    else break;
                    
                }
                
        
            }
            
            
        }
        
        vector<vector<int>> ans;
        
        while(!heap.empty())
        {
            
            auto p=heap.top();
            heap.pop();
            
            ans.push_back({p.second.first,p.second.second});
            
        }
        
        // sort
        
        return ans;
        
        
    }
};