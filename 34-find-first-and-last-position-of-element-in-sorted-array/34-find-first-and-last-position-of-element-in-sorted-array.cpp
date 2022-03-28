class Solution {
	public:
		int bSearch(vector<int> &nums, int target)
		{
			int low = 0, high = nums.size();
			while (low < high)
			{
				int mid = low + (high - low) / 2;

				if (nums[mid] > target)
					high = mid;
				else
					low = mid + 1;
			}
            
            // cout<<low<<" ";
            
			return low;
		}

		vector<int> searchRange(vector<int> &nums, int target)
		{
			int p1 = bSearch(nums, target - 1);   // gives first position of the targeted value
			int p2 = bSearch(nums, target);        // last position
            
            // cout<<p1<<endl<<p2;

			if (p1 == p2 )// That means element is not present hence return [-1,-1]
				return {-1, -1};

			return {p1, p2-1}; //element is present 
		}
		};