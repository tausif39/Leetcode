class Solution {
public:
    int equalPairs(vector<vector<int>>& grid)
    {
         map<vector<int>,int>Map;
        int count =0;
        int n=grid.size();
        for(int i=0 ; i<n; i++){
            vector<int>temp;
            for(int j=0; j<n; j++){
                temp.push_back(grid[j][i]);
            }
            Map[temp]++;
        }
        
        for(int i=0; i<n; i++){
            vector<int>temp;
            for(int j=0; j<n; j++){
                temp.push_back(grid[i][j]);
            }
            if(Map.find(temp)!= Map.end())count+=Map[temp];
        }
        
        
        return count;
    
        
    }
};