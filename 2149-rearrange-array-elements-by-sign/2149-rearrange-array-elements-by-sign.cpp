class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector <int>  pos;
		vector <int> neg;
		int i=0;
		while(i < nums.size())
		{
			if(nums[i]>0)
			{
				pos.push_back(nums[i]);
			}

			else if(nums[i]<0)
			{
				neg.push_back(nums[i]);
			}

			i++;
		}


		int j=0;
		int p=0,n=0;
		while(j<nums.size())
		{
			nums[j]=pos[p];j++;p++;

			nums[j]=neg[n];j++;n++;

		}


		return nums;
        
    }
};