class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        double m=-1;int tan=0;
        int dy = coordinates[1][1]- coordinates[0][1];
        int dx = coordinates[1][0] -coordinates[0][0];
        if(dx!=0)m= (double)dy/dx;
        else tan=90;
            
        for(int i=0;i<coordinates.size()-1;i++)
        {
            int tan1=0;
            int dy1= coordinates[i+1][1]- coordinates[i][1];  
            int dx1= coordinates[i+1][0] -coordinates[i][0] ;
            double m1;
            if(dx1!=0)
            {
                m1= (double)dy1/dx1;
                if(m1!=m) return false;
            }
            else if(dx1==0)
            {
                tan1=90;
                if(tan!=tan1) return false; 
                
            }
            
            
            
        }
        return true;
    }
};