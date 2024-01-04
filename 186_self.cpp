#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    std::string s = "my name is yash";
    std::cout << s << endl;
    int lenght = s.length(); // Reverse the entire string
    reverse(s.begin(), s.end());
    std::cout << s << endl;

    int i = 0;
    int j = 0;
    while (i != lenght+1)
    {
        if (s[i] == ' ' || s[i]=='\0')
        {
            reverse(s.begin() + j, s.begin() + i);
            j=i+1;

        }
        i++;
    }
        std::cout << s << endl;
        return 0;
    }
