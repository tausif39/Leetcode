class Solution {
public:
    
     int count(int i, int n, string &vowels, vector<vector<int>> &dp){

   	  if(n==0) return 1; // if a string of length n is formed

   	  if(i>=5) return 0; // if i exceeds the length of vowels

   	  if(dp[i][n]!=-1) return dp[i][n]; // check if dp already contains the answer

   	  int pick, notPick;
   	  // pick i.e. pick this alphabet
   	  pick= count(i, n-1, vowels, dp);
   	  // notPick i.e. skip this alphabet
   	  notPick= count(i+1, n, vowels, dp);

   	  return dp[i][n]= pick + notPick; // store the value in dp
   }

   int countVowelStrings(int n) {
   	 string vowels= "aeiou"; // all vowels in lexicographically sorted order
   	 vector<vector<int>> dp(5, vector<int>(n+1, -1)); // declare dp vector
   	 return count(0, n, vowels, dp);
   
    
   }
};
