class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& m, int r, int c) 
    {
        
        if((m.size() * m[0].size())!=(r*c))
        {
            return m;
        }
        vector<vector<int>>v(r, vector<int>(c));
        int p=0,q=0;
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
                {
                    if(q==c)
                    {
                        q=0;
                        p++;
                    }
                    v[p][q]=m[i][j];
                    q++;
                }
        }
        return v;
    }
};