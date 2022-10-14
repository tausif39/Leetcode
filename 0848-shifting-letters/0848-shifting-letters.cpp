class Solution {
public:
    string shiftingLetters(string s, vector<int>& nums) 
    {
        int n=s.size();
        
        vector<int long long> pre(n,0);
        
        pre[n-1]=nums[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            pre[i]=(int long long)(pre[i+1]+nums[i]);
        }
        
        for(auto &it:pre)it%=26;
        
        
        
        
        for(int i=0;i<n;i++)
        { 
            int current= s[i]-'a';
            
            current+=pre[i];
            
            current%=26;
            
            s[i]=current+'a';
            
            // s[i]+=current;     
            
        }
        
        return s;
        
        
    }
};