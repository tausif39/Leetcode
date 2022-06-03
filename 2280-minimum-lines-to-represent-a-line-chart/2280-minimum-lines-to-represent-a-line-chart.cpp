class Solution {
public:
    int minimumLines(vector<vector<int>>& stock) {
        if(stock.size()==1) return 0;
        
        sort(stock.begin(),stock.end());
        
        int count=1;
        __float128 slope=(__float128)(stock[1][1]-stock[0][1])/(__float128)(stock[1][0]-stock[0][0]);
        for(int i=2;i<stock.size();i++)
        {
            __float128 newslope=(__float128)(stock[i][1]-stock[i-1][1])/(__float128)(stock[i][0]-stock[i-1][0]);
            
            if(slope!=newslope)
            {
                count++;   
            }
            slope=newslope;
        }
        return count;
    }
};