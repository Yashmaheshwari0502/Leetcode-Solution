class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        if (size <= 1)
        {
            return ans;
        }
        else
        {
            for (int i = 0; i < size-1; i++)
            {
                if (nums[i] == nums[i + 1])
                {
                    ans.push_back(nums[i]);
                }
            }
        }
        return ans;
    }
};