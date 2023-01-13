class Solution {
public:
    
    int countLatticePoints(vector<vector<int>>& circles) 
    {
        set<pair<int,int>> s;
        for(auto circle : circles)
        {
            int x = circle[0];
            int y = circle[1];
            int r = circle[2];
            int count = 0;
            for(int i = x-r;i<=r+x;i++)
            {
                for(int j = y-r;j<=r+y;j++)
                {
                    if((i-x)*(i-x)+(j-y)*(j-y)<=r*r)
                        s.insert({i,j});
                }
            }
        }
        return s.size();
        
    }
};