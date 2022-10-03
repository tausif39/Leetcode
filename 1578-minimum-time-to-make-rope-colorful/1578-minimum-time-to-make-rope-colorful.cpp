class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) 
    {
        
        
        // vector<int > v;
        
        char current ='A'; 
        
        int i=0;
        
        int time=0;
        
        while(i<colors.size())
        {
            if(current!=colors[i])
            {
                current=colors[i];
                i++;
            }
            else
            {
                    vector<int>v;
                    v.push_back(neededTime[i-1]);
                      while(current==colors[i] and (i<colors.size()))
                      {
                          v.push_back(neededTime[i]) ;
                          i++;

                      }
                        
                    sort(v.rbegin(),v.rend());
                    
                    int sum=accumulate(v.begin(),v.end(),0);
                    sum-=v[0];
                    time+=sum; 
            }
            
            // i++;
            
         
            
        }
        
        return time;
        
    }
};