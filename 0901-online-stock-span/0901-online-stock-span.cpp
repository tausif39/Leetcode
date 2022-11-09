class StockSpanner {
public:
    
    
    
    
    vector<int> v;
    
    
    
    StockSpanner()
    {
        
        
    }
    
    int next(int price) 
    {
        
                v.push_back(price);
        
                int span=0;
        
                int current=0;
        
        
        for(int i=v.size()-1;i>=0;i--)
        {
            
            if(v[i]<=price)
            {
                
                // cout<<v[i]<<" ";
                
                 current++;
                 span=max(current,span);
            }
            else
            {
                break;
            }
            
        }
        
        return span;
        
        
        
    }
};



/**
//         stack<int> temp;
        
//         st.push(price);
        
        
//         temp=st;
        
//         int span=0;
        
//         int current=0;
        
//         while(!temp.empty())
//         {
            
//             if(temp.top()<=price)
//             {
//                 current++;
//                 span=max(current,span);
//             }
            
//             else
//             {
                
//                 current=0;
//                 break;
//             }
            
//             temp.pop();
 
      
//         }
        
        // return span;
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */