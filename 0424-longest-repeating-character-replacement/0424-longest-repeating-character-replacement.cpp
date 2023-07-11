    class Solution {
    public:

        int  maximumchar(string s, int k,char f,int ans=0)
        {
            int left=0,cnt=0;

            for(int i=0;i<s.size();i++)
            {
                if(s[i]!=f)cnt++;

                while(cnt>k)
                {
                    if(s[left]!=f)cnt--;  
                    
                    left++;
                }

                ans=max(ans,i-left+1);
                

            }

            return ans;
        }

        int characterReplacement(string s, int k) 
        {

            set<char> mp;

            for(auto i:s)mp.insert(i);

            int ans=0;

            
            if(mp.size()==1)return s.size();
            
            
            for(auto it:mp)
            {
                ans= max(ans,maximumchar(s,k,it));
            }

            return ans;



        }
    };