
class Solution
{
private:bool valid(char ch)
    {
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
        {
            return 1;
        }
        return 0;
    }
    char lowercase(char ch)
    {
        if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
        {
            return ch;
        }
        else
        {
            int temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool validpalindrome(string temp){
        int st = 0;
        int e = temp.size() - 1;
        while (st < e)
        {
            if (lowercase(temp[st]) != lowercase(temp[e]))
            {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
    

public:
    bool isPalindrome(string s)
    {
        string temp = "";
        for (int j = 0; j < s.size(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }
        return validpalindrome(temp);
    }

};