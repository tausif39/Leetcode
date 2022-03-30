class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) 
    {
        vector<string> v1,v2,ans;
        
        int i=0;
        while(i<s1.size())
        {
            string s;
            
            while(i<s1.size() and s1[i]==' ')i++;
            
            while(i<s1.size() and s1[i]!=' ')
            {
                s+=s1[i];
                i++;
                
            }
            
            v1.push_back(s);
            
        }
        
        
         i=0;
        while(i<s2.size())
        {
            string s;
            
            while(i<s2.size() and s2[i]==' ')i++;
            
            while(i<s2.size() and s2[i]!=' ')
            {
                s+=s2[i];
                i++;
                
            }
            
            v2.push_back(s);
            
        }
        
        
        // for(auto c:  v1)
        // {
        //   cout<<c<<endl;
        // }
        
        
        vector<bool> vis1(v1.size(),true);
        
        vector<bool> vis2(v2.size(),true);
        
        
        for(int i=0;i<v1.size()-1;i++)
        {
            for(int j=i+1;j<v1.size();j++)
            {
                
                if(v1[i]==v1[j])
                {
                    vis1[i]=false;
                    vis1[j]=false;
                }
            }
            
        }
        
        
        for(int i=0;i<v2.size()-1;i++)
        {
            for(int j=i+1;j<v2.size();j++)
            {
                if(v2[i]==v2[j])
                {
                    vis2[i]=false;
                    vis2[j]=false;
                }
            }
            
        }
        
        
        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {
                if(v1[i]==v2[j])
                {
                    vis1[i]=false;
                    vis2[j]=false;
                }
            }
            
        }
        
        
        
        for(int i=0;i<v1.size();i++)
        {
            if(vis1[i])ans.push_back(v1[i]);
        }
        
        for(int i=0;i<v2.size();i++)
        {
            if(vis2[i])ans.push_back(v2[i]);
        }
        
//         for(auto c:  vis1)
//         {
//           cout<<c<<endl;
//         }
        
        
        return ans;
        
        
    }
};