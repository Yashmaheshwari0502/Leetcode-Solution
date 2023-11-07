// #include <iostream>
// using namespace std;

// void print(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void sort(int arr[])
// {
//     int n = sizeof(arr);
//     int left = 0;
//     int right = n - 1;
//     while (left < right)
//     {
//         while (left == 0 && left < right)
//         {
//             left++;
//         }
//         while (right == 2 && left < right)
//         {
//             right--;
//         }
//         while ((left == 1 && right == 0) && (left < right))
//         {
//             int temp = arr[left];
//             arr[left] = arr[right];
//             arr[right] = arr[left];
//             left++;
//             right--;
//         }
//           while ((left == 2 && right == 0) && (left < right))
//         {
//             int temp = arr[left];
//             arr[left] = arr[right];
//             arr[right] = arr[left];
//             left++;
//             right--;
//         }
//         while ((left == 2 && right == 1) && (left < right))
//         {
//             int temp = arr[left];
//             arr[left] = arr[right];
//             arr[right] = arr[left];
//             left++;
//             right--;
//         }
//     }
// }

// int main()
// {
//     int arr[6] = {2, 0, 2, 1, 1, 0};
//     cout << "Array before sort\n";
//     print(arr, 6);

//     sort(arr);
//     print(arr, 6);
//     return 0;
// }

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = sizeof(nums);
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        int i = 0;
        while (i < n)
        {
            if (nums[i] % 2 == 0)
            {
                count1++;
                i++;
            }
            else if (nums[i] % 1 == 0)
            {
                count2++;
                i++;
            }
            else
            {
                count0++;
                i++;
            }
        }
        nums[n] = {0};
        for (int i = count0; i < count1; i++)
        {
            nums[i] = 1;
        }
        for (int i = count1; i < count2; i++)
        {
            nums[i] = 1;
        }
    }
};