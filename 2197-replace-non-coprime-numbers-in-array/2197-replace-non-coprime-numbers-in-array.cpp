class Solution {
public:
  
     long long gcd(long long a,long long b)
     {
         
        if(b==0) return a;
        return gcd(b, a%b);
    }
    
    long long lcm(long long a,long long b)
    {
        
         return (a / gcd(a, b)) * b;
    }
    
    vector<int> replaceNonCoprimes(vector<int>& nums) 
    {
        
        vector<int> res;
        stack<int> stk;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            
            int curr = nums[i];
            
            while(!stk.empty() && gcd(curr,stk.top()) > 1)
            {
                
               curr = lcm(curr,stk.top());
               stk.pop(); 
            }
            
            stk.push(curr);
        }
        
        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }
        
        reverse(res.begin(),end(res));
        return res;
    }
};