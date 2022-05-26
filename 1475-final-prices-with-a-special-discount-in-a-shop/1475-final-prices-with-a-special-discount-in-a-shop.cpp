class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        vector<int> ans;
        
        int i=0;
        
        for(i=0;i<prices.size()-1;i++)
        {
            bool flag=true;
            
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j]<=prices[i])
                {
                    flag=false;
                    ans.push_back(prices[i]-prices[j]);
                    break;
                }
            }
            
            if(flag)ans.push_back(prices[i]);
            
            
        }
        
        ans.push_back(prices[i]);
        
        return ans;
        
        
        
        
    }
};