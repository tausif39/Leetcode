class Solution {
public:
    int countOdds(int start, int end) 
    {

        // brute way
        if((start%2==0 && end%2!=0) || (start%2!=0 && end%2==0) ||(start%2!=0 && end%2!=0))
    {
        return (end-start)/2 +1;
    }

    else
    {
return(end-start)/2;
    }
    
    return 0;}
    };