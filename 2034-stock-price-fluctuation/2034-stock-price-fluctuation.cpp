    class StockPrice {
    public:

        int curr=0;
        priority_queue<pair<int,int>> mx_heap;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mn_heap;
        
        map<int, int> mp;

        StockPrice()
        {

        }

        
      void update(int timestamp, int price) 
        {
            mp[timestamp]=price;
            curr=max(curr,timestamp);
            mx_heap.push({price,timestamp});
            mn_heap.push({price,timestamp});
          
        }

        
        int current() 
        {
            return mp[curr];
        }

        int maximum() 
        {
           
            while(mp[mx_heap.top().second]!=mx_heap.top().first)
            {
                mx_heap.pop();
            }
            
            return mx_heap.top().first;
            
            

        }

        int minimum() 
        {
            
            while(mp[mn_heap.top().second]!=mn_heap.top().first)
            {
                mn_heap.pop();
            }
            
            return mn_heap.top().first;
        }
    };