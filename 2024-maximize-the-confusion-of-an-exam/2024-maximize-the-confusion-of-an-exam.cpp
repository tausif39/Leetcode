class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) 
    {
        int ans=0;
        int cnt=0;
        int left=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='F')cnt++;
            
            while(cnt>k)
            {
                if(s[left]=='F')cnt--;
                left++;
            }
            
            ans=max(ans,i-left+1);
            
        } 
        
        left=0,cnt=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='T')cnt++;
            
            while(cnt>k)
            {
                if(s[left]=='T')cnt--;
                left++;
            }
            
            ans=max(ans,i-left+1);
            
        } 
        
        
        
        

        return ans;
    }
};