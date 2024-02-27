class Solution {
public:
    int myAtoi(string s) {
        int result=0;
        int i=0;
        int sign=1;
        while(i<s.size()&& s[i]==' '){
            i++;
        }
        if(i<s.size() && (s[i]=='-'|| s[i]=='+')){
            sign=(s[i]=='-')? -1:1;
            i++;
            
        }      
        while(i<s.size()&& isdigit(s[i])){
            int digit=s[i]-'0';
           
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
             result=result*10+(s[i]-'0');
            
         i++;
        }
        

        return result*sign;
    }
};