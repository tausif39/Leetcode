class Solution {
public:
    
    int numberOfBeams(vector<string>& bank) 
    {
        
        // int cnt=0;
        
        
        unordered_map<int , int> mp;
        
        
        
        
        for(int i=0;i<bank.size();i++)
        {
            
            
            int cnt=0;
            
            for(int j=0;j<bank[0].size();j++)
            {
                
                if(bank[i][j]=='1')
                {        
                    cnt++;
                    
                }


            } 
            
               
                    mp[i]=cnt;
                


        
        }
        
        int ans=0;
        
        for(int i=0;i<bank.size();i++)
        {
            
            if(mp[i])
            {
                
                for(int k=i+1;k<bank.size();k++)
                {
                    if(mp[k])
                    {
                        ans+=(mp[i]*mp[k]);
                        break;
                    }
                    
                }
                
            }
            
             
        }
        
        return ans;
        
    
        
        
    }
};