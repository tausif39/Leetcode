class Solution {
public:
    
     bool checkCycle(int node,vector<int>&vis,vector<int>&dfsVis,vector<vector<int>>&graph)
    {
        vis[node]=1;
        dfsVis[node]=1;
        for(auto &child: graph[node]){
            if(!vis[child]){
                if(checkCycle(child,vis,dfsVis,graph))
                    return true;
            }
            else if(dfsVis[child])
                return true;
        }
        dfsVis[node]=0;
        return false;
       
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) 
    {
         int n=graph.size();
        vector<int>vis(n,0);
        vector<int>dfsVis(n,0);
        vector<int>res;
        
         for(int i=0;i<n;i++)
         {
             
            if(!checkCycle(i,vis,dfsVis,graph))
                res.push_back(i);  
            
        }

        return res;
    }
};