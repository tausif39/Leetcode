class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        if(arr.size()<=2) return false;
        
        int i=0;
        int j=arr.size()-1;
        
        while(i<arr.size()-2 and arr[i+1]>arr[i]) i++;
        
        while(j>1 and arr[j-1]>arr[j]) j--;
        
        return i==j;
    }
};