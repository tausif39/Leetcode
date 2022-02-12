class Solution {
public:
    long long smallestNumber(long long num) {
        if(num == 0) return 0;//if num is zero then smallest is zero
		//if number is less then zero sort its digits in non-increasing order
        else if(num < 0){
            string s = to_string(num);
            sort(s.begin()+1 , s.end(), greater<int>());
            return stoll(s);
        }
		//if number is positive sort its digit in increasing order
        else{
            string s = to_string(num);
            sort(s.begin(), s.end());
			//if first digit is zero swap it with first non-zero
            if(s[0] == '0'){
                int i = 1;
                while(s[i] == '0') i++;
                swap(s[0], s[i]);
            }
            return stoll(s);
        }
    }
};