class Cashier {
public:
    
    unordered_map<int, int> mp;
    
    int dis;
    
    int cnt=0;
    
    int nn;
    
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices)
    {
        nn=n;
        dis=discount;
        
        for(int i=0;i<products.size();i++)
        {
            mp[products[i]]=prices[i];
        }
        
    }
    
    double getBill(vector<int> product, vector<int> amount) 
    {
        cnt++;
        
        double ans;
        
        for(int i=0;i<product.size();i++)
        {
            ans+=mp[product[i]]*amount[i];
        }

        
        if(cnt==nn)
        {
            
            ans= ans*((100-dis))/100.00;
            
            cnt=0;
        }
        
        return ans;
        
    }
};

/**
 * Your Cashier object will be instantiated and called as such:
 * Cashier* obj = new Cashier(n, discount, products, prices);
 * double param_1 = obj->getBill(product,amount);
 */