class Solution {

public:

    bool search(vector<int>& nums, int target) {

           int s = 0, e = nums.size()-1;

        while(s<=e){

            int mid = s+(e-s)/2;

            if(nums[mid] == target){

                return true;

            }
            
            
if(nums[mid]==nums[s] and nums[mid]==nums[e])
    {
    s++,e--;
    
}
           else if(nums[s] <= nums[mid]){

                if(nums[s] <= target && nums[mid] > target){

                    e = mid-1;

                }else{

                    s = mid+1;

                }

            }else{

                if(nums[mid] <target && target <=nums[e]){

                    s= mid+1;

                }else{

                    e= mid-1;

                }

            }

        }

        return false;   

    }

};


     

