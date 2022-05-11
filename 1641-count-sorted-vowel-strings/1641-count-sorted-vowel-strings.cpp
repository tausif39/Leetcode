class Solution {
public:
    
     int count(int i, int n, string &vowels){

   		if(n==0) return 1; // if a string of length n is formed

   		if(i>=5) return 0; // if i exceeds the length of vowels

   		int pick, notPick;
   		// pick i.e. pick this alphabet
   		pick= count(i, n-1, vowels);
   		// notPick i.e. skip this alphabet
   		notPick= count(i+1, n, vowels);

   		return pick + notPick;
   }

   int countVowelStrings(int n) {
   	 string vowels= "aeiou"; // all vowels in lexicographically sorted order
   	 return count(0, n, vowels);
   }
    
    
};
