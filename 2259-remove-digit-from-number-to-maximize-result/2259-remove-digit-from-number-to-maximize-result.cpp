class Solution {
public:
    string removeDigit(string number, char digit) 
    {
        
        vector<string > v;
        
        int i=0;
        while(i<number.size())
        {
            if(number[i]==digit)
            {
                string a;
                for(int j=0;j<number.size();j++)
                {
                    if(j==i)continue;
                    else a.push_back(number[j]);
                    
                }
                
                v.push_back(a);
            }
            
            i++;
            
        }
        
        sort(v.begin(),v.end(),greater<string>());
            
        
        return v[0];
        
    }
};