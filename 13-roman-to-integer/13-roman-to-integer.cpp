class Solution {
public:
    
    int romanToInt(string s)
    {
        map<char, int> mp;
        
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        
        
        
        int sum=0;
        
        bool flag=false;
        
        for(int i=0;i<s.size()-1;i++)
        {
            
            cout<<sum<<" ";
            
            if(mp[s[i]]>mp[s[i+1]])
            {
                // if(i==s.size()-2)flag=true;
                sum+=mp[s[i]];
            }
            
            else if(mp[s[i]]==mp[s[i+1]])
            {
                if(i==s.size()-2)flag=true;
                sum+=mp[s[i]]+mp[s[i+1]];i++;
            }
            else
            {
                if(i==s.size()-2)flag=true;
               int diff=abs(mp[s[i+1]] -mp[s[i]]);
                i++;
                sum+=diff;
                
                
            }
            
        }
        
        if(!flag)sum+=mp[s[s.size()-1]];
        
        return sum;
        
        
        
        
    }
};