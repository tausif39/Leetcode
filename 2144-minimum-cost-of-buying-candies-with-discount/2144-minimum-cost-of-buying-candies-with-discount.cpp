class Solution {
public:
    int minimumCost(vector<int>& cost) 
    {
        sort(cost.begin(),cost.end(),greater<int>());
        
        int ans=0;
        int k=0;
        for(int i=0;i<cost.size();i++)
        {
            if(k==2)
            {
                k=0;
                continue;
            }
            else k++;
            
            ans+=cost[i];
                
                
        }
        
        return ans;
        
    }
};