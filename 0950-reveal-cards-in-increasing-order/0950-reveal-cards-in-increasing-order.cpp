class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) 
    {
        
        // if(deck.size()<3)return deck;
        
        sort(deck.rbegin(), deck.rend());
        
        vector<int> ans;
        
        
        ans.push_back(deck[0]);
        
        
        for(int i=1;i<deck.size();i++)
        {
            
            int last=ans[ans.size()-1];
            
            ans.pop_back();
            
            reverse(ans.begin(),ans.end());
            
            ans.push_back(last);
            ans.push_back(deck[i]);
            
            reverse(ans.begin(),ans.end());
               
        }
        
        return ans;
        
        
        
        
        
    }
};