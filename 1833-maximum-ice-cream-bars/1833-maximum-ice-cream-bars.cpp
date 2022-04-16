class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        sort(costs.begin(),costs.end());
        
        // int sum=0;//
        int cnt=0;
        
        int long long x=coins;
        
        for(int i=0;i<costs.size();i++)
        {
            // if(sum+costs[i]<=coins)sum+=costs[i];
            
            x-=costs[i];
            
            if(x>=0)cnt++;
            
        }
        
        
        return cnt;
            
        
    }
};