class Solution {
public:
    
    
    int maxCoins(vector<int>& piles) 
    {
        
        sort(piles.rbegin(),piles.rend());
        
     // for(auto it :piles)cout<<it<<" ";
        
        
        // {5,4,2}
        
        
        int alice=0,you=1,bob=piles.size()-1;
        
        int ans=0;
        
        
        while(you<bob)
        {
            
            ans+=piles[you];
            alice+=2;
            you+=2;
            bob--;
            
        }
        
        return ans;
        
        
    }
};