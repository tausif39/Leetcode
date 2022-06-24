class Solution {
public:
    
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        int i, j, n=paths.size();
        
        unordered_map<string, vector<string>> mp;
        for(i=0; i<n; i++)
        {
            int len=paths[i].size();
            string currpath="";
            for(j=0; j<len; j++)
            {
                if(paths[i][j]==' ')
                {
                    currpath+="/";
                    j++;
                    break;
                }
                
                else
                {
                    currpath+=paths[i][j];
                
                }
                
            }
            
            while(j<len)
            {
                string filename="";
                
                while(j<len && paths[i][j]==' ') j++; // removing spaces
                
                while(j<len && paths[i][j]!='(')
                {
                    filename+=paths[i][j++];
                }
                
                j++; // removing '('
                
                string content="";
                
                while(j<len && paths[i][j]!=')')
                {
                    content+=paths[i][j++];
                }
                
                j++; // removing ')'
                
                mp[content].push_back(currpath+filename);
            }
        }
        
        vector<vector<string>> ans;
        
        for(auto it : mp)
        {
            if(it.second.size()>1) ans.push_back(it.second); // only if multiple instances occur
        }
        return ans;
    }
};