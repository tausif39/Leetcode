class Solution {
public:
    
    int kthFactor(int n, int k) 
    {     
        
        vector<int> left, right;     
        
        // left.push_back(1);
        // right.push_back(n);
        
        
        for(int factor=1;factor*factor<=n;factor++)
        {
            
            if(n%factor==0)
            {
                
                if(((n/factor)==n || (n/factor)==factor) and factor!=1)
                {
                    left.push_back(factor);
                }
                else
                {
                    
                    left.push_back(factor);
                    right.push_back(n/factor);
                }
                
            }
            
        }
      
        
        reverse(right.begin(),right.end());
        
//         for(auto it:left)cout<<it<<" ";
        
//         cout<<endl;
        
//         for(auto it:right)cout<<it<<" ";
        
        if(k<=left.size())
        {
            return left[k-1];
        }
        
        else if(k<=(left.size()+right.size()))
        {
            k-=left.size();
            
            return right[k-1];
        }
        
        return -1;
        
    }
};