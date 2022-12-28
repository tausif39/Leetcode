class Solution {
public:
    int minStoneSum(vector<int>& nums, int k) 
    {
        // sort(nums.begin() , nums.end());
        
        priority_queue<int> pq;
        
        
        for(auto it:nums)
        {
            pq.push(it);  //o(log(n))
        }
        
        while(k--)
        {
            // int topp=floor(pq.top()/2);
            
            int topp=(pq.top()%2==0)?pq.top()/2:pq.top()/2 +1;
            
            // cout<<topp<<" ";
            pq.pop();
            
            pq.push(topp); 
        }
        
       int ans=0;
        
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        
        return ans;
        
        
        
        
    }
};