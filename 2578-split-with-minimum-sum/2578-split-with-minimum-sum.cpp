class Solution {
public:
    int splitNum(int num) 
    {
        
        string s=to_string(num);
        
        vector<int> v;
        
        string num1,num2;
        
        
        for(int i=0;i<s.size();i++)
        {
            v.push_back(s[i]-'0');
        }
        
        sort(v.begin(), v.end());
        
        for(int i=0;i<v.size();i++)
        {
            if(i%2==0)
            {
                num1+=v[i]+'0';
                
            }
            else num2+= v[i]+'0';
        }
        
        
        
        return stoi(num1) + stoi(num2);
        
    }
};