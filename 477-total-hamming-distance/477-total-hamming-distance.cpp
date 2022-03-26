// The idea behind is that int will come in 32 bit , so we will run loop i=0 to 32 times
// and will count number of elements having set bit on ith index.

// Let say for i= 0 , number of elements having set bit is c
// So. this set bit will generate total hamming distance (nums.size()-c) * c.

// Like if array given {1,2,3,4,5}={ 001 , 010 , 011 , 100 , 101 }
// so at 0th index, number of elements having set bit at 0th index is 3
// And 2 elements having unset at 0th index.
// So total hamming distace for i=0 will be 3 * 2=6
// Same we can go for i=1,2,3,...31 and add all the distance and return final distance
    
class Solution {
public:
 
    int totalHammingDistance(vector<int>& nums) {
        int res=0;
        for(int i=0;i<32;i++)
        {
            int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if((1<<i)&nums[j]) c++;  //checking ith bit set or not
            }
            res+=(nums.size()-c)*c;
        }
        return res;
        
    }
};