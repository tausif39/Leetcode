class Solution {
public:
    
    
    int difftime(int a,int b)
    {
        if(a<b)
        {
            swap(a,b);
        }
        
        int diff1=abs(1440-a+b);
        
        int diff2=abs(b-a);
        
        return min(diff1,diff2);
        
        
    }
    
        int miniutes(string a)
        {
           string s1;
           
            s1+=a[0];
            s1+=a[1];
            
            int h1=stoi(s1);
            
            int time=0;
            time+=h1*60;
            
            
            string s2;
           
            s2+=a[3];
            s2+=a[4];
            
            int h2=stoi(s2);
            
            time+=h2;
            
            return time;
            
            
            
        }
    
    
    int findMinDifference(vector<string>& timePoints) 
    {
        
        int mini=1e7;
        
        vector<int> v;
        
        for(int i=0;i<timePoints.size();i++)
        {
          
               int time1=miniutes(timePoints[i]);
               // int time2=miniutes(timePoints[j]);
            
                v.push_back(time1);
            
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<v.size()-1;i++)
        {
        mini=min(mini,difftime(v[i],v[i+1]));   
            
        }
        
        
        
       mini=min(mini,difftime(v[0],v[v.size()-1]));    
        
        
        
        
        
        return mini;
        
        
    }
};