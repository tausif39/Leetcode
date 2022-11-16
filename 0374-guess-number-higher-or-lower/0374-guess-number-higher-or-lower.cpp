/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) 
    {
        int l=1;
        int long long h=n;
         
        while(true)
        {
         int long long m=(h-l)/2 + l;
            // if(guess(l)==0) return l;
            // if(guess(h)==0) return h;
            
          if(guess(m)==0) return m;
          
          else if (guess(m)==1) 
          {
              l=m+1;
          }
            
          else if (guess(m)==-1) 
          {
              h=m-1;
          }
            
            
            
        }
        
        
        
    }
};