class Solution {
public:
    
    #define mx(v) *max_element(v.begin(), v.end())
    
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int maxii=mx(candies);
        
        vector<bool> ans;
        
        for(int it: candies)
        {
            if(it+extraCandies>=maxii)
            {
                ans.push_back(true);
            }
            else 
            {
                ans.push_back(false);
                
            }
        }
        
        return ans;
        
    }
};