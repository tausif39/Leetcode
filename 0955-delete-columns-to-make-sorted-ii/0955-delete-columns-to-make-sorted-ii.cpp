class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans=0;
        int idx=0;
        for(int i=1; i<strs.size(); i++){
			// if two adjacent strings are not lexicographically ordered as needed,
            if(strs[i]<strs[i-1]){
				// find the index at which above case occurs
                for(int j=0; j<strs[i].size(); j++){
                    if(strs[i][j]<strs[i-1][j]){
                        idx=j;
                        break;
                    }
                }
				// delete the entire column at the position `idx`
				// here we set them with '*' and this works similir to deleting chars at index `idx`.
                for(auto &a: strs){
                    a[idx]='*';
                }
				// reiterate from the starting and find the next adjacent pairs then are not lexicographically arrange.
				// i=0, coz i++ will make it i=1
                i=0;
				// here we deleted a column, so increase the ans value by one.
                ans++;
            }
        }
        return ans;
    }
};