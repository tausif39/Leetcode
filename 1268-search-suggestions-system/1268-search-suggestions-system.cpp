class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) 
    {
        
        vector<vector<string>> ans;
        
        sort(products.begin(),products.end());
        
        string s;
        
        int i=0;
        
        while(i<searchWord.size())
        {
            s+=searchWord[i];
            
            int cnt=0;
            
            vector<string> level;
            
            for(int i=0;i<products.size();i++)
            {
                string z=products[i].substr(0,s.size());
                
                if(s==z)
                {
                    
                    level.push_back(products[i]);
                    if(level.size()==3)break;
                }
                    
                
            }
            
            i++;
            
            ans.push_back(level);
            
            
        }
        
        return ans;
        
    }
};