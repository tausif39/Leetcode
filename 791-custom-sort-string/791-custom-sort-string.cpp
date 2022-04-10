string str;
static bool comparetor(char c1, char c2)
{
    
    return str.find(c1)<str.find(c2);
}


class Solution {
public:
   

 
    
    string customSortString(string order, string s) {
        str=order;
        sort(s.begin(),s.end(),comparetor);
        return s;
    }
};