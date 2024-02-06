class Solution {
public:
    
    string getHint(string secret, string guess)
    {
        
        
        unordered_map<int, int> mp;
        
        
        for(auto it:secret)mp[it]++;
        
        int bull=0,cow=0;

        
        for(int i=0;i<guess.size();i++)
        {
            if(guess[i]==secret[i])
            {
                mp[secret[i]]--;
                bull++;
            }
            
        }
        
        
        for(int i=0;i<guess.size();i++)
        {
            if(guess[i]!=secret[i])
            {
                if(mp[guess[i]]>0)
                {
                    mp[guess[i]]--;
                    cow++;
                }
            }
            
        }
        
        // cout<<bull<<" "<<cow<<endl;
        
        string ans;
        
        ans+=to_string(bull);
        ans+='A';
        ans+=to_string(cow);
        ans+='B';
        
        return ans;
        
        
    }
};