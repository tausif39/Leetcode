class Solution {
public:
 
    long long interchangeableRectangles(vector<vector<int>>& rectangles) 
    {
        
        for(int i=0;i<rectangles.size();i++)
        {
            int factor = __gcd(rectangles[i][0] , rectangles[i][1]);
            
            rectangles[i][0]/=factor;
            rectangles[i][1]/=factor;    
        }
        
        map<pair<long long, long long>, long long> mp;
        
        
        for(int i=0;i<rectangles.size();i++)
        {
            ++mp[{rectangles[i][0] , rectangles[i][1]}];
        }
        
        
        long long ans=0;
        
        for(auto it:mp)
        {
            ans+=(long long)((it.second*(it.second-1))/2);
        }
        
        return ans;
    }
};