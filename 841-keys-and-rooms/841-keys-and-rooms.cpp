class Solution {
public:
    
    void dfs(int node, vector<vector<int>>& rooms, vector<int> &vis) 
    {
        vis[node]=true;
        
        for(auto it:rooms[node])
        {
            if(vis[it]==false)
            {
                dfs(it,rooms,vis);
            }
        }
        
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        int n=rooms.size();
        
        vector<int> vis(n,false);
        
        dfs(0,rooms,vis);
        
        for(auto i:vis)if(!i)return false;
        
        return true;
        
        
    }
};