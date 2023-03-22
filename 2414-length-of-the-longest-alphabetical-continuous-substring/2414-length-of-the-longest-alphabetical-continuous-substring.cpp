class Solution {
public:
    int longestContinuousSubstring(string s) {
    int mx=1,cnt=1;

	for(int i=1;i<s.length();i++){
		if(s[i]-s[i-1]==1){
			++cnt;
		}
		else{
			mx=max(mx,cnt);
			//i+=cnt-1;
			cnt=1;
		}
	}
	mx=max(mx,cnt);
	return mx;
    }
};