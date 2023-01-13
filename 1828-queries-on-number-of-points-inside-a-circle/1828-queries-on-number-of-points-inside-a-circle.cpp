class Solution {
public:
    
    bool inside(vector<int> v , vector<int> p)
    {
        int disx= (v[0] - p[0])* (v[0] - p[0]);
        int disy= (v[1] - p[1])* (v[1] - p[1]);
        
        int r=p[2]*p[2];
        int res= disx+ disy -  r;
        
        return (res<=0)?true:false;
        
        //true means outside
    }
    
    
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) 
    {
        vector<int> ans;
        
        for(int i=0;i<queries.size();i++)
        {
            int cnt=0;
            
            for(int j=0;j<points.size();j++)
            {
                if(inside(points[j],queries[i]))cnt++;
                
            }
            
            ans.push_back(cnt);
        }
        
        return ans;
    }
};