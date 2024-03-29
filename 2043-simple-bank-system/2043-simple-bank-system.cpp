class Bank {
public:
    
    vector<long long> v;
    
    Bank(vector<long long>& balance) 
    {
        v=balance;
        
    }
    
    bool transfer(int account1, int account2, long long money) 
    {
        int n= v.size();
        if(account1>n || account2>n)return false;
        
        if(money>v[account1-1])return false;
        
        v[account1-1]-=money;
         v[account2-1]+=money;
        
        return true;
        
    }
    
    bool deposit(int account, long long money)
    {
        int n= v.size();
        if(account>n)return false;
        
        v[account-1]+=money;
        
        return true;
    }
    
    bool withdraw(int account, long long money) 
    {
        int n= v.size();
        
        if(account>n)return false;
        
        if(money>v[account-1])return false;
        
        
         v[account-1]-=money;
        
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */