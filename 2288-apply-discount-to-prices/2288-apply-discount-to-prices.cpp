class Solution {
public:
    string discountPrices(string sentence, int discount) {
		// Convert given string to stringstream
        stringstream ss(sentence);
        string word;
        vector<int> words;
        string ans = "";
        while (ss >> word) {
			// Check if the extracted word is a price
            if (word[0] == '$' && word.length() > 1) {
                unsigned long long int price = 0;
                bool flag = true;
                for (int i = 1; i < word.length(); ++i) {
				   // If the character is not a number break and just add the word to the answer
                    if (word[i] < '0' || word[i] > '9') {
                        flag = false;
                        break;
                    }
					// Convert the string to integer price
                    price = price * 10 + (word[i] - '0');
                }
                if (!flag) {
                    ans += " " + word;
                    
                } else {
					// Calculate the discount, double is used for more precision - float will not work
                    double dis = (double)((double)(discount) / 100) * (double)price;
					// Calculate the new price
                    double newp = (double) price - dis;
                    stringstream out;
					// Out the new price to a stringstream variable with precision 2
                    out << std::fixed << std::setprecision(2) << newp;
					// Append to the answer
                    ans += " $" + out.str();
                }
            } else {
				// If not a price, just add the word to the answer
                ans += " " + word;
            }
        }
		// Remove the first character (as it's a space)
        ans.erase(ans.begin());
        return ans;
    }
};