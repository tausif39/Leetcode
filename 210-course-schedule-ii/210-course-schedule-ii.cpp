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
    
    void topo(int node,vector<int> graph[],stack<int> &st,vector<int>&vis)
    {
        vis[node]=1;
        
        for(auto child:graph[node])
        {
            if(!vis[child])
            {
                topo(child,graph,st,vis);
                
            }
        }
        
        st.push(node);      //backtrack
        
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<int> ans;
        
        if(prerequisites.size()==0)
        {
            for(int i=0;i<numCourses;i++)ans.push_back(i);
            
            return ans;
        }
        
        vector<int>vis(numCourses,0);
         vector<int>dfsVis(numCourses,0);
         vector<int>vis1(numCourses,0);
        vector<int> adj[numCourses];
        
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            
        }
         
        
         for(int i=0;i<numCourses;i++)
         {
             
            if(checkCycle(i,vis,dfsVis,adj))
            {
                return {};
            }
                
            
         }
        
        
        
        stack<int> st;
        
        for(int i=0;i<numCourses;i++)
        {
            if(vis1[i]==false)
            {
                topo(i,adj,st,vis1);
                
            }
            
        }
        
        
        
        
        while(!st.empty())
        {
            
            ans.push_back(st.top());
            st.pop();
        }
        
        
        return ans;
        
        
        
        
    }
};