class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		int arr[26] = {0};
		for(auto ch:magazine){
			arr[ch - 'a']++;
		}
		for(auto ch:ransomNote){
			arr[ch - 'a']--;
			if(arr[ch - 'a'] < 0) return false;
		}
		return true;
	}
};