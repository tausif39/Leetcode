class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int m, s = 0, e = arr.size() - 1;

        while (s <= e)
        {
            m = (s + e) / 2;

            if (arr[m] < arr[m + 1])
            {
                s = m + 1;
            }

            else if (arr[m] > arr[m + 1] && arr[m] < arr[m-1])
            {
                e = m - 1;
            }
            else if (arr[m] > arr[m + 1] && arr[m] > arr[m - 1])
            {
                return m;
            }
        }
        return -1;
    }
};