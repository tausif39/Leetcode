class Solution {
public:
    
     // make parent and rank array of max size

    
    
    int find(int a, vector<int> &parent) // find function used to tell us the parent of the value 'a'
    {
        if (parent[a] == a)
            return a;

        return parent[a] = find(parent[a] , parent);
    }

    void Union(int a, int b , vector<int> &parent, vector<int> &Rank)// By union we are making parent
    {
        a = find(a , parent); // find parent of a
        b = find(b , parent); // find parent of b

        if (a == b) // if both parents are equal, simply return
            return;

        if (Rank[a] > Rank[b]) // rank of a is larger, so it will become parent
        {
            // a would be parent
            parent[b] = a;
            Rank[a] += Rank[b]; // a become parent, so increase it's rank
        }
        else
        {
            // b would be parent
            parent[a] = b;
            Rank[b] += Rank[a]; // b become parent, so increase it's rank
        }
    }

    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        
        vector<int> parent(1001);
        
        vector<int> rank(1001,0);
        
        for(int i=0;i<parent.size();i++)parent[i]=i;
        
        vector<int> ans;
        
        for(int i=0;i<edges.size();i++)
        {
            int a=find(edges[i][0],parent);
            int b=find(edges[i][1],parent);
            if(a==b)
            {
                ans={edges[i][0],edges[i][1]};
            }
            else
            {
                Union(edges[i][0],edges[i][1],parent,rank);
                
            }
        }
            
            return ans;
            
 
    }
};