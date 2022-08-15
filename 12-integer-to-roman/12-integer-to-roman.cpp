class Solution {
public:
	map<int, string> m = {
		{1000, "M"},
		{900,  "CM"},
		{500,  "D"},
		{400,  "CD"},
		{100,  "C"},
		{90,   "XC"},
		{50,   "L"},
		{40,   "XL"},
		{10,   "X"},
		{9,    "IX"},
		{5,    "V"},
		{4,    "IV"},
		{1,    "I"}
	};

	string intToRoman(int num) {
		string ans = "";
		for(auto it=m.rbegin(); it!=m.rend(); it++){
			while(num>=it->first) ans+=it->second, num-=it->first;
		}
		return ans;
	}
};