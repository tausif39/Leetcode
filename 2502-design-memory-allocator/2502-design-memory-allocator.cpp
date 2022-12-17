class Allocator {
public:
    vector<int>v;
    
    int cap=0;
    Allocator(int n) {
        v.resize(1001,-1);
        cap=n;
    }
    
    int allocate(int size, int mID) {
        for(int i=0;i<cap;i++){
            if(v[i]==-1){
               
               int len=0,j=i;
                while(v[i]==-1 && i<cap && len<size){
                   i++;
                   len++;
                }
                if(size==len){
                   for(int k=j;k<i;k++){
                       v[k]=mID;
                   }
                   return j;
                }

            }
        }
         
       return -1; 
    }
    
    int free(int mID) {
        int res=0;
     
      for(int i=0;i<cap;i++){
          if(v[i]==mID){
              v[i]=-1;
              res++;
          }
      }
        return res;
    }
};