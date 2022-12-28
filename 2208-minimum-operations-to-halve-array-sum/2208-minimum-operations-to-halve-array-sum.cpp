class Solution {
public:
    int halveArray(vector<int>& nums) 
    {
        double sum=0;
        
        for(auto it:nums)sum+=it;
        
        // cout<<sum<<" ";
        
        priority_queue<double> pq;
        
        
        for(auto it:nums)pq.push(it);
        
        double half=(double)sum/2;
        
        // cout<<half<<" ";
        
        int cnt=0;
        
        double current_sum=sum;
        
        while(current_sum>half)
        {
            double topp=(double)pq.top()/2;
            
            
            current_sum-=pq.top();
            
            current_sum+=topp;
            
            // cout<<current_sum<<" ";
            
            pq.pop();
            
            pq.push(topp);
            
            
            cnt++;
            
        }
        
        return cnt;
        
        
        
    }
};