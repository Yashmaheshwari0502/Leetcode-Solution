class Solution
{
public:
    int maxSum(vector<int> &nums)
    {
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); i++)
            {
                if (nums[i] + nums[j] % 11 == 0)
                {
                    temp.push_back(nums[i] + nums[j]);
                }
            }
        }
    }
};