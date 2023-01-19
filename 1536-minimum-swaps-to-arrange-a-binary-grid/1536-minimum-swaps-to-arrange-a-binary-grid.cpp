class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
       
        vector<int> vec;  //find order of zero:
        for(int i=0;i<grid.size();i++){
            int counter=0;
            for(int j=grid[0].size()-1;j>=0;j--){
               if(grid[i][j]==0){
                   counter++;
               }
               else if(grid[i][j]==1){
                   break;
               }
            }
            vec.push_back(counter);
        }
 
        int ans=0;
        for(int i=0;i<n;i++){    
            int curr = i;
            int req = n - 1 - i; 
            while(curr < n and vec[curr] < req){
                 curr++;
            }
            if(curr == n) return -1;
            ans+=curr - i;
            while(curr > 0){
                vec[curr] = vec[curr - 1];
                curr--;
            }
        }
        return ans;
       
        
    }
};