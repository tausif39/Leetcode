class Solution {
public:
    string multiply(string num1, string num2) 
    {
        
        int n=num1.size();
        int m=num2.size();
        
        if(num1[0]=='0' || num2[0]=='0')return "0";
        
        
        string res;
        
        vector<int> ans(n+m,0);
        
        int indx=0;
        
        for(int i=n-1;i>=0;i--)
        {
            int k=indx;
            
            for(int j=m-1;j>=0;j--)
            {
                int num=(num1[i]-'0')*(num2[j]-'0');
                ans[indx]+=num;
                ans[indx+1]+=ans[indx]/10;
                ans[indx]%=10;indx++;
            }
            
            indx=k+1;
            
        }
        
        reverse(ans.begin(),ans.end());
        
        // for(auto it:ans)cout<<it;
        
        
        indx=0;
        
        while(ans[indx]==0)indx++;
        
        for(;indx<ans.size();indx++)
        {
            res+= ans[indx] + '0';
        }
        
        
        
        return res;
        
        
        
    }
};