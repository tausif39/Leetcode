class FrequencyTracker {
public:
    map<int,int> mp,np;
    FrequencyTracker() {
        
    }
    
    void add(int num) {
        if(mp[num]>0)
        {
            np[mp[num]]--;
        }
        mp[num]++;
        np[mp[num]]++;
    }
    
    void deleteOne(int number) {
         if(mp[number]>0)
        {
            np[mp[number]]--;
              mp[number]--;
             
        if(mp[number] == 0)
        {
            mp.erase(number);
        }
             else{
                 np[mp[number]]++;
             }
        }
       
    }
    
    bool hasFrequency(int frequency) {
        return np[frequency] > 0;
    }
};