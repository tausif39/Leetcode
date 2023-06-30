class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) 
    {    
        
        int rad=0;
        
        
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        
        for(int i=0,j=0;i<houses.size();i++)
        {
            
            while(j<heaters.size()-1 and abs(heaters[j]-houses[i]) >=abs(heaters[j+1]-houses[i]))
            {
                j++;
            }
            
            rad=max(rad, abs(heaters[j]-houses[i]));
        }
        
        return rad;
        
    }
};