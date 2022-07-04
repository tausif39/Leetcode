class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        
        int moves = 0;
        for(int i=0;i<n-1;i++){
            // now take two points and measure the max distance between x or y cordinate
            int x = abs(points[i][0]-points[i+1][0]);
            int y = abs(points[i][1]-points[i+1][1]);
            // store max of x and y in moves
            moves += max(x,y);
            
        }
        return moves;
    }
};