class Solution {
public:
    
    int freq_small(string s)
    {
        map<int ,int> mp;
        
        for(int i=0;i<s.size();i++)
        {
            ++mp[s[i]];
        }
        
                 
         int cnt1=0 ;
            
        for(auto it:mp)
        {
            cnt1=it.second;
            break;
        }
             
                 
         return cnt1;  
    }
    

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) 
    {
        
        
        int n=queries.size();
        int m=words.size();
        
        
        
        vector<int> freq_word(m);
        
        
         for(int j=0;j<m;j++)
         {
             freq_word[j]=freq_small(words[j]);
         }

        // for(auto it:freq_word)cout<<it<<" ";
       
        
        vector<int> ans;
        
        
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            
            int freq_query=freq_small(queries[i]);
            
            
            for(int j=0;j<m;j++)
            {    
                if(freq_word[j]>freq_query)cnt++;      
                
            }
            
            
            ans.push_back(cnt);
            
            
            
        }
        
        
        
        return ans;
        

    }
};




            // cout<<freq_query<<" ";
                // int freq_word=freq_small(words[i]);
                // cout<<freq_word[j]<<" ";