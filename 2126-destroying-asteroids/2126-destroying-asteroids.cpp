class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) 
    {
        sort(asteroids.begin(),asteroids.end());
        
        long long int  sum=mass;
        
        for(int i: asteroids)
        {
            if(sum>=i)sum+=i;
            else return false;
                
        }

        return true;
        
        
        
        
    }
};