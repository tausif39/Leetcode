class Solution {
public:
    int search(vector<int> nums, int target)
{
    int pivot = findPivot(nums);

    // if you did not find nums pivot, it means the array is not rotated
    if (pivot == -1)
    {
        // just do normal binary search
        return binarySearch(nums, target, 0, nums.size() - 1);
    }

    // if pivot is found, you have found 2 asc sorted arrays
    if (nums[pivot] == target)
    {
        return pivot;
    }

    if (target >= nums[0])
    {
        return binarySearch(nums, target, 0, pivot - 1);
    }

    return binarySearch(nums, target, pivot + 1, nums.size() - 1);
}

int binarySearch(vector<int> arr, int target, int start, int end)
{
    while (start <= end)
    {
        // find the middle element
        //            int mid = (start + end) / 2; // might be possible that (start + end) exceeds the range of int in java
        int mid = start + (end - start) / 2;

        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            // ans found
            return mid;
        }
    }
    return -1;
}

// this will not work in duplicate values
int findPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // 4 cases over here
        if (mid < end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid > start && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        if (arr[mid] <= arr[start])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int findPivotWithDuplicates(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // 4 cases over here
        if (mid < end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid > start && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }

        // if elements at middle, start, end are equal then just skip the duplicates
        if (arr[mid] == arr[start] && arr[mid] == arr[end])
        {
            // skip the duplicates
            // NOTE: what if these elements at start and end were the pivot??
            // check if start is pivot
            if (start < end && arr[start] > arr[start + 1])
            {
                return start;
            }
            start++;

            // check whether end is pivot
            if (end > start && arr[end] < arr[end - 1])
            {
                return end - 1;
            }
            end--;
        }
        // left side is sorted, so pivot should be in right
        else if (arr[start] < arr[mid] || (arr[start] == arr[mid] && arr[mid] > arr[end]))
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

};