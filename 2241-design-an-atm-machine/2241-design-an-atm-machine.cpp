class ATM {
    vector<long> notes; 
public:
    ATM() {
        notes.resize(5); 
    }
    
    void deposit(vector<int> banknotesCount) {
        for (int i = 0; i < 5; ++i) 
            notes[i] += banknotesCount[i]; 
    }
    
    vector<int> withdraw(int amount) {
        vector<long> ans(5), face = {20, 50, 100, 200, 500}, orig = notes; 
        for (int i = 4; i >= 0; --i) {
            ans[i] = min(notes[i], amount/face[i]); 
            notes[i] -= ans[i]; 
            amount -= ans[i] * face[i]; 
        }
        if (amount == 0) return vector<int>(ans.begin(), ans.end()); 
        notes = orig; 
        return {-1}; 
    }
};