class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        priority_queue<int > pq;
        
        // int z=0;
        
        
        for(int i;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                // z++;
                pq.push(matrix[i][j]);
                
                if(pq.size()>k)
                {
                    pq.pop();
                }
                // if(z==k)break;
                
              
            }
        }
        
//         for(;i<matrix.size();i++)
//         {
//             for(;j<matrix[i].size();j++)
//             {
//                 if(matrix[i][j]>pq.top())
//                 {
//                     pq.pop();
//                     pq.push(matrix[i][j]);
                    
//                 }
              
//             }
//         }
        
//         int mm=-1;
        
//         while(!pq.empty())
//         {
//             mm=pq.top();
//             pq.pop();
//         }
        
        // return mm;
        return pq.top();
        
        
    }
};