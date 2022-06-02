class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        vector <int> pf(1009,0);
        
        for(auto j:trips)
        {
            if(j[0]>capacity)return false;
            
            for(int i=j[1];i<j[2];i++)
            {
                pf[i]+=j[0];
            }
        }
        
        
        for(auto j:pf)
        {
            if(j>capacity)return false;
        }
        
            
        return true;
        
        
    }
};