class Solution {
public:
    int countSegments(string s) 
    {
        
        stringstream ss(s);
        
        string temp;
        vector<string> v;
        
        int cnt=0;
        
        
        while(ss>>temp)
        {
            cnt++;
        }
        
        return cnt;
        
        
    }
};
            // if(temp.size()==1)
            // {
            //     char c=temp[0];
            //     if(c>='a' and  )
            // }