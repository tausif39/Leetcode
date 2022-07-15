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
    
    
    int removeStones(vector<vector<int>>& stones) 
    {
        int n=stones.size();
        
        vector<int> parent(1001);
        vector<int> rank(1001);
        
        for(int i=0;i<parent.size();i++)
        {
            parent[i]=i;
            rank[i]=0;
        }
        
        
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1])
                {
                    
                    Union(i,j, parent, rank);
                }
            }
        }
        
       
       int cnt=0;
        
        for(int i=0;i<stones.size();i++)
        {
            if(parent[i]==i)
            {
                cnt++;
            }
        }
        
        
        return stones.size()-cnt;
        
        
        
 
  
//     for (int i = 0; i < n; i++) {
 
//         // Insert all topmost
//         // vertices obtained
//     }
        
        
        return stones.size()-cnt;
        
        
        
    }
};