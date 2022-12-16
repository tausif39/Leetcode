class MyQueue {
public:
    
    stack<int> s,temp;
    
    
    MyQueue() {
        
    }
    
    void push(int x) 
    {
        s.push(x);
        
    }
    
    int pop() 
    {
        while(!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }
        
        int x=temp.top();
        
        temp.pop();
        
        while(!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
        
        return x;
        
        
    }
    
    int peek() 
    {
         while(!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }
        
        int x=temp.top();
        
        // temp.pop();
        
        while(!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
        
        return x;
        
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */