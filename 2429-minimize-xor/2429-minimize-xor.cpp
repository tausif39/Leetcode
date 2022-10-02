class Solution {
 public:
 
    int minimizeXor(int num1, int num2) {
    int cnt2 = __builtin_popcount(num2);
    
    
    // counting set bits
    
    int ans = 0;
    
    // xor of 1 and 1 is 0 , so minimizing num1 by setting bits in ans
    for(int i = 31 ; i >= 0 ; i--){
	    int x = 1<<i;
        if(num1&x){
            ans = ans | x ;
            cnt2--;
            if(cnt2 == 0) break;
        }
    }
    
    // number of  bits in ans should be same as num2 so setting in ans , the unset bits of num1
	
    if(cnt2 > 0){
        for(int i = 0 ; i < 32 ; i++){
		    int x = 1<<i;
            if( (ans&x) == 0 ){
                ans =  ans | x ;
                cnt2--;
                if(cnt2 == 0) break;
            }
        }
    }
    
        return ans;
     }
   };