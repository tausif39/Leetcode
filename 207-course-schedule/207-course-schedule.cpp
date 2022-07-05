class Solution {
public:
    
    bool checkCycle(int node,vector<int>&vis,vector<int>&dfsVis,vector<int> graph[])
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
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
         
         vector<int>vis(numCourses,0);
         vector<int>dfsVis(numCourses,0);
         
        vector<int> adj[numCourses];
        
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            
        }
         
        
         for(int i=0;i<numCourses;i++)
         {
             
            if(checkCycle(i,vis,dfsVis,adj))return false;
                
            
         }
        
        return true;
        
        
    }
};