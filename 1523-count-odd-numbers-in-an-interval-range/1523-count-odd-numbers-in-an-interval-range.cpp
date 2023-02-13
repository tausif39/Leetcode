class Solution {
public:
    int countOdds(int start, int end) 
    {

        // brute way
         int count=0;
     for(int i= start; i<=end;i++)
     {
            if(i%2!=0)
            {
                count++;
            }
     }    
     return count;
    }
    
    };