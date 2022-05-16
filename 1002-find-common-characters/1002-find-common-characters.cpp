class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>v;
        string ans;
        for(int i=0;i<words[0].size();i++)//l
        {
            string demo;
            bool flag=0;
            for(int j=1;j<words.size();j++)//lab
            {
                for(int k=0;k<words[j].size();k++)
                {
                    if(words[0][i]!=words[j][k]) flag=1;
                    else {flag=0; words[j][k]='-1' ; break;}
                }
                if(flag==1)break;
            }
            if(flag==0)
            {
                demo+=words[0][i];
                
                v.push_back(demo);
            }
            
            
        }
        // 
        
        for(auto f:words)cout<<f<<" ";
        
        
        return v;
        
    }
};