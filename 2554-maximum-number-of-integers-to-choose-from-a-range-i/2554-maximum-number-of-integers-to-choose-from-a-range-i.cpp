class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       unordered_set st(banned.begin(), banned.end());
        int res = 0;
        int currSum = 0;
        
        for(int i=1; i<=n; i++){
            if(!st.count(i)){
                currSum += i;
                res++;
            }
            
            if(currSum > maxSum) return res-1;
        }
        
        return res;
     
    }
};