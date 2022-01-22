class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        unordered_map<char,int> mp;
        
        for(int i=0;i<stones.size();i++)
        {
            mp[stones[i]]++;
            
        }
        int cnt=0;
        for(int j=0;j<jewels.size();j++)
        {
            if(mp[jewels[j]]>0)
            {
                cnt+=mp[jewels[j]];
            }
            
            
        }
        
        
        return cnt;
        
    }
};