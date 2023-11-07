class Solution
{
public:
    bool isPalindrome(int x)
    {
        int v = x;
        int ans = 1;
        if (x < 0)
        {
            return false;
        }

        while (v > 0)
        {
            int value = v % 10;
            ans = (ans * 10) + value;
            v = v / 10;
        }

        if (x == ans)
        {
            return true;
        }
    }
};