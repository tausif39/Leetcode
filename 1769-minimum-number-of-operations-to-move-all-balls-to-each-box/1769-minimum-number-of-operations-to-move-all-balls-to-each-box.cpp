class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        
        int n= boxes.size();
        
        vector<int> pre(n),suff(n);
        
        int box=0;
        
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            
            sum= sum+box;
            pre[i]=sum;
            box+=(boxes[i]=='1')?1:0;
            
            // cout<<pre[i]<<" ";
        }
        
        box=0;
        sum=0;
        
        
        for(int i=n-1;i>=0;i--)
        {
            
            sum= sum+box;
            suff[i]=sum;
            box+=(boxes[i]=='1')?1:0;
            
            // cout<<suff[i]<<" ";
        }
        
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(pre[i]+suff[i]);
        }
        
        
        
        return ans;
        
    }
};