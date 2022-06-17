class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res;
        
        sort(potions.begin(),potions.end());
        
        
        for(int i=0;i<spells.size();i++)
        {
            long long temp = spells[i];
            if(success % temp == 0)
            {
                temp = success/temp;
            }
            else
            {
                temp = (success/temp) + 1;
            }
            
            
            auto lower = lower_bound(potions.begin(),potions.end(),temp);
            int idx = lower - potions.begin();
            res.push_back(potions.size() - idx);
        }
        return res;
    }
};