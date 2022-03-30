class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        vector<pair<int ,int>> v;
        
        for(int i=0;i<points.size();i++)
        {
            int x=points[i][0] * points[i][0];
            
            int y=points[i][1] * points[i][1];
            
            v.push_back({x+y,i});
            
        }
        
        sort(v.begin(),v.end());
        
     
        
        vector<vector<int>> ans;
        
        int i=0;
        
        while(k--)
        {
            ans.push_back(points[v[i].second]);
            
            i++;
            
            
        }
        
        return ans;
        
        
        
    }
};