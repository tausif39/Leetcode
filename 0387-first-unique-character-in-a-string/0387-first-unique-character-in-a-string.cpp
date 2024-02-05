
//if the string is extremely long, we wouldn't want to traverse it twice, so instead only storing just counts of a char, we also store the index, and then traverse the hash table.



class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26,0);
		for(char c : s) v[c - 'a']++;
		for(int i = 0; i < s.length(); i++){
			if(v[s[i] - 'a'] == 1) return i;
		}
		return -1;
    }
};