class Solution {
public:
    int xorAllNums(vector<int>& num1, vector<int>& num2) 
    {
        int n=num1.size();
        int m=num2.size();
        
        if(n%2==0 and m%2==0)return 0;
        
        else if(n%2!=0 and m%2==0)
        {
            int xor_all=0;
            
            for(auto it:num2)xor_all^=it;
            
            return xor_all;
        }
        
        else if(n%2==0 and m%2!=0)
        {
            int xor_all=0;
            
            for(auto it:num1)xor_all^=it;
            
            return xor_all;
        }
        
        
        int xor_all=0;
            
        for(auto it:num1)xor_all^=it;
        
        for(auto it:num2)xor_all^=it;
        
        
        return xor_all;
        
    }
};