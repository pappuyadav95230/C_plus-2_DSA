// Reverse number in array
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int size = 7;

//     int start = 0;
//     int end = size - 1;

//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// for even number
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = 6;

//     int start = 0;
//     int end = size - 1;

//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

#include <iostream>
using namespace std;

// swap function implement 
void SwapNum(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        SwapNum(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}