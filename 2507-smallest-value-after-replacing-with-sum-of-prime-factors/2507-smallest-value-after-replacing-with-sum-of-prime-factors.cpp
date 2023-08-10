class Solution {
public:

int primeFactor(int n)
{
    
    
    int sum=0;
    
    for(int i=2;n>1;i++)
    {
        while(n%i==0)
        {
            sum=sum+i;
            n=n/i;
        }
    }
    
    
        return sum;
    
}
       
int smallestValue(int n) 
{
      
    int sum=primeFactor(n);
    cout<<n;
    if(sum == n)
    {
        
        return sum;
    }
    else
        return smallestValue(sum); 
    
}
    
};