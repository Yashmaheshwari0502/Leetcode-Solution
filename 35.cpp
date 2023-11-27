int getpivot(vector<int> &nums, int size)
{
    int start = 0;
    int end = size ;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (nums[0] <= nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return start;
}

int binary(vector<int> &nums, int start, int end, int target)
{

    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int size=nums.size()-1;
        int pivot = getpivot(nums, size);
        if (target <= nums[size] && target >= nums[pivot])
        {
            return binary(nums, pivot, size, target);
        }
        else
        {
            return binary(nums, 0, pivot - 1, target);
        }
    }
};