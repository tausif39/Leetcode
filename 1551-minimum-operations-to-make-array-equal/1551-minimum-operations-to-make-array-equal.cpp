class Solution {
public:
    int minOperations(int n) {
        int ans = 0;
        int len = n/2;
        if(n%2){
            ans = len*(len+1);
        }
        else{
            ans = len*len;
        }
        return ans;
    }
};