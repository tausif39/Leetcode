class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        if(flowerbed.size()==1 and n==1)
        {
            if(flowerbed[0]==0)return true;
            return false;
        }
        if(flowerbed.size()==1 and n==0)
        {
            return true;                                                                     
        }
        
        
        if(flowerbed.size()==2 and n==1)
        {
            if(flowerbed[0]==1 || flowerbed[1]==1)
            {
                return false;
            }
            if(flowerbed[0]==0 and flowerbed[1]==0)
            {
                return true;
            }
            
        }
         if(flowerbed.size()==2 and n==0)
         {
             return true;
             
         }
        
        if(flowerbed.size()==2 and n==2)
         {
             return false;
             
         }
        
        
//         if(flowerbed[i]==0 and flowerbed[i+1]==0)
//             {
//                 n--;
//                 if(n==0)return true;
//             }
            
//         if(flowerbed[flowerbed.size()-1]==0 and flowerbed[flowerbed.size()-2]==0)
//             {
//                 n--;
                
                
//             }
        
        
        
//             for(int i=1;i<flowerbed.size()-1;i++)
//             {
//                 if(flowerbed[i]==0 and flowerbed[i+1]==0)

                
                
//             }
        
        int i=0;
        int j=1,k=2;
            
        while(k<=flowerbed.size()-1)
        {
            if(flowerbed[0]==0 and flowerbed[1]==0)
            {
                n--;
                flowerbed[0]=1;
                // i++;j++;k++;
            }
           if(j==flowerbed.size()-2 and k==flowerbed.size()-1 and flowerbed[j]==0 and flowerbed[k]==0)  
          {
              flowerbed[k]=1;
              n--;
              k++;
          }
            
         else if(flowerbed[i]==0 and flowerbed[j]==0 and flowerbed[k]==0 )
            {
                flowerbed[j]=1;
                n--;
                i++;
                j++;
                k++;
                if(n==0) return true;
                
            }
            
            else
            {
                i++;
                j++;
                k++;
                
            }
            
            
        }
            
        if(n<1)
        {
            return true;
        }
            return false;
     
        
    }
};