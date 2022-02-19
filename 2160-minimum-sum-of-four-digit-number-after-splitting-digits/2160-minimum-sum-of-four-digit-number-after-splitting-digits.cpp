class Solution {
public:
    int minimumSum(int num) 
    {
        string a=to_string(num);
        sort(a.begin(),a.end());
        
        // digit at 10th place should be small\
        
        int ans = (a[0]-'0'+ a[1]-'0')*10 + a[2]-'0' + a[3]-'0';
        
        return ans;
        
    }
};